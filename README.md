# GodotModules
These are the Godot Modules you should add to the godot repository's "modules" folder when building.
* By adding these files, you can use the custom .cpp classes anywhere in the project.
* Only select the directories contained in this repository when copying to the "modules" folder in the Godot repository.

Also contained are the compile commands for both Windows and Mac contained in different .txt files.
* All of them contain build options meant for different purposes.
* Any of the ones under RELEASE BUILDS are for exporting the Godot project.

Below are explanations for the different .txt files:
# "commands to build.txt"
* The use_lto=yes option I think improves performance, but it also takes MUCH longer to build.
  * Even after everything is compiled, this has to do even more.
* The one without is really good if you want to keep making changes to the project.
* Only use the use_lto=yes if you know you are not going to compile again for a while.
* There is a linux build in here, but I am not even sure if it works honestly.
  * I think I was testing on a Raspberry Pi
* The release builds are only for exporting the godot project for release.
  * They all take a while and are not used for running the actual project (Hence, the tools=no line).

# "commands to build - Copy.txt"
* I don't know why this is still here but keeping just in case and out of laziness.

# "compile.txt"
* The first option is compile only.
 * It does not actually build anything I believe, but is more of a test to see if you are able to compile.
* target compilations build is the one you want to use.
* The section with the various number of commands makes a .app bundle on mac OS.
* The final line signs the .app
* Just like in the windows releases, these are for releases only.
