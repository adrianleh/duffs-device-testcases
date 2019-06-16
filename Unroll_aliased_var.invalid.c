#include <stdio.h>
int main() {
    int* x = (int*) malloc(sizeof(int));
    *x = 1;
    for(int i = 0; i < 17; i += *x) {
        *x = 7;
        printf("a\n");
    }
}