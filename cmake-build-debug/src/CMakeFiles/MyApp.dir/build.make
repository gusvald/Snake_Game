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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.3.5\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.3.5\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\48660\CLionProjects\snake_MW_CZ15_253048

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\cmake-build-debug

# Include any dependencies generated for this target.
include src/CMakeFiles/MyApp.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/MyApp.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/MyApp.dir/flags.make

src/CMakeFiles/MyApp.dir/main.cpp.obj: src/CMakeFiles/MyApp.dir/flags.make
src/CMakeFiles/MyApp.dir/main.cpp.obj: src/CMakeFiles/MyApp.dir/includes_CXX.rsp
src/CMakeFiles/MyApp.dir/main.cpp.obj: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/MyApp.dir/main.cpp.obj"
	cd /d C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\cmake-build-debug\src && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\MyApp.dir\main.cpp.obj -c C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\src\main.cpp

src/CMakeFiles/MyApp.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MyApp.dir/main.cpp.i"
	cd /d C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\cmake-build-debug\src && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\src\main.cpp > CMakeFiles\MyApp.dir\main.cpp.i

src/CMakeFiles/MyApp.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MyApp.dir/main.cpp.s"
	cd /d C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\cmake-build-debug\src && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\src\main.cpp -o CMakeFiles\MyApp.dir\main.cpp.s

src/CMakeFiles/MyApp.dir/SnakeLogic.cpp.obj: src/CMakeFiles/MyApp.dir/flags.make
src/CMakeFiles/MyApp.dir/SnakeLogic.cpp.obj: src/CMakeFiles/MyApp.dir/includes_CXX.rsp
src/CMakeFiles/MyApp.dir/SnakeLogic.cpp.obj: ../src/SnakeLogic.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/MyApp.dir/SnakeLogic.cpp.obj"
	cd /d C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\cmake-build-debug\src && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\MyApp.dir\SnakeLogic.cpp.obj -c C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\src\SnakeLogic.cpp

src/CMakeFiles/MyApp.dir/SnakeLogic.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MyApp.dir/SnakeLogic.cpp.i"
	cd /d C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\cmake-build-debug\src && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\src\SnakeLogic.cpp > CMakeFiles\MyApp.dir\SnakeLogic.cpp.i

src/CMakeFiles/MyApp.dir/SnakeLogic.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MyApp.dir/SnakeLogic.cpp.s"
	cd /d C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\cmake-build-debug\src && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\src\SnakeLogic.cpp -o CMakeFiles\MyApp.dir\SnakeLogic.cpp.s

src/CMakeFiles/MyApp.dir/snakeDrawing.cpp.obj: src/CMakeFiles/MyApp.dir/flags.make
src/CMakeFiles/MyApp.dir/snakeDrawing.cpp.obj: src/CMakeFiles/MyApp.dir/includes_CXX.rsp
src/CMakeFiles/MyApp.dir/snakeDrawing.cpp.obj: ../src/snakeDrawing.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/MyApp.dir/snakeDrawing.cpp.obj"
	cd /d C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\cmake-build-debug\src && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\MyApp.dir\snakeDrawing.cpp.obj -c C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\src\snakeDrawing.cpp

src/CMakeFiles/MyApp.dir/snakeDrawing.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MyApp.dir/snakeDrawing.cpp.i"
	cd /d C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\cmake-build-debug\src && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\src\snakeDrawing.cpp > CMakeFiles\MyApp.dir\snakeDrawing.cpp.i

src/CMakeFiles/MyApp.dir/snakeDrawing.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MyApp.dir/snakeDrawing.cpp.s"
	cd /d C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\cmake-build-debug\src && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\src\snakeDrawing.cpp -o CMakeFiles\MyApp.dir\snakeDrawing.cpp.s

src/CMakeFiles/MyApp.dir/BoardView.cpp.obj: src/CMakeFiles/MyApp.dir/flags.make
src/CMakeFiles/MyApp.dir/BoardView.cpp.obj: src/CMakeFiles/MyApp.dir/includes_CXX.rsp
src/CMakeFiles/MyApp.dir/BoardView.cpp.obj: ../src/BoardView.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/CMakeFiles/MyApp.dir/BoardView.cpp.obj"
	cd /d C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\cmake-build-debug\src && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\MyApp.dir\BoardView.cpp.obj -c C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\src\BoardView.cpp

src/CMakeFiles/MyApp.dir/BoardView.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MyApp.dir/BoardView.cpp.i"
	cd /d C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\cmake-build-debug\src && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\src\BoardView.cpp > CMakeFiles\MyApp.dir\BoardView.cpp.i

src/CMakeFiles/MyApp.dir/BoardView.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MyApp.dir/BoardView.cpp.s"
	cd /d C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\cmake-build-debug\src && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\src\BoardView.cpp -o CMakeFiles\MyApp.dir\BoardView.cpp.s

src/CMakeFiles/MyApp.dir/MenuView.cpp.obj: src/CMakeFiles/MyApp.dir/flags.make
src/CMakeFiles/MyApp.dir/MenuView.cpp.obj: src/CMakeFiles/MyApp.dir/includes_CXX.rsp
src/CMakeFiles/MyApp.dir/MenuView.cpp.obj: ../src/MenuView.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/CMakeFiles/MyApp.dir/MenuView.cpp.obj"
	cd /d C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\cmake-build-debug\src && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\MyApp.dir\MenuView.cpp.obj -c C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\src\MenuView.cpp

src/CMakeFiles/MyApp.dir/MenuView.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MyApp.dir/MenuView.cpp.i"
	cd /d C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\cmake-build-debug\src && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\src\MenuView.cpp > CMakeFiles\MyApp.dir\MenuView.cpp.i

src/CMakeFiles/MyApp.dir/MenuView.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MyApp.dir/MenuView.cpp.s"
	cd /d C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\cmake-build-debug\src && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\src\MenuView.cpp -o CMakeFiles\MyApp.dir\MenuView.cpp.s

src/CMakeFiles/MyApp.dir/ResultsView.cpp.obj: src/CMakeFiles/MyApp.dir/flags.make
src/CMakeFiles/MyApp.dir/ResultsView.cpp.obj: src/CMakeFiles/MyApp.dir/includes_CXX.rsp
src/CMakeFiles/MyApp.dir/ResultsView.cpp.obj: ../src/ResultsView.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/CMakeFiles/MyApp.dir/ResultsView.cpp.obj"
	cd /d C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\cmake-build-debug\src && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\MyApp.dir\ResultsView.cpp.obj -c C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\src\ResultsView.cpp

src/CMakeFiles/MyApp.dir/ResultsView.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MyApp.dir/ResultsView.cpp.i"
	cd /d C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\cmake-build-debug\src && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\src\ResultsView.cpp > CMakeFiles\MyApp.dir\ResultsView.cpp.i

src/CMakeFiles/MyApp.dir/ResultsView.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MyApp.dir/ResultsView.cpp.s"
	cd /d C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\cmake-build-debug\src && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\src\ResultsView.cpp -o CMakeFiles\MyApp.dir\ResultsView.cpp.s

src/CMakeFiles/MyApp.dir/HowHard.cpp.obj: src/CMakeFiles/MyApp.dir/flags.make
src/CMakeFiles/MyApp.dir/HowHard.cpp.obj: src/CMakeFiles/MyApp.dir/includes_CXX.rsp
src/CMakeFiles/MyApp.dir/HowHard.cpp.obj: ../src/HowHard.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object src/CMakeFiles/MyApp.dir/HowHard.cpp.obj"
	cd /d C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\cmake-build-debug\src && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\MyApp.dir\HowHard.cpp.obj -c C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\src\HowHard.cpp

src/CMakeFiles/MyApp.dir/HowHard.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MyApp.dir/HowHard.cpp.i"
	cd /d C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\cmake-build-debug\src && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\src\HowHard.cpp > CMakeFiles\MyApp.dir\HowHard.cpp.i

src/CMakeFiles/MyApp.dir/HowHard.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MyApp.dir/HowHard.cpp.s"
	cd /d C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\cmake-build-debug\src && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\src\HowHard.cpp -o CMakeFiles\MyApp.dir\HowHard.cpp.s

# Object files for target MyApp
MyApp_OBJECTS = \
"CMakeFiles/MyApp.dir/main.cpp.obj" \
"CMakeFiles/MyApp.dir/SnakeLogic.cpp.obj" \
"CMakeFiles/MyApp.dir/snakeDrawing.cpp.obj" \
"CMakeFiles/MyApp.dir/BoardView.cpp.obj" \
"CMakeFiles/MyApp.dir/MenuView.cpp.obj" \
"CMakeFiles/MyApp.dir/ResultsView.cpp.obj" \
"CMakeFiles/MyApp.dir/HowHard.cpp.obj"

# External object files for target MyApp
MyApp_EXTERNAL_OBJECTS =

src/MyApp.exe: src/CMakeFiles/MyApp.dir/main.cpp.obj
src/MyApp.exe: src/CMakeFiles/MyApp.dir/SnakeLogic.cpp.obj
src/MyApp.exe: src/CMakeFiles/MyApp.dir/snakeDrawing.cpp.obj
src/MyApp.exe: src/CMakeFiles/MyApp.dir/BoardView.cpp.obj
src/MyApp.exe: src/CMakeFiles/MyApp.dir/MenuView.cpp.obj
src/MyApp.exe: src/CMakeFiles/MyApp.dir/ResultsView.cpp.obj
src/MyApp.exe: src/CMakeFiles/MyApp.dir/HowHard.cpp.obj
src/MyApp.exe: src/CMakeFiles/MyApp.dir/build.make
src/MyApp.exe: C:/app/SFML-2.5.1/lib/libsfml-graphics-s-d.a
src/MyApp.exe: C:/app/SFML-2.5.1/lib/libsfml-audio-s-d.a
src/MyApp.exe: C:/app/SFML-2.5.1/lib/libsfml-window-s-d.a
src/MyApp.exe: C:/app/SFML-2.5.1/lib/libfreetype.a
src/MyApp.exe: C:/app/SFML-2.5.1/lib/libopenal32.a
src/MyApp.exe: C:/app/SFML-2.5.1/lib/libsfml-system-s-d.a
src/MyApp.exe: C:/app/SFML-2.5.1/lib/libvorbisfile.a
src/MyApp.exe: C:/app/SFML-2.5.1/lib/libvorbisenc.a
src/MyApp.exe: C:/app/SFML-2.5.1/lib/libvorbis.a
src/MyApp.exe: C:/app/SFML-2.5.1/lib/libogg.a
src/MyApp.exe: C:/app/SFML-2.5.1/lib/libFLAC.a
src/MyApp.exe: src/CMakeFiles/MyApp.dir/linklibs.rsp
src/MyApp.exe: src/CMakeFiles/MyApp.dir/objects1.rsp
src/MyApp.exe: src/CMakeFiles/MyApp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable MyApp.exe"
	cd /d C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\cmake-build-debug\src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\MyApp.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/MyApp.dir/build: src/MyApp.exe

.PHONY : src/CMakeFiles/MyApp.dir/build

src/CMakeFiles/MyApp.dir/clean:
	cd /d C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\cmake-build-debug\src && $(CMAKE_COMMAND) -P CMakeFiles\MyApp.dir\cmake_clean.cmake
.PHONY : src/CMakeFiles/MyApp.dir/clean

src/CMakeFiles/MyApp.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\48660\CLionProjects\snake_MW_CZ15_253048 C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\src C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\cmake-build-debug C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\cmake-build-debug\src C:\Users\48660\CLionProjects\snake_MW_CZ15_253048\cmake-build-debug\src\CMakeFiles\MyApp.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/MyApp.dir/depend

