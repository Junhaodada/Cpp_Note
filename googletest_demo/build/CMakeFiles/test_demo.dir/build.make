# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.25

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
CMAKE_COMMAND = E:\Tool\cmake\bin\cmake.exe

# The command to remove a file.
RM = E:\Tool\cmake\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = F:\A-Working\project\Cpp_Note\googletest_demo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\A-Working\project\Cpp_Note\googletest_demo\build

# Include any dependencies generated for this target.
include CMakeFiles/test_demo.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/test_demo.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/test_demo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_demo.dir/flags.make

CMakeFiles/test_demo.dir/main.cpp.obj: CMakeFiles/test_demo.dir/flags.make
CMakeFiles/test_demo.dir/main.cpp.obj: CMakeFiles/test_demo.dir/includes_CXX.rsp
CMakeFiles/test_demo.dir/main.cpp.obj: F:/A-Working/project/Cpp_Note/googletest_demo/main.cpp
CMakeFiles/test_demo.dir/main.cpp.obj: CMakeFiles/test_demo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\A-Working\project\Cpp_Note\googletest_demo\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test_demo.dir/main.cpp.obj"
	E:\Tool\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/test_demo.dir/main.cpp.obj -MF CMakeFiles\test_demo.dir\main.cpp.obj.d -o CMakeFiles\test_demo.dir\main.cpp.obj -c F:\A-Working\project\Cpp_Note\googletest_demo\main.cpp

CMakeFiles/test_demo.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_demo.dir/main.cpp.i"
	E:\Tool\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\A-Working\project\Cpp_Note\googletest_demo\main.cpp > CMakeFiles\test_demo.dir\main.cpp.i

CMakeFiles/test_demo.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_demo.dir/main.cpp.s"
	E:\Tool\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\A-Working\project\Cpp_Note\googletest_demo\main.cpp -o CMakeFiles\test_demo.dir\main.cpp.s

# Object files for target test_demo
test_demo_OBJECTS = \
"CMakeFiles/test_demo.dir/main.cpp.obj"

# External object files for target test_demo
test_demo_EXTERNAL_OBJECTS =

test_demo.exe: CMakeFiles/test_demo.dir/main.cpp.obj
test_demo.exe: CMakeFiles/test_demo.dir/build.make
test_demo.exe: CMakeFiles/test_demo.dir/linkLibs.rsp
test_demo.exe: CMakeFiles/test_demo.dir/objects1
test_demo.exe: CMakeFiles/test_demo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\A-Working\project\Cpp_Note\googletest_demo\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test_demo.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\test_demo.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_demo.dir/build: test_demo.exe
.PHONY : CMakeFiles/test_demo.dir/build

CMakeFiles/test_demo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\test_demo.dir\cmake_clean.cmake
.PHONY : CMakeFiles/test_demo.dir/clean

CMakeFiles/test_demo.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\A-Working\project\Cpp_Note\googletest_demo F:\A-Working\project\Cpp_Note\googletest_demo F:\A-Working\project\Cpp_Note\googletest_demo\build F:\A-Working\project\Cpp_Note\googletest_demo\build F:\A-Working\project\Cpp_Note\googletest_demo\build\CMakeFiles\test_demo.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_demo.dir/depend

