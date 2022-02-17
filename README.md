# so_long

Prior to starting with this project, it’s better to learn about the miniLibX, the simple graphic library that we use at 42.

The aim of this project is to create a small 2D game where players have to pick up all collectables and go to the exit making as few moves as possible. In my case, the game is about a muscular gardener cleaning up her garden from weeds. While ¿alien? creatures stand in her way. Because they are on mars. Or something.

![gif_01](https://drive.google.com/uc?export=view&id=1lHOYdkrSTlfExwcKfGCXHiamJJIL0q9h)

### How to play
---
###### Maps
The game is able to play any map you want as long as it follow some specific rules:
* The map has to be a ``.ber`` file.
* It can only contain some of the following characters:

| Character | Object |
| - | - |
| 1 | Wall. |
| 0 | Empty space. |
| C | Collectable. |
| E | Exit. |
| P | Player starting position. |
| M | Enemies |

* The map must be a rectangle surrounded by walls ‘1’.
* It must have at least one exit ‘E’ and one collectable ‘C’. And only one player ‘P’.

See some examples in the ``maps`` folder of this project.

###### Controls
Use ``WASD`` or ``Arrows`` to move. You move one tile at a time. enemy will kill you when you move into their tile. After picking up all weeds, the exits open and you may leave to see how many moves you’ve used to solve the map.

You can exit the game with ``esc``.

![gif_02](https://drive.google.com/uc?export=view&id=13aqJkX7vRyEvr9REWksoYbGFq_Y33oi-)

###### Execute the game
To play you can use some of the makefile rules, or execute the file _so_long.out_ if it's been generated, passing the map you want to play as parameter (``./so_long mapFileToPlay.ber``). The make file has the following rules:

| Rule | Function |
| - | - |
| ``make`` | Generates _so_long.out_ and an object file for each .c. |
| ``make clean`` | Deletes all object files. |
| ``make fclean`` | Deletes the object files and the _so_long.out_. |
| ``make re`` | makes ``fclean`` and ``make`` again. |
| `` make play`` | Allows you to play some of the maps I designed in a defined succession. To play the next map just press ``esc``. |


Good luck with your projects!
