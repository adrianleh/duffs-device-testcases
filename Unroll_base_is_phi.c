#include <stdio.h>
int n(int n) {
    return n;
}
int main() {
    int x;
    if(n(17) > 23) {
        x = 0;
    } else {
        x = 2;
    }
    for(int i = x; i < 17; ++i) {
        printf("a\n");
    }
}