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
CMAKE_SOURCE_DIR = "C:\Users\LENOVO\CLionProjects\linearSearchIn character"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\LENOVO\CLionProjects\linearSearchIn character\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/linearSearchIn_character.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/linearSearchIn_character.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/linearSearchIn_character.dir/flags.make

CMakeFiles/linearSearchIn_character.dir/main.c.obj: CMakeFiles/linearSearchIn_character.dir/flags.make
CMakeFiles/linearSearchIn_character.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\LENOVO\CLionProjects\linearSearchIn character\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/linearSearchIn_character.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\linearSearchIn_character.dir\main.c.obj -c "C:\Users\LENOVO\CLionProjects\linearSearchIn character\main.c"

CMakeFiles/linearSearchIn_character.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/linearSearchIn_character.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\LENOVO\CLionProjects\linearSearchIn character\main.c" > CMakeFiles\linearSearchIn_character.dir\main.c.i

CMakeFiles/linearSearchIn_character.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/linearSearchIn_character.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\LENOVO\CLionProjects\linearSearchIn character\main.c" -o CMakeFiles\linearSearchIn_character.dir\main.c.s

# Object files for target linearSearchIn_character
linearSearchIn_character_OBJECTS = \
"CMakeFiles/linearSearchIn_character.dir/main.c.obj"

# External object files for target linearSearchIn_character
linearSearchIn_character_EXTERNAL_OBJECTS =

linearSearchIn_character.exe: CMakeFiles/linearSearchIn_character.dir/main.c.obj
linearSearchIn_character.exe: CMakeFiles/linearSearchIn_character.dir/build.make
linearSearchIn_character.exe: CMakeFiles/linearSearchIn_character.dir/linklibs.rsp
linearSearchIn_character.exe: CMakeFiles/linearSearchIn_character.dir/objects1.rsp
linearSearchIn_character.exe: CMakeFiles/linearSearchIn_character.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\LENOVO\CLionProjects\linearSearchIn character\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable linearSearchIn_character.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\linearSearchIn_character.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/linearSearchIn_character.dir/build: linearSearchIn_character.exe
.PHONY : CMakeFiles/linearSearchIn_character.dir/build

CMakeFiles/linearSearchIn_character.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\linearSearchIn_character.dir\cmake_clean.cmake
.PHONY : CMakeFiles/linearSearchIn_character.dir/clean

CMakeFiles/linearSearchIn_character.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\LENOVO\CLionProjects\linearSearchIn character" "C:\Users\LENOVO\CLionProjects\linearSearchIn character" "C:\Users\LENOVO\CLionProjects\linearSearchIn character\cmake-build-debug" "C:\Users\LENOVO\CLionProjects\linearSearchIn character\cmake-build-debug" "C:\Users\LENOVO\CLionProjects\linearSearchIn character\cmake-build-debug\CMakeFiles\linearSearchIn_character.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/linearSearchIn_character.dir/depend

