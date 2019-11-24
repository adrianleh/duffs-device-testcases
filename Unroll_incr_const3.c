#include <stdio.h>
int n(int n) {
    return n;
}
int main() {
    for(int i = 0; i < n(29); i+=3) {
        printf("a\n");
    }
}
