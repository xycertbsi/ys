# ys
**I created this while i learning C for a basic project with structs, pointers and type using**
**Its NOT have any sort of AI generated content! purely by me**

Simple fast, lightweight cordinate system visualizator with friendly API.
| Cheetsheet for using| -- |
|--|--|
| ys_Map *ys_CreateMap(int  height,  int  width) | Creating a map |
| ys_DrawMap(ys_Map *ys_map)| Draws out the corruent while cordinate system |
| ys_MapGet(ys_Map  *ys_map,  int  x,  int  y)| Getting a value by the cordinates|
| ys_Close(ys_Map *ys_map)| Closes the initalized systems |
| ys_MapSet(ys_Map  *ys_map,  int  x,  int  y,  int  fillint) | Setting a cordinate by the x and y to the fillint |

### How to use it:
For basic initalization you just make this in your c code:
```c
#include "ys/ys.h"
#include <stdio.h>
int main() {
	// initalizing a 5x5 cordinate system
	// ys_CreateMap(height, width);
	ys_Map *ys =  ys_CreateMap(5, 5);
	
	ys_Close(ys);
	return  0;
}
```
This just now initalizes ys and after that its closes.

To draw out your corruent Cordinate map you just:
```c
#include "ys/ys.h"
#include <stdio.h>
int main() {
	ys_Map *ys =  ys_CreateMap(5, 5);

	ys_DrawMap(ys); // drawing out the definied map

	ys_Close(ys);
	return  0;
}
```
your result be this:
```bash
$ gcc -Iys/ ys/ys.c main.c -o main.out && ./main.out
 0  0  0  0  0 
 0  0  0  0  0 
 0  0  0  0  0 
 0  0  0  0  0 
 0  0  0  0  0 
$ 
```

To get, and set a cordinate you just:
```c
#include "ys/ys.h"
#include <stdio.h>

int main() {
	ys_Map *ys = ys_CreateMap(5, 5);
	ys_DrawMap(ys);
	
	ys_MapSet(ys, 1, 1, 1); // setting a cordinate
	printf("\n1:1: %d\n", ys_MapGet(ys, 1, 1)); // this prints out the cordinate of 1; 1

    printf("\n");
	ys_DrawMap(ys);
	ys_Close(ys);
	return 0;
}
```

your result be this:
```bash
$ gcc -Iys/ ys/ys.c main.c -o main.out && ./main.out
 0  0  0  0  0 
 0  0  0  0  0 
 0  0  0  0  0 
 0  0  0  0  0 
 0  0  0  0  0 
 1:1: 1
 0  0  0  0  0 
 0  0  0  0  0 
 0  0  1  0  0 
 0  0  0  0  0 
 0  0  0  0  0 
$ 
```


How to compile your code:
```bash
gcc -Iys/ ys/ys.c <your file> -o <your file>.out && ./<your file>.out
```