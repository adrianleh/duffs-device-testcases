#include <stdio.h>
#include <stdlib.h>
unsigned* alloc(unsigned n) {
    unsigned* x = (unsigned*) malloc(sizeof(unsigned));
    *x = n;
    return x;
}
int main() {
    unsigned l = 1 << 30;
    unsigned* c = alloc(l);
    for(unsigned i = (1 << 31); i > 0; i += *c) {
        printf("a\n");
    }
}
