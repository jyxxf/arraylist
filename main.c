#include "arraylist.h"

int main(){
    arraylist a = arraylist_creat(10);
    *(arraylist_at(&a, 20)) = 2;
    arraylist_free(&a);
    return 0;
}
