#include <stdio.h>
#include <stdlib.h>
int x() {
    return 0;
}

int main() {
    int* bound = (int*) malloc(sizeof(int));
    *bound = 16;
    for(int i = 0; i < *bound; ++i) {
        for(int j = 0; j < 17; ++j) {
            int* b = bound + x();
            b[0] = 13;
            printf("%d%d\n", i, j);
        }
    }
}
