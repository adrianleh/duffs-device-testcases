#include <stdio.h>
#include <stdlib.h>
void sideeffect(int* c, int i) {
    if(i <= 1) {
        *c = 1;
        return;
    }
    sideeffect(c, i - 2);
    int tmp = *c;
    sideeffect(c, i - 1);
    *c += tmp;
}
int main() {
    int* x = (int*) malloc(sizeof(int));
    *x = 1;
    for(int i = 0; i < 17; i += *x) {
        sideeffect(x, i);
        printf("%d\n", *x);
    }
}

