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
include proj/csg/CMakeFiles/xcsg.dir/depend.make

# Include the progress variables for this target.
include proj/csg/CMakeFiles/xcsg.dir/progress.make

# Include the compile flags for this target's objects.
include proj/csg/CMakeFiles/xcsg.dir/flags.make

proj/csg/CMakeFiles/xcsg.dir/main.c.o: proj/csg/CMakeFiles/xcsg.dir/flags.make
proj/csg/CMakeFiles/xcsg.dir/main.c.o: ../proj/csg/main.c
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/mattjakob/Downloads/s3d/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object proj/csg/CMakeFiles/xcsg.dir/main.c.o"
	cd /Users/mattjakob/Downloads/s3d/build/proj/csg && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/xcsg.dir/main.c.o   -c /Users/mattjakob/Downloads/s3d/proj/csg/main.c

proj/csg/CMakeFiles/xcsg.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/xcsg.dir/main.c.i"
	cd /Users/mattjakob/Downloads/s3d/build/proj/csg && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /Users/mattjakob/Downloads/s3d/proj/csg/main.c > CMakeFiles/xcsg.dir/main.c.i

proj/csg/CMakeFiles/xcsg.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/xcsg.dir/main.c.s"
	cd /Users/mattjakob/Downloads/s3d/build/proj/csg && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /Users/mattjakob/Downloads/s3d/proj/csg/main.c -o CMakeFiles/xcsg.dir/main.c.s

proj/csg/CMakeFiles/xcsg.dir/main.c.o.requires:
.PHONY : proj/csg/CMakeFiles/xcsg.dir/main.c.o.requires

proj/csg/CMakeFiles/xcsg.dir/main.c.o.provides: proj/csg/CMakeFiles/xcsg.dir/main.c.o.requires
	$(MAKE) -f proj/csg/CMakeFiles/xcsg.dir/build.make proj/csg/CMakeFiles/xcsg.dir/main.c.o.provides.build
.PHONY : proj/csg/CMakeFiles/xcsg.dir/main.c.o.provides

proj/csg/CMakeFiles/xcsg.dir/main.c.o.provides.build: proj/csg/CMakeFiles/xcsg.dir/main.c.o

# Object files for target xcsg
xcsg_OBJECTS = \
"CMakeFiles/xcsg.dir/main.c.o"

# External object files for target xcsg
xcsg_EXTERNAL_OBJECTS =

../bin/xcsg: proj/csg/CMakeFiles/xcsg.dir/main.c.o
../bin/xcsg: proj/csg/CMakeFiles/xcsg.dir/build.make
../bin/xcsg: base/laux/liblaux.a
../bin/xcsg: base/gp/libgp.a
../bin/xcsg: base/gutil/libgutil.a
../bin/xcsg: base/geom/libgeom.a
../bin/xcsg: base/color/libcolor.a
../bin/xcsg: base/image/libimg.a
../bin/xcsg: base/lang/liblang.a
../bin/xcsg: base/poly/libpoly.a
../bin/xcsg: base/prim/libprim.a
../bin/xcsg: base/csg/libcsg.a
../bin/xcsg: base/gener/libgener.a
../bin/xcsg: base/view/libview.a
../bin/xcsg: base/clip/libclip.a
../bin/xcsg: base/raster/libraster.a
../bin/xcsg: base/shade/libshade.a
../bin/xcsg: base/scene/libscene.a
../bin/xcsg: base/hier/libhier.a
../bin/xcsg: base/visib/libvisib.a
../bin/xcsg: base/ray/libray.a
../bin/xcsg: base/rad/librad.a
../bin/xcsg: base/map/libmap.a
../bin/xcsg: base/plot/libplot.a
../bin/xcsg: base/anim/libanim.a
../bin/xcsg: proj/csg/CMakeFiles/xcsg.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C executable ../../../bin/xcsg"
	cd /Users/mattjakob/Downloads/s3d/build/proj/csg && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/xcsg.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
proj/csg/CMakeFiles/xcsg.dir/build: ../bin/xcsg
.PHONY : proj/csg/CMakeFiles/xcsg.dir/build

proj/csg/CMakeFiles/xcsg.dir/requires: proj/csg/CMakeFiles/xcsg.dir/main.c.o.requires
.PHONY : proj/csg/CMakeFiles/xcsg.dir/requires

proj/csg/CMakeFiles/xcsg.dir/clean:
	cd /Users/mattjakob/Downloads/s3d/build/proj/csg && $(CMAKE_COMMAND) -P CMakeFiles/xcsg.dir/cmake_clean.cmake
.PHONY : proj/csg/CMakeFiles/xcsg.dir/clean

proj/csg/CMakeFiles/xcsg.dir/depend:
	cd /Users/mattjakob/Downloads/s3d/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mattjakob/Downloads/s3d /Users/mattjakob/Downloads/s3d/proj/csg /Users/mattjakob/Downloads/s3d/build /Users/mattjakob/Downloads/s3d/build/proj/csg /Users/mattjakob/Downloads/s3d/build/proj/csg/CMakeFiles/xcsg.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : proj/csg/CMakeFiles/xcsg.dir/depend
