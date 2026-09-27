/*
 *
 * xycert's (sh*t) simple cordinate visualizator @ 2026
 * 
 * YS (engine) main code
 *
*/

#include <stdio.h>
#include <stdlib.h>
#include "ys.h"

/* Createing a Map
*/
ys_Map *ys_CreateMap(int height, int width) {
    static ys_Map tmp_ysmap = {1, 1};
    tmp_ysmap.layout = malloc(sizeof(int) * (height*width));
    tmp_ysmap.height = height;
    tmp_ysmap.width = width;
    return &tmp_ysmap;
}

/* Draws out the map
 * ys_map will be your ys_Map *ys_map
*/
void ys_DrawMap(ys_Map *ys_map) {
    for (int i = 0; i < ys_map->height*ys_map->width; i++) {
        if (i != 0 && i % ys_map->width == 0) printf("\n");
        printf(" %d ", ys_map->layout[i]); 
    }
    printf("\n");
}

/* Getting the value of the cordinate
 * \int x: the x cordinate to get 
 * \int y: the y cordinate to get 
*/
int ys_MapGet(ys_Map *ys_map, int x, int y) {
    return ys_map->layout[x + ys_map->width*y];
} 

/* Setting cordinates on the created map
 * \int x: the x cordinate to set 
 * \int y: the y cordinate to set 
 * \int fillint: is the number is you want to fill the cordinate
*/
int ys_MapSet(ys_Map *ys_map, int x, int y, int fillint) {
    ys_map->layout[x + ys_map->width*y] = 1;
    return 0;
}


/* Clearout the initalized systems
*/
void ys_Close(ys_Map *ys_map) {
    free(ys_map->layout);
}
