#include <stdio.h>
int n(int n) {
    return n;
}
int main() {
    for(int i = 0; i < 18; ++i) {
        puts("b");
        if(i > 16) {
            while(!0) {
                printf("%d\n", i);
            }
        }
    }
}
