#include <stdio.h>
int n(int n) {
    return n;
}
int main() {
    for(int i = 0; i < 17; ++i) {
        puts("b");
        if(i > 13) {
            while(!0) {
                puts("a");
            }
        }
    }
}