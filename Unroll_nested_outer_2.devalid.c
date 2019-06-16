#include <stdio.h>
int main() {
    for(int i = 0; i < 15; ++i) {
        for(int j = 0; j < 17; ++j) {
            if(i == 12) {
                i -= 1;
            }
            printf("%d%d\n", i, j);
        }
    }
}