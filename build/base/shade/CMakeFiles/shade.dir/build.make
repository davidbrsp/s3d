# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/local/bin/cmake

# The command to remove a file.
RM = /opt/local/bin/cmake -E remove -f

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /opt/local/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/mattjakob/Downloads/s3d

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mattjakob/Downloads/s3d/build

# Include any dependencies generated for this target.
include base/shade/CMakeFiles/shade.dir/depend.make

# Include the progress variables for this target.
include base/shade/CMakeFiles/shade.dir/progress.make

# Include the compile flags for this target's objects.
include base/shade/CMakeFiles/shade.dir/flags.make

base/shade/CMakeFiles/shade.dir/illum.c.o: base/shade/CMakeFiles/shade.dir/flags.make
base/shade/CMakeFiles/shade.dir/illum.c.o: ../base/shade/illum.c
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/mattjakob/Downloads/s3d/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object base/shade/CMakeFiles/shade.dir/illum.c.o"
	cd /Users/mattjakob/Downloads/s3d/build/base/shade && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/shade.dir/illum.c.o   -c /Users/mattjakob/Downloads/s3d/base/shade/illum.c

base/shade/CMakeFiles/shade.dir/illum.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/shade.dir/illum.c.i"
	cd /Users/mattjakob/Downloads/s3d/build/base/shade && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /Users/mattjakob/Downloads/s3d/base/shade/illum.c > CMakeFiles/shade.dir/illum.c.i

base/shade/CMakeFiles/shade.dir/illum.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/shade.dir/illum.c.s"
	cd /Users/mattjakob/Downloads/s3d/build/base/shade && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /Users/mattjakob/Downloads/s3d/base/shade/illum.c -o CMakeFiles/shade.dir/illum.c.s

base/shade/CMakeFiles/shade.dir/illum.c.o.requires:
.PHONY : base/shade/CMakeFiles/shade.dir/illum.c.o.requires

base/shade/CMakeFiles/shade.dir/illum.c.o.provides: base/shade/CMakeFiles/shade.dir/illum.c.o.requires
	$(MAKE) -f base/shade/CMakeFiles/shade.dir/build.make base/shade/CMakeFiles/shade.dir/illum.c.o.provides.build
.PHONY : base/shade/CMakeFiles/shade.dir/illum.c.o.provides

base/shade/CMakeFiles/shade.dir/illum.c.o.provides.build: base/shade/CMakeFiles/shade.dir/illum.c.o

base/shade/CMakeFiles/shade.dir/lang.c.o: base/shade/CMakeFiles/shade.dir/flags.make
base/shade/CMakeFiles/shade.dir/lang.c.o: ../base/shade/lang.c
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/mattjakob/Downloads/s3d/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object base/shade/CMakeFiles/shade.dir/lang.c.o"
	cd /Users/mattjakob/Downloads/s3d/build/base/shade && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/shade.dir/lang.c.o   -c /Users/mattjakob/Downloads/s3d/base/shade/lang.c

base/shade/CMakeFiles/shade.dir/lang.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/shade.dir/lang.c.i"
	cd /Users/mattjakob/Downloads/s3d/build/base/shade && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /Users/mattjakob/Downloads/s3d/base/shade/lang.c > CMakeFiles/shade.dir/lang.c.i

base/shade/CMakeFiles/shade.dir/lang.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/shade.dir/lang.c.s"
	cd /Users/mattjakob/Downloads/s3d/build/base/shade && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /Users/mattjakob/Downloads/s3d/base/shade/lang.c -o CMakeFiles/shade.dir/lang.c.s

base/shade/CMakeFiles/shade.dir/lang.c.o.requires:
.PHONY : base/shade/CMakeFiles/shade.dir/lang.c.o.requires

base/shade/CMakeFiles/shade.dir/lang.c.o.provides: base/shade/CMakeFiles/shade.dir/lang.c.o.requires
	$(MAKE) -f base/shade/CMakeFiles/shade.dir/build.make base/shade/CMakeFiles/shade.dir/lang.c.o.provides.build
.PHONY : base/shade/CMakeFiles/shade.dir/lang.c.o.provides

base/shade/CMakeFiles/shade.dir/lang.c.o.provides.build: base/shade/CMakeFiles/shade.dir/lang.c.o

base/shade/CMakeFiles/shade.dir/light.c.o: base/shade/CMakeFiles/shade.dir/flags.make
base/shade/CMakeFiles/shade.dir/light.c.o: ../base/shade/light.c
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/mattjakob/Downloads/s3d/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object base/shade/CMakeFiles/shade.dir/light.c.o"
	cd /Users/mattjakob/Downloads/s3d/build/base/shade && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/shade.dir/light.c.o   -c /Users/mattjakob/Downloads/s3d/base/shade/light.c

base/shade/CMakeFiles/shade.dir/light.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/shade.dir/light.c.i"
	cd /Users/mattjakob/Downloads/s3d/build/base/shade && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /Users/mattjakob/Downloads/s3d/base/shade/light.c > CMakeFiles/shade.dir/light.c.i

base/shade/CMakeFiles/shade.dir/light.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/shade.dir/light.c.s"
	cd /Users/mattjakob/Downloads/s3d/build/base/shade && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /Users/mattjakob/Downloads/s3d/base/shade/light.c -o CMakeFiles/shade.dir/light.c.s

base/shade/CMakeFiles/shade.dir/light.c.o.requires:
.PHONY : base/shade/CMakeFiles/shade.dir/light.c.o.requires

base/shade/CMakeFiles/shade.dir/light.c.o.provides: base/shade/CMakeFiles/shade.dir/light.c.o.requires
	$(MAKE) -f base/shade/CMakeFiles/shade.dir/build.make base/shade/CMakeFiles/shade.dir/light.c.o.provides.build
.PHONY : base/shade/CMakeFiles/shade.dir/light.c.o.provides

base/shade/CMakeFiles/shade.dir/light.c.o.provides.build: base/shade/CMakeFiles/shade.dir/light.c.o

base/shade/CMakeFiles/shade.dir/material.c.o: base/shade/CMakeFiles/shade.dir/flags.make
base/shade/CMakeFiles/shade.dir/material.c.o: ../base/shade/material.c
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/mattjakob/Downloads/s3d/build/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object base/shade/CMakeFiles/shade.dir/material.c.o"
	cd /Users/mattjakob/Downloads/s3d/build/base/shade && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/shade.dir/material.c.o   -c /Users/mattjakob/Downloads/s3d/base/shade/material.c

base/shade/CMakeFiles/shade.dir/material.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/shade.dir/material.c.i"
	cd /Users/mattjakob/Downloads/s3d/build/base/shade && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /Users/mattjakob/Downloads/s3d/base/shade/material.c > CMakeFiles/shade.dir/material.c.i

base/shade/CMakeFiles/shade.dir/material.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/shade.dir/material.c.s"
	cd /Users/mattjakob/Downloads/s3d/build/base/shade && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /Users/mattjakob/Downloads/s3d/base/shade/material.c -o CMakeFiles/shade.dir/material.c.s

base/shade/CMakeFiles/shade.dir/material.c.o.requires:
.PHONY : base/shade/CMakeFiles/shade.dir/material.c.o.requires

base/shade/CMakeFiles/shade.dir/material.c.o.provides: base/shade/CMakeFiles/shade.dir/material.c.o.requires
	$(MAKE) -f base/shade/CMakeFiles/shade.dir/build.make base/shade/CMakeFiles/shade.dir/material.c.o.provides.build
.PHONY : base/shade/CMakeFiles/shade.dir/material.c.o.provides

base/shade/CMakeFiles/shade.dir/material.c.o.provides.build: base/shade/CMakeFiles/shade.dir/material.c.o

base/shade/CMakeFiles/shade.dir/misc.c.o: base/shade/CMakeFiles/shade.dir/flags.make
base/shade/CMakeFiles/shade.dir/misc.c.o: ../base/shade/misc.c
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/mattjakob/Downloads/s3d/build/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object base/shade/CMakeFiles/shade.dir/misc.c.o"
	cd /Users/mattjakob/Downloads/s3d/build/base/shade && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/shade.dir/misc.c.o   -c /Users/mattjakob/Downloads/s3d/base/shade/misc.c

base/shade/CMakeFiles/shade.dir/misc.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/shade.dir/misc.c.i"
	cd /Users/mattjakob/Downloads/s3d/build/base/shade && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /Users/mattjakob/Downloads/s3d/base/shade/misc.c > CMakeFiles/shade.dir/misc.c.i

base/shade/CMakeFiles/shade.dir/misc.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/shade.dir/misc.c.s"
	cd /Users/mattjakob/Downloads/s3d/build/base/shade && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /Users/mattjakob/Downloads/s3d/base/shade/misc.c -o CMakeFiles/shade.dir/misc.c.s

base/shade/CMakeFiles/shade.dir/misc.c.o.requires:
.PHONY : base/shade/CMakeFiles/shade.dir/misc.c.o.requires

base/shade/CMakeFiles/shade.dir/misc.c.o.provides: base/shade/CMakeFiles/shade.dir/misc.c.o.requires
	$(MAKE) -f base/shade/CMakeFiles/shade.dir/build.make base/shade/CMakeFiles/shade.dir/misc.c.o.provides.build
.PHONY : base/shade/CMakeFiles/shade.dir/misc.c.o.provides

base/shade/CMakeFiles/shade.dir/misc.c.o.provides.build: base/shade/CMakeFiles/shade.dir/misc.c.o

base/shade/CMakeFiles/shade.dir/shade.c.o: base/shade/CMakeFiles/shade.dir/flags.make
base/shade/CMakeFiles/shade.dir/shade.c.o: ../base/shade/shade.c
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/mattjakob/Downloads/s3d/build/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object base/shade/CMakeFiles/shade.dir/shade.c.o"
	cd /Users/mattjakob/Downloads/s3d/build/base/shade && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/shade.dir/shade.c.o   -c /Users/mattjakob/Downloads/s3d/base/shade/shade.c

base/shade/CMakeFiles/shade.dir/shade.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/shade.dir/shade.c.i"
	cd /Users/mattjakob/Downloads/s3d/build/base/shade && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /Users/mattjakob/Downloads/s3d/base/shade/shade.c > CMakeFiles/shade.dir/shade.c.i

base/shade/CMakeFiles/shade.dir/shade.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/shade.dir/shade.c.s"
	cd /Users/mattjakob/Downloads/s3d/build/base/shade && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /Users/mattjakob/Downloads/s3d/base/shade/shade.c -o CMakeFiles/shade.dir/shade.c.s

base/shade/CMakeFiles/shade.dir/shade.c.o.requires:
.PHONY : base/shade/CMakeFiles/shade.dir/shade.c.o.requires

base/shade/CMakeFiles/shade.dir/shade.c.o.provides: base/shade/CMakeFiles/shade.dir/shade.c.o.requires
	$(MAKE) -f base/shade/CMakeFiles/shade.dir/build.make base/shade/CMakeFiles/shade.dir/shade.c.o.provides.build
.PHONY : base/shade/CMakeFiles/shade.dir/shade.c.o.provides

base/shade/CMakeFiles/shade.dir/shade.c.o.provides.build: base/shade/CMakeFiles/shade.dir/shade.c.o

# Object files for target shade
shade_OBJECTS = \
"CMakeFiles/shade.dir/illum.c.o" \
"CMakeFiles/shade.dir/lang.c.o" \
"CMakeFiles/shade.dir/light.c.o" \
"CMakeFiles/shade.dir/material.c.o" \
"CMakeFiles/shade.dir/misc.c.o" \
"CMakeFiles/shade.dir/shade.c.o"

# External object files for target shade
shade_EXTERNAL_OBJECTS =

base/shade/libshade.a: base/shade/CMakeFiles/shade.dir/illum.c.o
base/shade/libshade.a: base/shade/CMakeFiles/shade.dir/lang.c.o
base/shade/libshade.a: base/shade/CMakeFiles/shade.dir/light.c.o
base/shade/libshade.a: base/shade/CMakeFiles/shade.dir/material.c.o
base/shade/libshade.a: base/shade/CMakeFiles/shade.dir/misc.c.o
base/shade/libshade.a: base/shade/CMakeFiles/shade.dir/shade.c.o
base/shade/libshade.a: base/shade/CMakeFiles/shade.dir/build.make
base/shade/libshade.a: base/shade/CMakeFiles/shade.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C static library libshade.a"
	cd /Users/mattjakob/Downloads/s3d/build/base/shade && $(CMAKE_COMMAND) -P CMakeFiles/shade.dir/cmake_clean_target.cmake
	cd /Users/mattjakob/Downloads/s3d/build/base/shade && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/shade.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
base/shade/CMakeFiles/shade.dir/build: base/shade/libshade.a
.PHONY : base/shade/CMakeFiles/shade.dir/build

base/shade/CMakeFiles/shade.dir/requires: base/shade/CMakeFiles/shade.dir/illum.c.o.requires
base/shade/CMakeFiles/shade.dir/requires: base/shade/CMakeFiles/shade.dir/lang.c.o.requires
base/shade/CMakeFiles/shade.dir/requires: base/shade/CMakeFiles/shade.dir/light.c.o.requires
base/shade/CMakeFiles/shade.dir/requires: base/shade/CMakeFiles/shade.dir/material.c.o.requires
base/shade/CMakeFiles/shade.dir/requires: base/shade/CMakeFiles/shade.dir/misc.c.o.requires
base/shade/CMakeFiles/shade.dir/requires: base/shade/CMakeFiles/shade.dir/shade.c.o.requires
.PHONY : base/shade/CMakeFiles/shade.dir/requires

base/shade/CMakeFiles/shade.dir/clean:
	cd /Users/mattjakob/Downloads/s3d/build/base/shade && $(CMAKE_COMMAND) -P CMakeFiles/shade.dir/cmake_clean.cmake
.PHONY : base/shade/CMakeFiles/shade.dir/clean

base/shade/CMakeFiles/shade.dir/depend:
	cd /Users/mattjakob/Downloads/s3d/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mattjakob/Downloads/s3d /Users/mattjakob/Downloads/s3d/base/shade /Users/mattjakob/Downloads/s3d/build /Users/mattjakob/Downloads/s3d/build/base/shade /Users/mattjakob/Downloads/s3d/build/base/shade/CMakeFiles/shade.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : base/shade/CMakeFiles/shade.dir/depend

