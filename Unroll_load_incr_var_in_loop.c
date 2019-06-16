#include <stdio.h>
#include <stdlib.h>
int main() {
    int* x = (int*) malloc(sizeof(int));
    *x = 1;
    for(int i = 0; i < 17; i += *x) {
        printf("%d\n", *x);
    }
}
