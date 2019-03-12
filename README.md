# The program to arrange tetrominoes into the smallest square

This program takes a file as a parameter, which contains a list of [tetrominoes](https://en.wikipedia.org/wiki/Tetromino), and arranges them in order to create the smallest square possible. It has to produce the answer in the minimal amount of time, despite an exponentially growing number of possibilities each time a piece is added. For the details please see the [subject.](https://github.com/sharvas/fillit/raw/master/fillit.en.pdf)

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

Produces a result where each tetromino is assigned a chronological letter:
```console
$> ./fillit test_files/examples/pdf.fillit
DDAA
CDDA
CCCA
BBBB
```

All tetrominoes must be comprised of four `#` on a background of `.` and each separated by a newline character. All other shapes are invalid. Shapes cannot be rotated. Each tetromino fills only 4 of the 16 available boxes, so it is possible to describe the same tetromino in multiple ways.

```console
##.. .##. ..## .... .... ....
#... .#.. ..#. ##.. .##. ..##
#... .#.. ..#. #... .#.. ..#.
.... .... .... #... .#.. ..#.
```

The program cannot leak. All errors must be handled carefully. In no way can the program quit in an unexpected manner (Segmentation fault, bus error, double free, etc). Allowed functions are `exit`, `open`, `close`, `write`, `read`, `malloc` and `free`.

## Usage

To compile, run `make` and this will compile `fillit`. Execute with a 'map' as a parameter or run without any parameter to see the usage.

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

The project was done in a team of [@dfinnis](https://github.com/dfinnis) and me.
