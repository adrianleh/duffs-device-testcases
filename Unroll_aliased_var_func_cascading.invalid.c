#include <stdio.h>
void sideeffect2(int* c, int x) {
    *c = x;
}
void sideeffect(int* c) {
    sideeffect2(c, 2);
}
int main() {
    int* x = (int*) malloc(sizeof(int));
    *x = 1;
    for(int i = 0; i < 17; i += *x) {
        sideeffect(x);
        printf("a\n");
    }
}