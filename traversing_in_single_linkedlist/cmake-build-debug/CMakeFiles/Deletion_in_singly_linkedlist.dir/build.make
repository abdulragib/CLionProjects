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
CMAKE_SOURCE_DIR = C:\Users\LENOVO\CLionProjects\traversing_in_single_linkedlist

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\LENOVO\CLionProjects\traversing_in_single_linkedlist\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Deletion_in_singly_linkedlist.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Deletion_in_singly_linkedlist.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Deletion_in_singly_linkedlist.dir/flags.make

CMakeFiles/Deletion_in_singly_linkedlist.dir/main.c.obj: CMakeFiles/Deletion_in_singly_linkedlist.dir/flags.make
CMakeFiles/Deletion_in_singly_linkedlist.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\LENOVO\CLionProjects\traversing_in_single_linkedlist\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Deletion_in_singly_linkedlist.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Deletion_in_singly_linkedlist.dir\main.c.obj -c C:\Users\LENOVO\CLionProjects\traversing_in_single_linkedlist\main.c

CMakeFiles/Deletion_in_singly_linkedlist.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Deletion_in_singly_linkedlist.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\LENOVO\CLionProjects\traversing_in_single_linkedlist\main.c > CMakeFiles\Deletion_in_singly_linkedlist.dir\main.c.i

CMakeFiles/Deletion_in_singly_linkedlist.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Deletion_in_singly_linkedlist.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\LENOVO\CLionProjects\traversing_in_single_linkedlist\main.c -o CMakeFiles\Deletion_in_singly_linkedlist.dir\main.c.s

# Object files for target Deletion_in_singly_linkedlist
Deletion_in_singly_linkedlist_OBJECTS = \
"CMakeFiles/Deletion_in_singly_linkedlist.dir/main.c.obj"

# External object files for target Deletion_in_singly_linkedlist
Deletion_in_singly_linkedlist_EXTERNAL_OBJECTS =

Deletion_in_singly_linkedlist.exe: CMakeFiles/Deletion_in_singly_linkedlist.dir/main.c.obj
Deletion_in_singly_linkedlist.exe: CMakeFiles/Deletion_in_singly_linkedlist.dir/build.make
Deletion_in_singly_linkedlist.exe: CMakeFiles/Deletion_in_singly_linkedlist.dir/linklibs.rsp
Deletion_in_singly_linkedlist.exe: CMakeFiles/Deletion_in_singly_linkedlist.dir/objects1.rsp
Deletion_in_singly_linkedlist.exe: CMakeFiles/Deletion_in_singly_linkedlist.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\LENOVO\CLionProjects\traversing_in_single_linkedlist\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Deletion_in_singly_linkedlist.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Deletion_in_singly_linkedlist.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Deletion_in_singly_linkedlist.dir/build: Deletion_in_singly_linkedlist.exe
.PHONY : CMakeFiles/Deletion_in_singly_linkedlist.dir/build

CMakeFiles/Deletion_in_singly_linkedlist.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Deletion_in_singly_linkedlist.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Deletion_in_singly_linkedlist.dir/clean

CMakeFiles/Deletion_in_singly_linkedlist.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\LENOVO\CLionProjects\traversing_in_single_linkedlist C:\Users\LENOVO\CLionProjects\traversing_in_single_linkedlist C:\Users\LENOVO\CLionProjects\traversing_in_single_linkedlist\cmake-build-debug C:\Users\LENOVO\CLionProjects\traversing_in_single_linkedlist\cmake-build-debug C:\Users\LENOVO\CLionProjects\traversing_in_single_linkedlist\cmake-build-debug\CMakeFiles\Deletion_in_singly_linkedlist.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Deletion_in_singly_linkedlist.dir/depend
