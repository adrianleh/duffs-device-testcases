#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int n(int n) {
    return n;
}
int main() {
    srand(time(NULL));   // Initialization, should only be called once.
    int r = n(17);      // Returns a pseudo-random integer between 0 and RAND_MAX
    int c;
    if(rand() < 20) {
        printf("x%d\n",r);
        c = 2;
    } else {
        printf("y%d\n",r);
        c = 3;
    }
    for(int i = 0; i < r; i+=c) {
        printf("a\n");
    }
}
