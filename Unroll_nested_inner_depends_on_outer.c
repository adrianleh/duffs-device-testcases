#include <stdio.h>
int main() {
    for(int i = 0; i < 15; ++i) {
        for(int j = 0; j < i; ++j) {
            printf("%d%d\n", i, j);
        }
    }
}