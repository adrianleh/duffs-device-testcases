#include<stdio.h>

int main() {
    for(int i = 0; i < 17;) {
        if(i < 13) {
            puts("a");
            i++;
        } else {
            puts("b");
            i++;
        }
    }
}

