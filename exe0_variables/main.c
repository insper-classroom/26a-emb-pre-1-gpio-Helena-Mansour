#include "stdio.h"



void foo(int *a) {
    *a = *a + 1; 
}

void main(void) {
    int b = 0;
    int a =0;

    while (!b) {
        foo(&a);
        
        if (a > 5) {
            b = 1;
        }
    }
}
