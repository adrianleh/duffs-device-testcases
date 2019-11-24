#include <stdio.h>
#include <stdlib.h>
long* alloc(long n) {
    long* x = (long*) malloc(sizeof(long));
    *x = n;
    return x;
}
int main() {
    long l = 0;
    long* i = alloc(l);
    for(; *i < 17l; *i += 1) {
        if(*i < 12l) puts("a");
        else puts("b");
    }
}
