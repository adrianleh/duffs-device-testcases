#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main() {
    srand(time(NULL));
    if(rand() > 42) {
        goto hell;
    }
    for(int i = 0; i < 15; ++i) {
        printf("1\n");
hell:   
        printf("2\n");

    }
}
