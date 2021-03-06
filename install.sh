#!/bin/bash

# ruby and bundler
curl -L get.rvm.io | bash -s stable
bash -c "source /etc/profile.d/rvm.sh && rvm requirements; rvm install ruby-1.9.3-p484; gem install bundler"

# drupal
cd /var/www
drush make --working-copy https://raw.github.com/detroitledger/gnl_profile/7.x-1.x/distro.make drupal
cd drupal
mysql -uroot -ppuppetdrupal -e 'create database gnl_test'
drush site-install gnl_profile  --account-name=admin --account-pass=admin --db-url=mysql://root:puppetdrupal@$DB_PORT_3306_TCP_ADDR/gnl_test --yes
(cd profiles/gnl_profile/themes/gnl_theme; bundle install; compass compile)
drush cc all
bash ./profiles/gnl_profile/modules/custom/migrate_gnl/download.sh # requires write access to /tmp
drush mreg
drush mi OrgNTEETypes
drush mi GrantTypes
drush mi Orgs
drush mi Grants
