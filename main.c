#include "arraylist.h"
#include "stdio.h"

int main(){
    arraylist a = arraylist_creat(10);
    *(arraylist_at(&a, 20)) = 2;
    arraylist_free(&a);
    printf("end\n");
    return 0;
}
