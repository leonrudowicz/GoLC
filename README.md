# GoLC
This Repository contains my work done for the SE_01 Excercises

## Excercise 01
`v01.h`contains all necessary header information. (Not that important besides include of stdio)
`v01.c`contains all necessary functions to create a heatmap, based on the block/grid given in the block array, creating within the main function.

The program contains a Printblock function, that prints to the commandline.

Function gen_heatmap is responsible for looping through the array, running the get_neighbours command on every cell.

get_neighbours looks at each adjacent cell, adding its state to the result.

### Compiling and using the Program
use `gcc v01.c -o v01_res`to compile the code into the `v01_res`binary. it then can be run using `./v01_res`.
### Result
```console
leonrudowicz@Leons-MacBook-Pro GoLC % ./a.out 

 0  1  0 
 0  1  0 
 0  1  0 

 2  1  2 
 3  2  3 
 2  1  2 
```

## Excercise 02
basically the same as 01, but i changed the existing grid to a 4x4, as mentioned within the documentation
### Compiling and using the Program
use `gcc v02.c -o v02_res`to compile the code into the `v02_res`binary. it then can be run using `./v02_res`.
### Result
```console
leonrudowicz@Leons-MacBook-Pro GoLC % ./v02_res 

 0  0  0  0 
 0  1  0  0 
 0  1  1  1 
 0  0  0  0 

 1  1  1  0 
 2  2  4  2 
 2  2  3  1 
 1  2  3  2 
```

## Excercise 03
Takes the heat data created by the function get_neighbours, and applies dead/alive rules to it.
### Compiling and using the Program
use `gcc v03.c -o v03_res`to compile the code into the `v03_res`binary. it then can be run using `./v03_res`.
### Result
```console
leonrudowicz@Leons-MacBook-Pro GoLC % ./v03_res           

 0  1  0  0 
 0  1  0  0 
 0  1  0  0 
 0  0  0  0 

 0  0  0  0 
 1  1  1  0 
 0  0  0  0 
 0  0  0  0 
```

## Excercise 04
Looping everything
### Compiling and using the Program
use `gcc v04.c -o v04_res`to compile the code into the `v04_res`binary. it then can be run using `./v04_res`.
### Result
```console
leonrudowicz@Leons-MacBook-Pro GoLC % ./v04_res           


Iteration: 0

0 1 0 0 
0 1 0 0 
0 1 1 0 
0 1 0 0 


Iteration: 1

0 0 0 0 
1 1 0 0 
1 1 1 0 
0 1 1 0 


Iteration: 2

0 0 0 0 
1 0 0 0 
1 0 1 0 
0 1 1 0 


Iteration: 3

0 0 0 0 
0 0 0 0 
0 1 1 0 
0 1 1 0 


Iteration: 4

0 0 0 0 
0 0 0 0 
0 1 1 0 
0 1 1 0 


Iteration: 5

0 0 0 0 
0 0 0 0 
0 1 1 0 
0 1 1 0 


Iteration: 6

0 0 0 0 
0 0 0 0 
0 1 1 0 
0 1 1 0 


Iteration: 7

0 0 0 0 
0 0 0 0 
0 1 1 0 
0 1 1 0 


Iteration: 8

0 0 0 0 
0 0 0 0 
0 1 1 0 
0 1 1 0 


Iteration: 9

0 0 0 0 
0 0 0 0 
0 1 1 0 
0 1 1 0 
```