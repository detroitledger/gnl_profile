Detroit Ledger: Drupal install profile
======================================

This Drupal install profile is used by detroitledger.org.

Install
-------

With PHP>5.4 and Drush 6:

```
drush make --working-copy https://raw.github.com/detroitledger/gnl_profile/7.x-1.x/distro.make gnl_webroot
cd gnl_webroot
mysql -uroot -e 'create database gnl_test'
drush site-install gnl_profile  --account-name=admin --account-pass=admin --db-url=mysql://root@localhost/gnl_test --yes
(cd profiles/gnl_profile/themes/gnl_theme; compass compile)
drush cc all
drush runserver --server=builtin 8080
```

More information
----------------

http://detroitledger.org/
https://twitter.com/detroitledger
http://detroitledger.tumblr.com/

Credits
-------

Benjamin Chodoroff, Matthew Hampel, Jessica McInchak.

License
-------

Copyright 2013, Benjamin Chodoroff, Matthew Hampel, Jessica McInchak. This software is distributed under the terms of the GNU General Public License.
