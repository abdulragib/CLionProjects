# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\LENOVO\CLionProjects\deletion at particular position in circular linkedlist"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\LENOVO\CLionProjects\deletion at particular position in circular linkedlist\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/deletion_at_particular_position_in_circular_linkedlist.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/deletion_at_particular_position_in_circular_linkedlist.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/deletion_at_particular_position_in_circular_linkedlist.dir/flags.make

CMakeFiles/deletion_at_particular_position_in_circular_linkedlist.dir/main.c.obj: CMakeFiles/deletion_at_particular_position_in_circular_linkedlist.dir/flags.make
CMakeFiles/deletion_at_particular_position_in_circular_linkedlist.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\LENOVO\CLionProjects\deletion at particular position in circular linkedlist\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/deletion_at_particular_position_in_circular_linkedlist.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\deletion_at_particular_position_in_circular_linkedlist.dir\main.c.obj -c "C:\Users\LENOVO\CLionProjects\deletion at particular position in circular linkedlist\main.c"

CMakeFiles/deletion_at_particular_position_in_circular_linkedlist.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/deletion_at_particular_position_in_circular_linkedlist.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\LENOVO\CLionProjects\deletion at particular position in circular linkedlist\main.c" > CMakeFiles\deletion_at_particular_position_in_circular_linkedlist.dir\main.c.i

CMakeFiles/deletion_at_particular_position_in_circular_linkedlist.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/deletion_at_particular_position_in_circular_linkedlist.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\LENOVO\CLionProjects\deletion at particular position in circular linkedlist\main.c" -o CMakeFiles\deletion_at_particular_position_in_circular_linkedlist.dir\main.c.s

# Object files for target deletion_at_particular_position_in_circular_linkedlist
deletion_at_particular_position_in_circular_linkedlist_OBJECTS = \
"CMakeFiles/deletion_at_particular_position_in_circular_linkedlist.dir/main.c.obj"

# External object files for target deletion_at_particular_position_in_circular_linkedlist
deletion_at_particular_position_in_circular_linkedlist_EXTERNAL_OBJECTS =

deletion_at_particular_position_in_circular_linkedlist.exe: CMakeFiles/deletion_at_particular_position_in_circular_linkedlist.dir/main.c.obj
deletion_at_particular_position_in_circular_linkedlist.exe: CMakeFiles/deletion_at_particular_position_in_circular_linkedlist.dir/build.make
deletion_at_particular_position_in_circular_linkedlist.exe: CMakeFiles/deletion_at_particular_position_in_circular_linkedlist.dir/linklibs.rsp
deletion_at_particular_position_in_circular_linkedlist.exe: CMakeFiles/deletion_at_particular_position_in_circular_linkedlist.dir/objects1.rsp
deletion_at_particular_position_in_circular_linkedlist.exe: CMakeFiles/deletion_at_particular_position_in_circular_linkedlist.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\LENOVO\CLionProjects\deletion at particular position in circular linkedlist\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable deletion_at_particular_position_in_circular_linkedlist.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\deletion_at_particular_position_in_circular_linkedlist.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/deletion_at_particular_position_in_circular_linkedlist.dir/build: deletion_at_particular_position_in_circular_linkedlist.exe
.PHONY : CMakeFiles/deletion_at_particular_position_in_circular_linkedlist.dir/build

CMakeFiles/deletion_at_particular_position_in_circular_linkedlist.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\deletion_at_particular_position_in_circular_linkedlist.dir\cmake_clean.cmake
.PHONY : CMakeFiles/deletion_at_particular_position_in_circular_linkedlist.dir/clean

CMakeFiles/deletion_at_particular_position_in_circular_linkedlist.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\LENOVO\CLionProjects\deletion at particular position in circular linkedlist" "C:\Users\LENOVO\CLionProjects\deletion at particular position in circular linkedlist" "C:\Users\LENOVO\CLionProjects\deletion at particular position in circular linkedlist\cmake-build-debug" "C:\Users\LENOVO\CLionProjects\deletion at particular position in circular linkedlist\cmake-build-debug" "C:\Users\LENOVO\CLionProjects\deletion at particular position in circular linkedlist\cmake-build-debug\CMakeFiles\deletion_at_particular_position_in_circular_linkedlist.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/deletion_at_particular_position_in_circular_linkedlist.dir/depend

