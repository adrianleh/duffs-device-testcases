#include <stdio.h>
int n(int n) {
    return n;
}
int main() {
    int i = 0;
    for(; i < 19; ++i) {
        if(n(i) > 17) {
            break;
        }
    }
    printf("%d\n", i);
}