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
CMAKE_SOURCE_DIR = C:\sfml_project_copy

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\sfml_project_copy\build

# Include any dependencies generated for this target.
include CMakeFiles/main.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/main.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main.dir/flags.make

CMakeFiles/main.dir/src/main.cpp.obj: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/main.cpp.obj: CMakeFiles/main.dir/includes_CXX.rsp
CMakeFiles/main.dir/src/main.cpp.obj: C:/sfml_project_copy/src/main.cpp
CMakeFiles/main.dir/src/main.cpp.obj: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\sfml_project_copy\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/main.dir/src/main.cpp.obj"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/src/main.cpp.obj -MF CMakeFiles\main.dir\src\main.cpp.obj.d -o CMakeFiles\main.dir\src\main.cpp.obj -c C:\sfml_project_copy\src\main.cpp

CMakeFiles/main.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/main.dir/src/main.cpp.i"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\sfml_project_copy\src\main.cpp > CMakeFiles\main.dir\src\main.cpp.i

CMakeFiles/main.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/main.cpp.s"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\sfml_project_copy\src\main.cpp -o CMakeFiles\main.dir\src\main.cpp.s

CMakeFiles/main.dir/src/Fruit.cpp.obj: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/Fruit.cpp.obj: CMakeFiles/main.dir/includes_CXX.rsp
CMakeFiles/main.dir/src/Fruit.cpp.obj: C:/sfml_project_copy/src/Fruit.cpp
CMakeFiles/main.dir/src/Fruit.cpp.obj: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\sfml_project_copy\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/main.dir/src/Fruit.cpp.obj"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/src/Fruit.cpp.obj -MF CMakeFiles\main.dir\src\Fruit.cpp.obj.d -o CMakeFiles\main.dir\src\Fruit.cpp.obj -c C:\sfml_project_copy\src\Fruit.cpp

CMakeFiles/main.dir/src/Fruit.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/main.dir/src/Fruit.cpp.i"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\sfml_project_copy\src\Fruit.cpp > CMakeFiles\main.dir\src\Fruit.cpp.i

CMakeFiles/main.dir/src/Fruit.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/Fruit.cpp.s"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\sfml_project_copy\src\Fruit.cpp -o CMakeFiles\main.dir\src\Fruit.cpp.s

CMakeFiles/main.dir/src/Button.cpp.obj: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/Button.cpp.obj: CMakeFiles/main.dir/includes_CXX.rsp
CMakeFiles/main.dir/src/Button.cpp.obj: C:/sfml_project_copy/src/Button.cpp
CMakeFiles/main.dir/src/Button.cpp.obj: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\sfml_project_copy\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/main.dir/src/Button.cpp.obj"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/src/Button.cpp.obj -MF CMakeFiles\main.dir\src\Button.cpp.obj.d -o CMakeFiles\main.dir\src\Button.cpp.obj -c C:\sfml_project_copy\src\Button.cpp

CMakeFiles/main.dir/src/Button.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/main.dir/src/Button.cpp.i"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\sfml_project_copy\src\Button.cpp > CMakeFiles\main.dir\src\Button.cpp.i

CMakeFiles/main.dir/src/Button.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/Button.cpp.s"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\sfml_project_copy\src\Button.cpp -o CMakeFiles\main.dir\src\Button.cpp.s

CMakeFiles/main.dir/src/Utility.cpp.obj: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/Utility.cpp.obj: CMakeFiles/main.dir/includes_CXX.rsp
CMakeFiles/main.dir/src/Utility.cpp.obj: C:/sfml_project_copy/src/Utility.cpp
CMakeFiles/main.dir/src/Utility.cpp.obj: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\sfml_project_copy\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/main.dir/src/Utility.cpp.obj"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/src/Utility.cpp.obj -MF CMakeFiles\main.dir\src\Utility.cpp.obj.d -o CMakeFiles\main.dir\src\Utility.cpp.obj -c C:\sfml_project_copy\src\Utility.cpp

CMakeFiles/main.dir/src/Utility.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/main.dir/src/Utility.cpp.i"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\sfml_project_copy\src\Utility.cpp > CMakeFiles\main.dir\src\Utility.cpp.i

CMakeFiles/main.dir/src/Utility.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/Utility.cpp.s"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\sfml_project_copy\src\Utility.cpp -o CMakeFiles\main.dir\src\Utility.cpp.s

CMakeFiles/main.dir/src/AnimatedGIF.cpp.obj: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/AnimatedGIF.cpp.obj: CMakeFiles/main.dir/includes_CXX.rsp
CMakeFiles/main.dir/src/AnimatedGIF.cpp.obj: C:/sfml_project_copy/src/AnimatedGIF.cpp
CMakeFiles/main.dir/src/AnimatedGIF.cpp.obj: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\sfml_project_copy\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/main.dir/src/AnimatedGIF.cpp.obj"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/src/AnimatedGIF.cpp.obj -MF CMakeFiles\main.dir\src\AnimatedGIF.cpp.obj.d -o CMakeFiles\main.dir\src\AnimatedGIF.cpp.obj -c C:\sfml_project_copy\src\AnimatedGIF.cpp

CMakeFiles/main.dir/src/AnimatedGIF.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/main.dir/src/AnimatedGIF.cpp.i"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\sfml_project_copy\src\AnimatedGIF.cpp > CMakeFiles\main.dir\src\AnimatedGIF.cpp.i

CMakeFiles/main.dir/src/AnimatedGIF.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/AnimatedGIF.cpp.s"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\sfml_project_copy\src\AnimatedGIF.cpp -o CMakeFiles\main.dir\src\AnimatedGIF.cpp.s

CMakeFiles/main.dir/src/AudioEffect.cpp.obj: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/AudioEffect.cpp.obj: CMakeFiles/main.dir/includes_CXX.rsp
CMakeFiles/main.dir/src/AudioEffect.cpp.obj: C:/sfml_project_copy/src/AudioEffect.cpp
CMakeFiles/main.dir/src/AudioEffect.cpp.obj: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\sfml_project_copy\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/main.dir/src/AudioEffect.cpp.obj"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/src/AudioEffect.cpp.obj -MF CMakeFiles\main.dir\src\AudioEffect.cpp.obj.d -o CMakeFiles\main.dir\src\AudioEffect.cpp.obj -c C:\sfml_project_copy\src\AudioEffect.cpp

CMakeFiles/main.dir/src/AudioEffect.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/main.dir/src/AudioEffect.cpp.i"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\sfml_project_copy\src\AudioEffect.cpp > CMakeFiles\main.dir\src\AudioEffect.cpp.i

CMakeFiles/main.dir/src/AudioEffect.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/AudioEffect.cpp.s"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\sfml_project_copy\src\AudioEffect.cpp -o CMakeFiles\main.dir\src\AudioEffect.cpp.s

CMakeFiles/main.dir/src/Menu_to_Classic.cpp.obj: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/Menu_to_Classic.cpp.obj: CMakeFiles/main.dir/includes_CXX.rsp
CMakeFiles/main.dir/src/Menu_to_Classic.cpp.obj: C:/sfml_project_copy/src/Menu_to_Classic.cpp
CMakeFiles/main.dir/src/Menu_to_Classic.cpp.obj: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\sfml_project_copy\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/main.dir/src/Menu_to_Classic.cpp.obj"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/src/Menu_to_Classic.cpp.obj -MF CMakeFiles\main.dir\src\Menu_to_Classic.cpp.obj.d -o CMakeFiles\main.dir\src\Menu_to_Classic.cpp.obj -c C:\sfml_project_copy\src\Menu_to_Classic.cpp

CMakeFiles/main.dir/src/Menu_to_Classic.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/main.dir/src/Menu_to_Classic.cpp.i"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\sfml_project_copy\src\Menu_to_Classic.cpp > CMakeFiles\main.dir\src\Menu_to_Classic.cpp.i

CMakeFiles/main.dir/src/Menu_to_Classic.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/Menu_to_Classic.cpp.s"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\sfml_project_copy\src\Menu_to_Classic.cpp -o CMakeFiles\main.dir\src\Menu_to_Classic.cpp.s

# Object files for target main
main_OBJECTS = \
"CMakeFiles/main.dir/src/main.cpp.obj" \
"CMakeFiles/main.dir/src/Fruit.cpp.obj" \
"CMakeFiles/main.dir/src/Button.cpp.obj" \
"CMakeFiles/main.dir/src/Utility.cpp.obj" \
"CMakeFiles/main.dir/src/AnimatedGIF.cpp.obj" \
"CMakeFiles/main.dir/src/AudioEffect.cpp.obj" \
"CMakeFiles/main.dir/src/Menu_to_Classic.cpp.obj"

# External object files for target main
main_EXTERNAL_OBJECTS =

main.exe: CMakeFiles/main.dir/src/main.cpp.obj
main.exe: CMakeFiles/main.dir/src/Fruit.cpp.obj
main.exe: CMakeFiles/main.dir/src/Button.cpp.obj
main.exe: CMakeFiles/main.dir/src/Utility.cpp.obj
main.exe: CMakeFiles/main.dir/src/AnimatedGIF.cpp.obj
main.exe: CMakeFiles/main.dir/src/AudioEffect.cpp.obj
main.exe: CMakeFiles/main.dir/src/Menu_to_Classic.cpp.obj
main.exe: CMakeFiles/main.dir/build.make
main.exe: CMakeFiles/main.dir/linkLibs.rsp
main.exe: CMakeFiles/main.dir/objects1.rsp
main.exe: CMakeFiles/main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\sfml_project_copy\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable main.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\main.dir\link.txt --verbose=$(VERBOSE)
	"C:\Program Files\CMake\bin\cmake.exe" -E copy_directory C:/sfml_project_copy/src/bin C:/sfml_project_copy/build
	"C:\Program Files\CMake\bin\cmake.exe" -E copy_directory C:/sfml_project_copy/src/assets C:/sfml_project_copy/build/assets

# Rule to build all files generated by this target.
CMakeFiles/main.dir/build: main.exe
.PHONY : CMakeFiles/main.dir/build

CMakeFiles/main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\main.dir\cmake_clean.cmake
.PHONY : CMakeFiles/main.dir/clean

CMakeFiles/main.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\sfml_project_copy C:\sfml_project_copy C:\sfml_project_copy\build C:\sfml_project_copy\build C:\sfml_project_copy\build\CMakeFiles\main.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/main.dir/depend

