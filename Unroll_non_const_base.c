#include <stdio.h>
#include <stdlib.h>
void sideeffect(int* c) {
    *c = 2;
}
int main() {
    int* x = (int*) malloc(sizeof(int));
    sideeffect(x);
    for(int i = *x; i < 17; i++) {
        printf("a\n");
    }
}

