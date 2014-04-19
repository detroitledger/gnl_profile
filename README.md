Detroit Ledger: Drupal install profile
======================================

This Drupal install profile is used by detroitledger.org.

Docker install
--------------

Use Docker to easily roll out the site. See `docker-deploy.sh`.

Local install
-------

With PHP>5.4 and Drush 6:

```
drush make --working-copy https://raw.github.com/detroitledger/gnl_profile/7.x-1.x/distro.make gnl_webroot
cd gnl_webroot
mysql -uroot -e 'create database gnl_test'
drush site-install gnl_profile  --account-name=admin --account-pass=admin --db-url=mysql://root@localhost/gnl_test --yes
(cd profiles/gnl_profile/themes/gnl_theme; compass compile)
drush cc all
bash ./profiles/gnl_profile/modules/custom/migrate_gnl/download.sh # requires write access to /tmp
drush mreg
drush mi OrgNTEETypes
drush mi GrantTypes
drush mi Orgs
drush mi Grants
drush runserver --server=builtin 8080
```

Test
----

A test suite lives in `tests/`. Tests are run using [PhantomJS](http://phantomjs.org/), [Behat](http://behat.org), [Mink Extension](http://extensions.behat.org/mink/), and [Drupal Extension](https://github.com/jhedstrom/drupalextension).

After you do everything in the Install section above, you can run tests! Make sure the server is running on port 8080.

```
# install phantomjs
# npm install -g phantomjs works well!
# run phantomjs:
phantomjs --webdriver=8643 &
# set up behat/mink
cd profiles/gnl_profile/tests
curl -s https://getcomposer.org/installer | php
php composer.phar install # you need the php5-curl extension, among other extensions!
# make sure behat has the drupalextension step definitions.. if nothing shows up, run:
#./bin/behat --init
./bin/behat -dl
# run tests
./bin/behat features/
```

[API Documentation](http://docs.detroitledger.apiary.io/)
------------------

[API documentation is available on Apiary](http://docs.detroitledger.apiary.io/).



More information
----------------

* http://detroitledger.org/
* https://twitter.com/detroitledger
* http://detroitledger.tumblr.com/

Credits
-------

Benjamin Chodoroff, Matthew Hampel, Jessica McInchak.

License
-------

Copyright 2013, Benjamin Chodoroff, Matthew Hampel, Jessica McInchak. This software is distributed under the terms of the GNU General Public License.
