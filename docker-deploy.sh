docker run -v /var/lib/mysql --name=gnl-db-data busybox true
docker run -d --volumes-from=gnl-db-data --name=gnl-db bnchdrff/mariadb
docker run -v /srv/www -v /etc/nginx/sites-enabled --name=gnl-www-data busybox true
docker run -d -p 80:80 -p 2222:22 --link=gnl-db:db --volumes-from=gnl-www-data --name=gnl-www bnchdrff/nginx-php5-drupal
cat ~/.ssh/authorized_keys > /var/lib/docker/aufs/mnt/`docker inspect  --format="{{.ID}}" gnl-www`/root/.ssh/authorized_keys
chmod 600 /var/lib/docker/aufs/mnt/`docker inspect --format="{{.ID}}" gnl-www`/root/.ssh/authorized_keys
# these steps are only required for a from-scratch build (not re-using a data container)
# ssh into gnl-www
#ssh root@`docker inspect --format="{{.NetworkSettings.IPAddress}}" gnl-www`
cp /etc/nginx/sites-available/site.conf /etc/nginx/sites-enabled/gnl.detriot.org.conf
chmod 755 /srv/www
cd /srv/www
drush make --working-copy https://raw.github.com/detroitledger/gnl_profile/7.x-1.x/distro.make drupal
chown -R www-data:www-data drupal
cd drupal
mysql -uroot -h$DB_PORT_3306_TCP_ADDR -e'create database gnl'
drush site-install gnl_profile  --account-name=admin --account-pass=admin --db-url=mysql://root@$DB_PORT_3306_TCP_ADDR/gnl --yes
bash ./profiles/gnl_profile/modules/custom/migrate_gnl/download.sh
drush mreg
drush mi OrgNTEETypes
drush mi GrantTypes
drush mi Orgs
drush mi Grants

