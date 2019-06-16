#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int n(int n) {
    return n;
}
int main() {
    srand(time(NULL));   // Initialization, should only be called once.
    int r = n(17);      // Returns a pseudo-random integer between 0 and RAND_MAX
    if(rand() < 20) {
        printf("x%d\n",r);
    } else {
        printf("y%d\n",r);
    }
    for(int i = 0; i < r; ++i) {
        printf("a\n");
    }
}