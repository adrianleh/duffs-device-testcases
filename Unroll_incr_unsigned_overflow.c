#include <stdio.h>
#include <stdlib.h>
int main() {
    unsigned l = ~(1l << 34);
    for(unsigned i = 0; i < (1 << 10); i += l) {
        printf("a\n");
    }
}

