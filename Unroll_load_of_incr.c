#include <stdio.h>
#include <stdlib.h>
long* alloc(long n) {
    long* x = (long*) malloc(sizeof(long));
    *x = n;
    return x;
}
int main() {
    long l = 2;
    long* c = alloc(l);
    for(long i = 0; i < 17; i += *c) {
        printf("a\n");
    }
}
