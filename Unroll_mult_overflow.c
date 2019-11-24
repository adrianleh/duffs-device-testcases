#include <stdio.h>
#include <stdlib.h>
int main() {
    unsigned  l = ~(1 << 12);
    for(unsigned i = (1 << 29); i < (1 << 30); i *= l) {
        printf("%u < %u\n", i * l, 1 << 30);
    }
}

