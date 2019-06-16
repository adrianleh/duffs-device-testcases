#include <stdio.h>
int n(int n) {
    return n;
}
int main() {
    for(int i = 0; i < n(17); i += n(3)) {
        printf("a\n");
    }
}
