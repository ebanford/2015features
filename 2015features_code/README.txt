2015 Cornell Drupal Code Camp

Demo of using the Features module

Resides in: sites/camp-demo/2015features

Folder 2015features_code contains needed code

0) SETUP
- start with blank Drupal 7
- download features, ctools, date, devel, strongarm
- commit

- Enable Field UI
- drush en field_ui

- add content type: admin/structure/types
- name it: Features Demo
- add fields of various types

Creating your feature: 
- admin/structure/features
- under Content Type, choose Features Demo
- export that content type to sites/all/modules/features
- unzip, delete zip
- look at code
- commit

- add another field
- recreate feature, delete feature folder, unzip, delete zip
- gitx: look at what was added
- commit

- change something in UI
- recreate feature
- gitx: look at what happened in code
- commit

1) HOOKS

- add a hook
- demo how devel works to expose fields that are available

2) HOOK for just your module

3) Add a submit button function

4) Add validation function

- change something in UI, export again
- show that this did not impact hook code