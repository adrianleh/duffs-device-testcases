#include <stdio.h>
int n(int n) { return n; }
int main() {
    int greatVar = n(0);
    for(int i = 0; i < 17; i++) {
        if(i < 15)
            greatVar += i;
    }
    printf("%d\n", greatVar);
}
