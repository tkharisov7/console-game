include_directories(${console-game_SOURCE_DIR}/include)

set(EXECUTABLE_OUTPUT_PATH ${console-game_SOURCE_DIR}/bin)

add_executable(console-game Game.cpp main.cpp QuestionFabric.cpp Question.cpp Stats.cpp StatsFabric.cpp)
