# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "F:\Jetbrains\CLion 2020.1.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "F:\Jetbrains\CLion 2020.1.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = X:\Repositorys\CodingQuestions\USACO\Practice\CowntactTracing

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = X:\Repositorys\CodingQuestions\USACO\Practice\CowntactTracing\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CowntactTracing.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CowntactTracing.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CowntactTracing.dir/flags.make

CMakeFiles/CowntactTracing.dir/main.cpp.obj: CMakeFiles/CowntactTracing.dir/flags.make
CMakeFiles/CowntactTracing.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=X:\Repositorys\CodingQuestions\USACO\Practice\CowntactTracing\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CowntactTracing.dir/main.cpp.obj"
	F:\Msys2\mingw64\bin\clang++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\CowntactTracing.dir\main.cpp.obj -c X:\Repositorys\CodingQuestions\USACO\Practice\CowntactTracing\main.cpp

CMakeFiles/CowntactTracing.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CowntactTracing.dir/main.cpp.i"
	F:\Msys2\mingw64\bin\clang++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E X:\Repositorys\CodingQuestions\USACO\Practice\CowntactTracing\main.cpp > CMakeFiles\CowntactTracing.dir\main.cpp.i

CMakeFiles/CowntactTracing.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CowntactTracing.dir/main.cpp.s"
	F:\Msys2\mingw64\bin\clang++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S X:\Repositorys\CodingQuestions\USACO\Practice\CowntactTracing\main.cpp -o CMakeFiles\CowntactTracing.dir\main.cpp.s

# Object files for target CowntactTracing
CowntactTracing_OBJECTS = \
"CMakeFiles/CowntactTracing.dir/main.cpp.obj"

# External object files for target CowntactTracing
CowntactTracing_EXTERNAL_OBJECTS =

CowntactTracing.exe: CMakeFiles/CowntactTracing.dir/main.cpp.obj
CowntactTracing.exe: CMakeFiles/CowntactTracing.dir/build.make
CowntactTracing.exe: CMakeFiles/CowntactTracing.dir/linklibs.rsp
CowntactTracing.exe: CMakeFiles/CowntactTracing.dir/objects1.rsp
CowntactTracing.exe: CMakeFiles/CowntactTracing.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=X:\Repositorys\CodingQuestions\USACO\Practice\CowntactTracing\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CowntactTracing.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\CowntactTracing.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CowntactTracing.dir/build: CowntactTracing.exe

.PHONY : CMakeFiles/CowntactTracing.dir/build

CMakeFiles/CowntactTracing.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CowntactTracing.dir\cmake_clean.cmake
.PHONY : CMakeFiles/CowntactTracing.dir/clean

CMakeFiles/CowntactTracing.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" X:\Repositorys\CodingQuestions\USACO\Practice\CowntactTracing X:\Repositorys\CodingQuestions\USACO\Practice\CowntactTracing X:\Repositorys\CodingQuestions\USACO\Practice\CowntactTracing\cmake-build-debug X:\Repositorys\CodingQuestions\USACO\Practice\CowntactTracing\cmake-build-debug X:\Repositorys\CodingQuestions\USACO\Practice\CowntactTracing\cmake-build-debug\CMakeFiles\CowntactTracing.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CowntactTracing.dir/depend
