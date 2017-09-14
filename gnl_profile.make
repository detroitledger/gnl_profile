core = 7.x

api = 2

; use latest default drupal 7
projects[drupal][version] = "7.x"

; Modules
projects[addanother][subdir] = "contrib"
projects[addanother][version] = "2.2"

projects[addressfield][subdir] = "contrib"
projects[addressfield][version] = "1.0-beta4"
projects[addressfield][patch][1493014][url] = "https://www.drupal.org/files/1493014-5.container_line_breaks.patch"
projects[addressfield][patch][1493014][md5] = "239a33ad9edc9be2cb95c0603eee5f70"

projects[auto_entitylabel][download][type] = "git"
projects[auto_entitylabel][download][url] = "git://git.drupal.org/project/auto_entitylabel.git"
projects[auto_entitylabel][download][branch] = "7.x-1.x"
projects[auto_entitylabel][type] = "module"
projects[auto_entitylabel][subdir] = "contrib"

projects[boxes][subdir] = "contrib"
projects[boxes][version] = "1.1"

projects[composer][type] = "module"
projects[composer][subdir] = "contrib"
projects[composer][download][type] = "git"
projects[composer][download][url] = "git://git.drupal.org/project/composer.git"
projects[composer][download][branch] = "8.x-1.x"

projects[context][subdir] = "contrib"
projects[context][version] = "3.1"

projects[composer_manager][subdir] = "contrib"
projects[composer_manager][version] = "1.7"

projects[ctools][subdir] = "contrib"
projects[ctools][version] = "1.3"

projects[data][subdir] = "contrib"
projects[data][version] = "1.0-alpha7"

projects[date][download][type] = "git"
projects[date][download][url] = "git://git.drupal.org/project/date.git"
projects[date][download][branch] = "7.x-2.x"
projects[date][type] = "module"
projects[date][subdir] = "contrib"

projects[devel][subdir] = "contrib"
projects[devel][version] = "1.3"

projects[diff][subdir] = "contrib"
projects[diff][version] = "3.2"

projects[entity][subdir] = "contrib"
projects[entity][version] = "1.2"

projects[entityreference][download][type] = "git"
projects[entityreference][download][url] = "git://git.drupal.org/project/entityreference.git"
projects[entityreference][download][branch] = "7.x-1.x"
projects[entityreference][type] = "module"
projects[entityreference][subdir] = "contrib"

projects[features][subdir] = "contrib"
projects[features][version] = "2.0"

projects[field_collection][subdir] = "contrib"
projects[field_collection][version] = "1.0-beta12"

projects[flag][subdir] = "contrib"
projects[flag][version] = "3.5"

projects[git_deploy][subdir] = "contrib"
projects[git_deploy][version] = "2.x-dev"

projects[google_analytics][subdir] = "contrib"
projects[google_analytics][version] = "1.4"

projects[hierarchical_term_formatter][subdir] = "contrib"
projects[hierarchical_term_formatter][version] = "1.0-alpha2"

projects[hook_post_action][subdir] = "contrib"
projects[hook_post_action][version] = "1.0-beta1"

projects[inline_entity_form][subdir] = "contrib"
projects[inline_entity_form][version] = "1.5"

projects[link][subdir] = "contrib"
projects[link][version] = "1.1"

projects[libraries][subdir] = "contrib"
projects[libraries][version] = "2.1"

projects[loadtermnames][type] = "module"
projects[loadtermnames][subdir] = "contrib"
projects[loadtermnames][download][type] = "git"
projects[loadtermnames][download][url] = "https://github.com/bnchdrff/loadtermnames"
projects[loadtermnames][download][branch] = "7.x-1.x"

projects[pathauto][subdir] = "contrib"
projects[migrate][type] = "module"
projects[migrate][subdir] = "contrib"
projects[migrate][download][type] = "git"
projects[migrate][download][url] = "git://git.drupal.org/project/migrate.git"
projects[migrate][download][branch] = "7.x-2.x"

projects[pathauto][subdir] = "contrib"
projects[pathauto][version] = "1.2"

projects[schema][subdir] = "contrib"
projects[schema][version] = "1.2"

projects[services][subdir] = "contrib"
projects[services][version] = "3.5"

projects[services_views][subdir] = "contrib"
projects[services_views][version] = "1.0-beta2"

projects[session_api][subdir] = "contrib"
projects[session_api][version] = "1.0-rc1"

projects[strongarm][subdir] = "contrib"
projects[strongarm][version] = "2.0"

projects[token][subdir] = "contrib"
projects[token][version] = "1.5"

projects[uuid][subdir] = "contrib"
projects[uuid][version] = "1.0-alpha5"

projects[uuid_features][subdir] = "contrib"
projects[uuid_features][download][type] = "git"
projects[uuid_features][download][url] = "git://git.drupal.org/project/uuid_features.git"
projects[uuid_features][download][branch] = "7.x-1.x"

projects[views][subdir] = "contrib"
projects[views][download][type] = "git"
projects[views][download][url] = "git://git.drupal.org/project/views.git"
projects[views][download][branch] = "7.x-3.x"
projects[views][patch][6242858][url] = "https://drupal.org/files/issues/views-filter-compare-handler-for-duple-dates-6242858-37.patch"
projects[views][patch][6242858][md5] = "7b3175436acf535a1369d6b04b80fee8"

projects[views_autocomplete_filters][subdir] = "contrib"
projects[views_autocomplete_filters][version] = "1.0"

projects[views_bulk_operations][subdir] = "contrib"
projects[views_bulk_operations][version] = "3.1"

projects[views_data_export][subdir] = "contrib"
projects[views_data_export][version] = "3.0-beta6"

projects[views_raw_sql][type] = "module"
projects[views_raw_sql][subdir] = "contrib"
projects[views_raw_sql][download][type] = "git"
projects[views_raw_sql][download][url] = "git://git.drupal.org/project/views_raw_sql.git"
projects[views_raw_sql][download][branch] = "7.x-1.x"
; projects[views_raw_sql][patch][2002288][url] = "https://drupal.org/files/0001-views_raw_sql-Issue-2002288-Fixed-Sort-default-not-i.patch"
; projects[views_raw_sql][patch][2002288][md5] = "ad778a5b1c44948d908dc0f5e12d3a8f"

projects[views_tree][subdir] = "contrib"
projects[views_tree][version] = "2.0"

projects[xautoload][subdir] = "contrib"
projects[xautoload][version] = "5.1"

; Themes
projects[omega][type] = "theme"
projects[omega][download][type] = "git"
projects[omega][download][url] = "git://git.drupal.org/project/omega.git"
projects[omega][download][revision] = "4555f2fdd5af24e086ec3dadf2a49e8ee6348889"

