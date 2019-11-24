#include <stdio.h>
long n(long n) {
    return n;
}
int main() {
    for(int i = 0; i < n(1l << 35); i += n(1l << 33)) {
        printf("a\n");
    }
}
