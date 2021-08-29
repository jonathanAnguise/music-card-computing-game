# music-card-computing-game
## musical toy

***

### Aim:
The aim of this project is to create a game without screen allowing to kids to understand computing logic.

Here the project is using to recreate old instrument music with perforated card. Like the Sankyo instrument, see behind.
<img title="perforated_card_music_instrument_sankyo" alt="sankyo picture" src="/home/kebab/Desktop/music_card_computing_game/documentation/perforated_card_music_instrument_sankyo.jpg" width="450">

Instead of to be a mechanical instrument, here it is a electronic one. it measures the tension using 4 column.
Using paper sheet with whole you can create music note (C, D, E, F, G, L, B)

### How it's work:

1. With a paper sheet at create 4 columns.
2. Pierce the paper using the schematic behind to reproduce note
3. slide the paper in the electronic game and enjoy that song
4. When there is a whole, the connection is done with a resistance and the tension change. 
   1. There is 4 Resistances and using these we can trigger the 7 music notes following that table
    
|         | R1 | R2 | R3 | R4 | 
|---------|----|----|----|----|
| C       | X  |    |    |    | 
| D       | X  | X  |    |    | 
| E       |    |    | X  |    | 
| F       |    | X  |    |    | 
| G       |    | X  | X  |    | 
| L       | X  |    |    | X  | 
| B       |    |    |    | X  | 
| Silence | X  | X  | X  | X  | 

Example of a sheet:
<pre>
       R1     R2     R3    R4
+------+------+------+------+------+
|      |      |      |      |      |
|   +-----+   |      |      |      |  C
|   |  |  |   |      |      |      |
|   |  |  |   |      |      |      |
|   +-----+   |      |      |      |
|      |      |      |      |      |
|    +----+   +---+  |      |      |
|    |  | |   | | |  |      |      |  D
|    |  | |   | | |  |      |      |
|    +----+   +---+  |      |      |
|      |      |      |      |      |
|      |      |  +-----+    |      |
|      |      |  |  |  |    |      |  E
|      |      |  |  |  |    |      |
|      |      |  +-----+    |      |
|      |      |      |      |      |
|      |      |      |      |      |
|      |    +---+    |      |      |
|      |    | | |    |      |      |  F
|      |    | | |    |      |      |
|      |    +---+    |      |      |
|      |      |      |      |      |
|      |      |      |      |      |
|      |    +---+  +---+    |      |
|      |    | | |  | | |    |      |  G
|      |    | | |  | | |    |      |
|      |    +---+  +---+    |      |
|      |      |      |      |      |
|    +---+    |      |    +---+    |
|    | | |    |      |    | | |    |
|    | | |    |      |    | | |    |  A
|    +---+    |      |    +---+    |
|      |      |      |      |      |
|      |      |      |      |      |
|      |      |      |    +---+    |
|      |      |      |    | | |    |  B
|      |      |      |    | | |    |
|      |      |      |    +---+    |
|      |      |      |      |      |
|      |      |      |      |      |
+------+------+------+------+------+
</pre>
