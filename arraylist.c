#include "arraylist.h"
#include <stdlib.h>

// typedef struct
// {
//     int *array;
//     int size;
// }arraylist;

arraylist arraylist_creat(int init_size){
    arraylist a;
    a.size = init_size;
    a.array = (int *)malloc(sizeof(int) * a.size);
    return a;
}

void arraylist_free(arraylist* a){
    free(a->array);
}

int arraylist_size(arraylist *a){
    return a->size;
}

int *arraylist_at(arraylist *a, int index){
    if(index>=a->size)
        arraylist_inflate(a);
    return &(a->array[index]);
}

void arraylist_inflate(arraylist *a){
    a->array = (int *)realloc(a->array, sizeof(int) * (a->size + (a->size >> 1)));
    a->size += a->size >> 1;
}
