#include <stdio.h>
void sideeffect(int* c) {
    *c = 2;
}
int main() {
    int* x = (int*) malloc(sizeof(int));
    *x = 1;
    for(int i = 0; i < 17; i += *x) {
        sideeffect(x);
        printf("a\n");
    }
}