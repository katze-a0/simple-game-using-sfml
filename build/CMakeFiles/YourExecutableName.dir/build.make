# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.29

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
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\sfml-project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\sfml-project\build

# Include any dependencies generated for this target.
include CMakeFiles/YourExecutableName.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/YourExecutableName.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/YourExecutableName.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/YourExecutableName.dir/flags.make

CMakeFiles/YourExecutableName.dir/src/main.cpp.obj: CMakeFiles/YourExecutableName.dir/flags.make
CMakeFiles/YourExecutableName.dir/src/main.cpp.obj: CMakeFiles/YourExecutableName.dir/includes_CXX.rsp
CMakeFiles/YourExecutableName.dir/src/main.cpp.obj: C:/sfml-project/src/main.cpp
CMakeFiles/YourExecutableName.dir/src/main.cpp.obj: CMakeFiles/YourExecutableName.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\sfml-project\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/YourExecutableName.dir/src/main.cpp.obj"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/YourExecutableName.dir/src/main.cpp.obj -MF CMakeFiles\YourExecutableName.dir\src\main.cpp.obj.d -o CMakeFiles\YourExecutableName.dir\src\main.cpp.obj -c C:\sfml-project\src\main.cpp

CMakeFiles/YourExecutableName.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/YourExecutableName.dir/src/main.cpp.i"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\sfml-project\src\main.cpp > CMakeFiles\YourExecutableName.dir\src\main.cpp.i

CMakeFiles/YourExecutableName.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/YourExecutableName.dir/src/main.cpp.s"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\sfml-project\src\main.cpp -o CMakeFiles\YourExecutableName.dir\src\main.cpp.s

CMakeFiles/YourExecutableName.dir/src/Game.cpp.obj: CMakeFiles/YourExecutableName.dir/flags.make
CMakeFiles/YourExecutableName.dir/src/Game.cpp.obj: CMakeFiles/YourExecutableName.dir/includes_CXX.rsp
CMakeFiles/YourExecutableName.dir/src/Game.cpp.obj: C:/sfml-project/src/Game.cpp
CMakeFiles/YourExecutableName.dir/src/Game.cpp.obj: CMakeFiles/YourExecutableName.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\sfml-project\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/YourExecutableName.dir/src/Game.cpp.obj"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/YourExecutableName.dir/src/Game.cpp.obj -MF CMakeFiles\YourExecutableName.dir\src\Game.cpp.obj.d -o CMakeFiles\YourExecutableName.dir\src\Game.cpp.obj -c C:\sfml-project\src\Game.cpp

CMakeFiles/YourExecutableName.dir/src/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/YourExecutableName.dir/src/Game.cpp.i"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\sfml-project\src\Game.cpp > CMakeFiles\YourExecutableName.dir\src\Game.cpp.i

CMakeFiles/YourExecutableName.dir/src/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/YourExecutableName.dir/src/Game.cpp.s"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\sfml-project\src\Game.cpp -o CMakeFiles\YourExecutableName.dir\src\Game.cpp.s

CMakeFiles/YourExecutableName.dir/src/state.cpp.obj: CMakeFiles/YourExecutableName.dir/flags.make
CMakeFiles/YourExecutableName.dir/src/state.cpp.obj: CMakeFiles/YourExecutableName.dir/includes_CXX.rsp
CMakeFiles/YourExecutableName.dir/src/state.cpp.obj: C:/sfml-project/src/state.cpp
CMakeFiles/YourExecutableName.dir/src/state.cpp.obj: CMakeFiles/YourExecutableName.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\sfml-project\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/YourExecutableName.dir/src/state.cpp.obj"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/YourExecutableName.dir/src/state.cpp.obj -MF CMakeFiles\YourExecutableName.dir\src\state.cpp.obj.d -o CMakeFiles\YourExecutableName.dir\src\state.cpp.obj -c C:\sfml-project\src\state.cpp

CMakeFiles/YourExecutableName.dir/src/state.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/YourExecutableName.dir/src/state.cpp.i"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\sfml-project\src\state.cpp > CMakeFiles\YourExecutableName.dir\src\state.cpp.i

CMakeFiles/YourExecutableName.dir/src/state.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/YourExecutableName.dir/src/state.cpp.s"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\sfml-project\src\state.cpp -o CMakeFiles\YourExecutableName.dir\src\state.cpp.s

# Object files for target YourExecutableName
YourExecutableName_OBJECTS = \
"CMakeFiles/YourExecutableName.dir/src/main.cpp.obj" \
"CMakeFiles/YourExecutableName.dir/src/Game.cpp.obj" \
"CMakeFiles/YourExecutableName.dir/src/state.cpp.obj"

# External object files for target YourExecutableName
YourExecutableName_EXTERNAL_OBJECTS =

YourExecutableName.exe: CMakeFiles/YourExecutableName.dir/src/main.cpp.obj
YourExecutableName.exe: CMakeFiles/YourExecutableName.dir/src/Game.cpp.obj
YourExecutableName.exe: CMakeFiles/YourExecutableName.dir/src/state.cpp.obj
YourExecutableName.exe: CMakeFiles/YourExecutableName.dir/build.make
YourExecutableName.exe: CMakeFiles/YourExecutableName.dir/linkLibs.rsp
YourExecutableName.exe: CMakeFiles/YourExecutableName.dir/objects1.rsp
YourExecutableName.exe: CMakeFiles/YourExecutableName.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\sfml-project\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable YourExecutableName.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\YourExecutableName.dir\link.txt --verbose=$(VERBOSE)
	"C:\Program Files\CMake\bin\cmake.exe" -E copy_directory C:/sfml-project/src/bin C:/sfml-project/build

# Rule to build all files generated by this target.
CMakeFiles/YourExecutableName.dir/build: YourExecutableName.exe
.PHONY : CMakeFiles/YourExecutableName.dir/build

CMakeFiles/YourExecutableName.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\YourExecutableName.dir\cmake_clean.cmake
.PHONY : CMakeFiles/YourExecutableName.dir/clean

CMakeFiles/YourExecutableName.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\sfml-project C:\sfml-project C:\sfml-project\build C:\sfml-project\build C:\sfml-project\build\CMakeFiles\YourExecutableName.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/YourExecutableName.dir/depend

