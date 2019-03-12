# The program to arrage Tetris pieces into the smallest square

This program takes a file as a parameter, which contains a list of [Tetriminos](https://en.wikipedia.org/wiki/Tetromino), and arranges them in order to create the smallest square possible. It has to produce the answer in the minimal amount of time, despite an exponentially growing number of possibilities each time a piece is added.

The project was done in a two people team with [@dfinnis](https://github.com/dfinnis).

An example:
```console
$> cat test_files/examples/pdf.fillit
....
##..
.#..
.#..

....
####
....
....

#...
###.
....
....

....
##..
.##.
....
```

Produces a result where each tetrimino is assigned a chronological letter:
```console
$> ./fillit test_files/examples/pdf.fillit
DDAA
CDDA
CCCA
BBBB
```

All tetriminos must be comprised of four `#` on a background of `.` and each separate by a new line character. All other shapes are invalid. Shapes cannot be rotated. Each Tetrimino fills only 4 of the 16 available boxes, so it is possible to describe the same Tetrimino in multiple ways.

```console
##.. .##. ..## .... .... ....
#... .#.. ..#. ##.. .##. ..##
#... .#.. ..#. #... .#.. ..#.
.... .... .... #... .#.. ..#.
```

The program cannot leak. All errors must be handled carefully. In no way can the program quit in an unexpected manner (Segmentation fault, bus error, double free, etc). Allowed functions are `exit`, `open`, `close`, `write`, `read`, `malloc` and `free`.

## Usage

To compile, run `make` This will compile `fillit`. Execute with a 'map' as a parameter.

```console
$> ./fillit test_files/valid_26tets
ABBBBCCC.DD
AEEFFGGCDDI
AEE.FFGHHHI
AJJJJ.G.H.I
KKK.LLMMNNI
OOKLLQMM.NN
YOPPPQRRRR.
YO.P.QSSSUU
Y.TT.QWWSUU
YTTVV..WXXX
ZZZZVV.W.X.
```
