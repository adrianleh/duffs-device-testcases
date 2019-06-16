#include <stdio.h>
#include <stdlib.h>
int main() {
    int* x = (int*) malloc(sizeof(int));
    int* y = (int*) malloc(sizeof(int));
    int* z = (int*) malloc(sizeof(int));
    *x = 1;
    *y = 4;
    for(int i = 0; i < 17; i += (int) x) {
        memcpy(z, y, 1);
        memcpy(x, z, 1);
        memcpy(y, x, 1);
        printf("a\n");
    }
}