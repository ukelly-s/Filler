# Filler



Filler is a School 42 project. The purpose of this project is to create bot for map-filler puzzle game.


## Installation

Clone repository and then go into the created directory and run the following command:

```
make
```

## How to run program?

There are resources that are provided by task — a virtual machine (`filler_vm`), maps, and bots. 

The virtual machine moderates a game. It needs [a map file](/working_draft/maps) and [bots](/working_draft/players).

The purpose of the project is to create own bot.

A name of the created bot is `vbrazhni.filler`. It will be created after `make` command and placed at the root of the directory.

You can run the virtual machine with the following command:

```
./filler_vm -p1 PLAYER_FILE -p2 PLAYER_FILE -v -f MAP_FILE
```
