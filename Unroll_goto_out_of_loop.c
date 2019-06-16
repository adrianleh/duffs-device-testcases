#include <stdio.h>
#include <stdlib.h>
int main() {
    srand(time(NULL));
    for(int i = 0; i < 15; ++i) {
        if(rand() > 42) {
            goto hell;
        }
    }
hell:   
    printf("TEST\n");
}