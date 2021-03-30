typedef struct
{
    int *array;
    int size;
}arraylist;

arraylist arraylist_creat(int init_size);
void arraylist_free(arraylist* a);
int arraylist_size(arraylist *a);
int *arraylist_at(arraylist *a, int index);
void arraylist_inflate(arraylist *a);
