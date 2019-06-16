#include <stdio.h>
int main() {
    for(int i = 0; i < 15; ++i) {
        if(i == 12) {
            i += 2;
        }
        for(int j = 0; j < 17; ++j) {
            printf("%d%d\n", i, j);
        }
    }
}