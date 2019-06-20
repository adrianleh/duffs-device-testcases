#include <stdio.h>
#include <stdlib.h>
long* alloc(long n) {
    long* x = (long*) malloc(sizeof(long));
    *x = n;
    return x;
}
int main() {
    long l = ~(1l << 34);
    long* c = alloc(l);
    for(unsigned i = 0; i < (1 << 10); i += (unsigned) *c) {
        printf("a\n");
    }
}

