# console-game
## Description

Simple game written on C++ and using various software design patterns inside source code.

It is based on Reigns game.

## Rules

1. Choose the game mode. (Normal/Hard)
2. Each turn swipe left or right on a card depicting an advisor, in order to accept or reject their suggestion.
3. Each decision will have a consequence, changing the balance between the four pillars of the society: The church, the people, the military, and wealth.
4. The king's reign ends whenever one of the four metric bars becomes full or empty, and the game continues with the player controlling their heir.

## Requirements

You will need the following installed to build the project:
* CMake
* Make

## Build instructions

Run the *cmake* on the *main* folder:
```
cmake .
```
*cmake* will create the make file. Run this file by typing:
```
make
```
Now go to build directory:
```
cd build
```
And launch run the executable:
```
./console-game
```
## Project's UML
![console-game UML](https://github.com/tkharisov7/console-game/blob/master/console-game.png?raw=true)
