#ifndef YS_H
#define YS_H

typedef struct {
    int height;
    int width;
    int *layout;
} ys_Map;

ys_Map *ys_CreateMap(int height, int width);
void ys_DrawMap(ys_Map *ys_map);
void ys_Close(ys_Map *ys_map);

int ys_MapGet(ys_Map *ys_map, int x, int y);
int ys_MapSet(ys_Map *ys_map, int x, int y, int fillint);

#endif