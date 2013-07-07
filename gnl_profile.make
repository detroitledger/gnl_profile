core = 7.x

api = 2
projects[drupal][version] = "7.22"

; Modules
projects[addressfield][subdir] = "contrib"
projects[addressfield][version] = "1.0-beta4"

projects[views_bulk_operations][subdir] = "contrib"
projects[views_bulk_operations][version] = "3.1"

projects[context][subdir] = "contrib"
projects[context][version] = "3.0-beta6"

projects[ctools][subdir] = "contrib"
projects[ctools][version] = "1.3"

projects[date][subdir] = "contrib"
projects[date][version] = "2.6"

projects[devel][subdir] = "contrib"
projects[devel][version] = "1.3"

projects[diff][subdir] = "contrib"
projects[diff][version] = "3.2"

projects[entity][subdir] = "contrib"
projects[entity][version] = "1.1"

projects[entityreference][download][type] = "git"
projects[entityreference][download][url] = "git://git.drupal.org/project/entityreference.git"
projects[entityreference][download][branch] = "7.x-1.x"
projects[entityreference][type] = "module"
projects[entityreference][subdir] = "contrib"

projects[features][subdir] = "contrib"
projects[features][version] = "2.0-rc1"

projects[git_deploy][subdir] = "contrib"
projects[git_deploy][version] = "2.x-dev"

projects[gnl_schema][download][type] = "git"
projects[gnl_schema][download][url] = "https://github.com/detroitledger/gnl_schema.git"
projects[gnl_schema][download][branch] = "7.x-1.x"
projects[gnl_schema][type] = "module"
projects[gnl_schema][subdir] = "features"

projects[link][subdir] = "contrib"
projects[link][version] = "1.1"

projects[migrate][type] = "module"
projects[migrate][subdir] = "contrib"
projects[migrate][download][type] = "git"
projects[migrate][download][url] = "git://git.drupal.org/project/migrate.git"
projects[migrate][download][branch] = "7.x-2.x"

projects[migrate_gnl][download][type] = "git"
projects[migrate_gnl][download][url] = "https://github.com/detroitledger/migrate_gnl.git"
projects[migrate_gnl][download][branch] = "7.x-1.x"
projects[migrate_gnl][type] = "module"
projects[migrate_gnl][subdir] = "custom"

projects[pathauto][subdir] = "contrib"
projects[pathauto][version] = "1.2"

projects[strongarm][subdir] = "contrib"
projects[strongarm][version] = "2.0"

projects[views][subdir] = "contrib"
projects[views][version] = "3.7"

; Themes
projects[omega][type] = "theme"
projects[omega][download][type] = "git"
projects[omega][download][url] = "git://git.drupal.org/project/omega.git"
projects[omega][download][revision] = "512053f306f546c0aadf772d76cee4479a84e9fb"

projects[gnl_theme][type] = "theme"
projects[gnl_theme][download][type] = "git"
projects[gnl_theme][download][url] = "https://github.com/detroitledger/gnl_theme.git"
projects[gnl_theme][download][branch] = "7.x-1.x"

