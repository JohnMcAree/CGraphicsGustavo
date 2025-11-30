#include "mesh.h"
//Todo : create implementation for mesh.h


vec3_t mesh_vertices[N_MESH_VERTICES] = {
    {.x = -1, .y = -1, .z = -1}, //1
    {.x =  -1, .y = 1, .z = -1}, //2
    {.x =  1, .y =  1, .z = -1}, //3
    {.x = 1, .y =  -1, .z = -1}, //4
    {.x = 1, .y = 1, .z =  1}, //5
    {.x =  1, .y = -1, .z =  1}, //6
    {.x = -1, .y =  1, .z =  1}, //7
    {.x = -1, .y =  -1, .z =  1}  //8
};


face_t mesh_faces[N_MESH_FACES] = {
    //front
    {.a = 1, .b = 2, .c = 3}, //face 1
    {.a = 1, .b = 3, .c = 4}, //face 2
    {.a = 4, .b = 3, .c = 5}, //face 3
    {.a = 4, .b = 5, .c = 6}, //face 4
    //back
    {.a = 6, .b = 5, .c = 7}, //face 5
    {.a = 6, .b = 7, .c = 8}, //face 6
    {.a = 8, .b = 7, .c = 2}, //face 7
    {.a = 8, .b = 2, .c = 1}, //face 8
    //top
    {.a = 2, .b = 7, .c = 5}, //face 9
    {.a = 2, .b = 5, .c = 3}, //face 10
    //botom
    {.a = 6, .b = 8, .c = 1}, //face 11
    {.a = 6, .b = 1, .c = 4}  //face 12
};