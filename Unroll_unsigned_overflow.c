#include<stdio.h>
#include<limits.h>
int main() {
    for(unsigned i = UINT_MAX; i > UINT_MAX - 1u; --i) {
        puts("x");
    }
}
