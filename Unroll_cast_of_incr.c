#include <stdio.h>
#include <stdlib.h>
long* alloc(long n) {
    long* x = (long*) malloc(sizeof(long));
    *x = n;
    return x;
}
int main() {
    long l;
    long* c = alloc(l);
    for(int i = 0; i < 17; i += (int) *c) {
        printf("a\n");
    }
}
