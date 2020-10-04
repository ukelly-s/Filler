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

A name of the created bot is `ukelly.filler`. It will be created after `make` command and placed at the root of the directory.

You can run the virtual machine with the following command:

```
./filler_vm -p1 PLAYER_FILE -p2 PLAYER_FILE -v -f MAP_FILE
```

## How can check a project for memory leaks?

Method №1

Run this command:

```
valgrind --leak-check=full ./PLAYER_FILE &>trace
```

The next step is to copy the data (player needs for one iteration) to the console:

```
Ster 1
$$$ exec p1 : [players/ukelly.filler]
Plateau 15 17:
    01234567890123456
000 .................
001 .................
002 .................
003 .................
004 .................
005 .................
006 .................
007 .................
008 ..O..............
009 .................
010 .................
011 .................
012 ..............X..
013 .................
014 .................
Piece 1 3:
***
[Enter]
```
```
Ster 2
Plateau 15 17:
    01234567890123456
000 .................
001 .................
002 .................
003 .................
004 .................
005 .................
006 .................
007 .................
008 ..OOO............
009 .................
010 .................
011 .................
012 ..............xx.
013 .................
014 .................
Piece 1 2:
**
[Enter]
```

...

```
Ster n
Plateau 15 17:
    01234567890123456
000 ooOOOOOOOOOOOOOOO
001 OOOOOOOOOOOOOOOOO
002 OOOOOOOOOOOOOOOOO
003 OOOOOOOOOOOOOOOOO
004 OOOOOOOOOOOOOOOOO
005 OOOOOOOOOOOOOOOOO
006 OOOOOOOOOOOOOOOOO
007 OOOOOOOOOOOOOOOOO
008 OOOOOOOOOXXXOOOOO
009 OOOOOOOOXXXXXXOOO
010 OOOOOOOOXXXXXXXOO
011 OOOOOOXXXXXXXXXOO
012 OOOOOXXXXXXXXXXXX
013 OOOOOXXXXXXXXXXXx
014 OOOOOOXXXXXXXXXXX
Piece 2 2:
.*
**
[Enter]
```

You can view the data in the `trace` file after `Valgrind` is launched.

Method №2

Run the CLion program. Open the `version_for_debugging` folder via the `New Cmake Project from Source` command. Then go to `Run/Edit Configurations..` and in the `Program arguments` line write the full path on your computer to the file `test`. Everything! You can now run Valgrind.
