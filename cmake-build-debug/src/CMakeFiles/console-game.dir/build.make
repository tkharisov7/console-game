# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /snap/clion/145/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/145/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/artur/Рабочий стол/patterns/console-game/console-game"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/artur/Рабочий стол/patterns/console-game/console-game/cmake-build-debug"

# Include any dependencies generated for this target.
include src/CMakeFiles/console-game.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/console-game.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/console-game.dir/flags.make

src/CMakeFiles/console-game.dir/Game.cpp.o: src/CMakeFiles/console-game.dir/flags.make
src/CMakeFiles/console-game.dir/Game.cpp.o: ../src/Game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/artur/Рабочий стол/patterns/console-game/console-game/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/console-game.dir/Game.cpp.o"
	cd "/home/artur/Рабочий стол/patterns/console-game/console-game/cmake-build-debug/src" && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/console-game.dir/Game.cpp.o -c "/home/artur/Рабочий стол/patterns/console-game/console-game/src/Game.cpp"

src/CMakeFiles/console-game.dir/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/console-game.dir/Game.cpp.i"
	cd "/home/artur/Рабочий стол/patterns/console-game/console-game/cmake-build-debug/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/artur/Рабочий стол/patterns/console-game/console-game/src/Game.cpp" > CMakeFiles/console-game.dir/Game.cpp.i

src/CMakeFiles/console-game.dir/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/console-game.dir/Game.cpp.s"
	cd "/home/artur/Рабочий стол/patterns/console-game/console-game/cmake-build-debug/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/artur/Рабочий стол/patterns/console-game/console-game/src/Game.cpp" -o CMakeFiles/console-game.dir/Game.cpp.s

src/CMakeFiles/console-game.dir/main.cpp.o: src/CMakeFiles/console-game.dir/flags.make
src/CMakeFiles/console-game.dir/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/artur/Рабочий стол/patterns/console-game/console-game/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/console-game.dir/main.cpp.o"
	cd "/home/artur/Рабочий стол/patterns/console-game/console-game/cmake-build-debug/src" && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/console-game.dir/main.cpp.o -c "/home/artur/Рабочий стол/patterns/console-game/console-game/src/main.cpp"

src/CMakeFiles/console-game.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/console-game.dir/main.cpp.i"
	cd "/home/artur/Рабочий стол/patterns/console-game/console-game/cmake-build-debug/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/artur/Рабочий стол/patterns/console-game/console-game/src/main.cpp" > CMakeFiles/console-game.dir/main.cpp.i

src/CMakeFiles/console-game.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/console-game.dir/main.cpp.s"
	cd "/home/artur/Рабочий стол/patterns/console-game/console-game/cmake-build-debug/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/artur/Рабочий стол/patterns/console-game/console-game/src/main.cpp" -o CMakeFiles/console-game.dir/main.cpp.s

src/CMakeFiles/console-game.dir/QuestionFabric.cpp.o: src/CMakeFiles/console-game.dir/flags.make
src/CMakeFiles/console-game.dir/QuestionFabric.cpp.o: ../src/QuestionFabric.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/artur/Рабочий стол/patterns/console-game/console-game/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/console-game.dir/QuestionFabric.cpp.o"
	cd "/home/artur/Рабочий стол/patterns/console-game/console-game/cmake-build-debug/src" && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/console-game.dir/QuestionFabric.cpp.o -c "/home/artur/Рабочий стол/patterns/console-game/console-game/src/QuestionFabric.cpp"

src/CMakeFiles/console-game.dir/QuestionFabric.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/console-game.dir/QuestionFabric.cpp.i"
	cd "/home/artur/Рабочий стол/patterns/console-game/console-game/cmake-build-debug/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/artur/Рабочий стол/patterns/console-game/console-game/src/QuestionFabric.cpp" > CMakeFiles/console-game.dir/QuestionFabric.cpp.i

src/CMakeFiles/console-game.dir/QuestionFabric.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/console-game.dir/QuestionFabric.cpp.s"
	cd "/home/artur/Рабочий стол/patterns/console-game/console-game/cmake-build-debug/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/artur/Рабочий стол/patterns/console-game/console-game/src/QuestionFabric.cpp" -o CMakeFiles/console-game.dir/QuestionFabric.cpp.s

src/CMakeFiles/console-game.dir/Question.cpp.o: src/CMakeFiles/console-game.dir/flags.make
src/CMakeFiles/console-game.dir/Question.cpp.o: ../src/Question.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/artur/Рабочий стол/patterns/console-game/console-game/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/CMakeFiles/console-game.dir/Question.cpp.o"
	cd "/home/artur/Рабочий стол/patterns/console-game/console-game/cmake-build-debug/src" && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/console-game.dir/Question.cpp.o -c "/home/artur/Рабочий стол/patterns/console-game/console-game/src/Question.cpp"

src/CMakeFiles/console-game.dir/Question.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/console-game.dir/Question.cpp.i"
	cd "/home/artur/Рабочий стол/patterns/console-game/console-game/cmake-build-debug/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/artur/Рабочий стол/patterns/console-game/console-game/src/Question.cpp" > CMakeFiles/console-game.dir/Question.cpp.i

src/CMakeFiles/console-game.dir/Question.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/console-game.dir/Question.cpp.s"
	cd "/home/artur/Рабочий стол/patterns/console-game/console-game/cmake-build-debug/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/artur/Рабочий стол/patterns/console-game/console-game/src/Question.cpp" -o CMakeFiles/console-game.dir/Question.cpp.s

src/CMakeFiles/console-game.dir/Stats.cpp.o: src/CMakeFiles/console-game.dir/flags.make
src/CMakeFiles/console-game.dir/Stats.cpp.o: ../src/Stats.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/artur/Рабочий стол/patterns/console-game/console-game/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/CMakeFiles/console-game.dir/Stats.cpp.o"
	cd "/home/artur/Рабочий стол/patterns/console-game/console-game/cmake-build-debug/src" && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/console-game.dir/Stats.cpp.o -c "/home/artur/Рабочий стол/patterns/console-game/console-game/src/Stats.cpp"

src/CMakeFiles/console-game.dir/Stats.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/console-game.dir/Stats.cpp.i"
	cd "/home/artur/Рабочий стол/patterns/console-game/console-game/cmake-build-debug/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/artur/Рабочий стол/patterns/console-game/console-game/src/Stats.cpp" > CMakeFiles/console-game.dir/Stats.cpp.i

src/CMakeFiles/console-game.dir/Stats.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/console-game.dir/Stats.cpp.s"
	cd "/home/artur/Рабочий стол/patterns/console-game/console-game/cmake-build-debug/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/artur/Рабочий стол/patterns/console-game/console-game/src/Stats.cpp" -o CMakeFiles/console-game.dir/Stats.cpp.s

src/CMakeFiles/console-game.dir/StatsFabric.cpp.o: src/CMakeFiles/console-game.dir/flags.make
src/CMakeFiles/console-game.dir/StatsFabric.cpp.o: ../src/StatsFabric.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/artur/Рабочий стол/patterns/console-game/console-game/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/CMakeFiles/console-game.dir/StatsFabric.cpp.o"
	cd "/home/artur/Рабочий стол/patterns/console-game/console-game/cmake-build-debug/src" && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/console-game.dir/StatsFabric.cpp.o -c "/home/artur/Рабочий стол/patterns/console-game/console-game/src/StatsFabric.cpp"

src/CMakeFiles/console-game.dir/StatsFabric.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/console-game.dir/StatsFabric.cpp.i"
	cd "/home/artur/Рабочий стол/patterns/console-game/console-game/cmake-build-debug/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/artur/Рабочий стол/patterns/console-game/console-game/src/StatsFabric.cpp" > CMakeFiles/console-game.dir/StatsFabric.cpp.i

src/CMakeFiles/console-game.dir/StatsFabric.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/console-game.dir/StatsFabric.cpp.s"
	cd "/home/artur/Рабочий стол/patterns/console-game/console-game/cmake-build-debug/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/artur/Рабочий стол/patterns/console-game/console-game/src/StatsFabric.cpp" -o CMakeFiles/console-game.dir/StatsFabric.cpp.s

src/CMakeFiles/console-game.dir/Turn.cpp.o: src/CMakeFiles/console-game.dir/flags.make
src/CMakeFiles/console-game.dir/Turn.cpp.o: ../src/Turn.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/artur/Рабочий стол/patterns/console-game/console-game/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object src/CMakeFiles/console-game.dir/Turn.cpp.o"
	cd "/home/artur/Рабочий стол/patterns/console-game/console-game/cmake-build-debug/src" && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/console-game.dir/Turn.cpp.o -c "/home/artur/Рабочий стол/patterns/console-game/console-game/src/Turn.cpp"

src/CMakeFiles/console-game.dir/Turn.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/console-game.dir/Turn.cpp.i"
	cd "/home/artur/Рабочий стол/patterns/console-game/console-game/cmake-build-debug/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/artur/Рабочий стол/patterns/console-game/console-game/src/Turn.cpp" > CMakeFiles/console-game.dir/Turn.cpp.i

src/CMakeFiles/console-game.dir/Turn.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/console-game.dir/Turn.cpp.s"
	cd "/home/artur/Рабочий стол/patterns/console-game/console-game/cmake-build-debug/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/artur/Рабочий стол/patterns/console-game/console-game/src/Turn.cpp" -o CMakeFiles/console-game.dir/Turn.cpp.s

# Object files for target console-game
console__game_OBJECTS = \
"CMakeFiles/console-game.dir/Game.cpp.o" \
"CMakeFiles/console-game.dir/main.cpp.o" \
"CMakeFiles/console-game.dir/QuestionFabric.cpp.o" \
"CMakeFiles/console-game.dir/Question.cpp.o" \
"CMakeFiles/console-game.dir/Stats.cpp.o" \
"CMakeFiles/console-game.dir/StatsFabric.cpp.o" \
"CMakeFiles/console-game.dir/Turn.cpp.o"

# External object files for target console-game
console__game_EXTERNAL_OBJECTS =

../bin/console-game: src/CMakeFiles/console-game.dir/Game.cpp.o
../bin/console-game: src/CMakeFiles/console-game.dir/main.cpp.o
../bin/console-game: src/CMakeFiles/console-game.dir/QuestionFabric.cpp.o
../bin/console-game: src/CMakeFiles/console-game.dir/Question.cpp.o
../bin/console-game: src/CMakeFiles/console-game.dir/Stats.cpp.o
../bin/console-game: src/CMakeFiles/console-game.dir/StatsFabric.cpp.o
../bin/console-game: src/CMakeFiles/console-game.dir/Turn.cpp.o
../bin/console-game: src/CMakeFiles/console-game.dir/build.make
../bin/console-game: src/CMakeFiles/console-game.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/artur/Рабочий стол/patterns/console-game/console-game/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable ../../bin/console-game"
	cd "/home/artur/Рабочий стол/patterns/console-game/console-game/cmake-build-debug/src" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/console-game.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/console-game.dir/build: ../bin/console-game

.PHONY : src/CMakeFiles/console-game.dir/build

src/CMakeFiles/console-game.dir/clean:
	cd "/home/artur/Рабочий стол/patterns/console-game/console-game/cmake-build-debug/src" && $(CMAKE_COMMAND) -P CMakeFiles/console-game.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/console-game.dir/clean

src/CMakeFiles/console-game.dir/depend:
	cd "/home/artur/Рабочий стол/patterns/console-game/console-game/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/artur/Рабочий стол/patterns/console-game/console-game" "/home/artur/Рабочий стол/patterns/console-game/console-game/src" "/home/artur/Рабочий стол/patterns/console-game/console-game/cmake-build-debug" "/home/artur/Рабочий стол/patterns/console-game/console-game/cmake-build-debug/src" "/home/artur/Рабочий стол/patterns/console-game/console-game/cmake-build-debug/src/CMakeFiles/console-game.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : src/CMakeFiles/console-game.dir/depend

