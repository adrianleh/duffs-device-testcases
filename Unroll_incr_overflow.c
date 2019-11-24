#include <stdio.h>
#include <limits.h>
int main() {
    int  l = INT_MAX;
    for(int i = 0; i < (1 << 10); i += l) {
        printf("a\n");
    }
}

