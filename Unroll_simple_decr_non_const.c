#include <stdio.h>
int n(int n) {
    return n;
}
int main() {
    for(int i = 17; i > n(0); --i) {
        printf("a\n");
    }
}
