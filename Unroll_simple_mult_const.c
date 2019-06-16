#include <stdio.h>
int n(int n) {
    return n;
}
int main() {
    for(int i = 1; i < n(19); i*=2) {
        printf("a\n");
    }
}
