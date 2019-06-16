#include <stdio.h>
int main() {
    int i = 0;
    int b = 0;
    for(; i < 15; i++) {
        goto hell;
        back:
            printf("%d\n", i);
    }
hell:
    i++;
    if(!b) {
        b = !b;
        goto back;
    }
    printf("%d\n", i);
}