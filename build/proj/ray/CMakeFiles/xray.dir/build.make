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
include proj/ray/CMakeFiles/xray.dir/depend.make

# Include the progress variables for this target.
include proj/ray/CMakeFiles/xray.dir/progress.make

# Include the compile flags for this target's objects.
include proj/ray/CMakeFiles/xray.dir/flags.make

proj/ray/CMakeFiles/xray.dir/main.c.o: proj/ray/CMakeFiles/xray.dir/flags.make
proj/ray/CMakeFiles/xray.dir/main.c.o: ../proj/ray/main.c
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/mattjakob/Downloads/s3d/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object proj/ray/CMakeFiles/xray.dir/main.c.o"
	cd /Users/mattjakob/Downloads/s3d/build/proj/ray && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/xray.dir/main.c.o   -c /Users/mattjakob/Downloads/s3d/proj/ray/main.c

proj/ray/CMakeFiles/xray.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/xray.dir/main.c.i"
	cd /Users/mattjakob/Downloads/s3d/build/proj/ray && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /Users/mattjakob/Downloads/s3d/proj/ray/main.c > CMakeFiles/xray.dir/main.c.i

proj/ray/CMakeFiles/xray.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/xray.dir/main.c.s"
	cd /Users/mattjakob/Downloads/s3d/build/proj/ray && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /Users/mattjakob/Downloads/s3d/proj/ray/main.c -o CMakeFiles/xray.dir/main.c.s

proj/ray/CMakeFiles/xray.dir/main.c.o.requires:
.PHONY : proj/ray/CMakeFiles/xray.dir/main.c.o.requires

proj/ray/CMakeFiles/xray.dir/main.c.o.provides: proj/ray/CMakeFiles/xray.dir/main.c.o.requires
	$(MAKE) -f proj/ray/CMakeFiles/xray.dir/build.make proj/ray/CMakeFiles/xray.dir/main.c.o.provides.build
.PHONY : proj/ray/CMakeFiles/xray.dir/main.c.o.provides

proj/ray/CMakeFiles/xray.dir/main.c.o.provides.build: proj/ray/CMakeFiles/xray.dir/main.c.o

# Object files for target xray
xray_OBJECTS = \
"CMakeFiles/xray.dir/main.c.o"

# External object files for target xray
xray_EXTERNAL_OBJECTS =

../bin/xray: proj/ray/CMakeFiles/xray.dir/main.c.o
../bin/xray: proj/ray/CMakeFiles/xray.dir/build.make
../bin/xray: base/laux/liblaux.a
../bin/xray: base/gp/libgp.a
../bin/xray: base/gutil/libgutil.a
../bin/xray: base/geom/libgeom.a
../bin/xray: base/color/libcolor.a
../bin/xray: base/image/libimg.a
../bin/xray: base/lang/liblang.a
../bin/xray: base/poly/libpoly.a
../bin/xray: base/prim/libprim.a
../bin/xray: base/csg/libcsg.a
../bin/xray: base/gener/libgener.a
../bin/xray: base/view/libview.a
../bin/xray: base/clip/libclip.a
../bin/xray: base/raster/libraster.a
../bin/xray: base/shade/libshade.a
../bin/xray: base/scene/libscene.a
../bin/xray: base/hier/libhier.a
../bin/xray: base/visib/libvisib.a
../bin/xray: base/ray/libray.a
../bin/xray: base/rad/librad.a
../bin/xray: base/map/libmap.a
../bin/xray: base/plot/libplot.a
../bin/xray: base/anim/libanim.a
../bin/xray: proj/ray/CMakeFiles/xray.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C executable ../../../bin/xray"
	cd /Users/mattjakob/Downloads/s3d/build/proj/ray && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/xray.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
proj/ray/CMakeFiles/xray.dir/build: ../bin/xray
.PHONY : proj/ray/CMakeFiles/xray.dir/build

proj/ray/CMakeFiles/xray.dir/requires: proj/ray/CMakeFiles/xray.dir/main.c.o.requires
.PHONY : proj/ray/CMakeFiles/xray.dir/requires

proj/ray/CMakeFiles/xray.dir/clean:
	cd /Users/mattjakob/Downloads/s3d/build/proj/ray && $(CMAKE_COMMAND) -P CMakeFiles/xray.dir/cmake_clean.cmake
.PHONY : proj/ray/CMakeFiles/xray.dir/clean

proj/ray/CMakeFiles/xray.dir/depend:
	cd /Users/mattjakob/Downloads/s3d/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mattjakob/Downloads/s3d /Users/mattjakob/Downloads/s3d/proj/ray /Users/mattjakob/Downloads/s3d/build /Users/mattjakob/Downloads/s3d/build/proj/ray /Users/mattjakob/Downloads/s3d/build/proj/ray/CMakeFiles/xray.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : proj/ray/CMakeFiles/xray.dir/depend
