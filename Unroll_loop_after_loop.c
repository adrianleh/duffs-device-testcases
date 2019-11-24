#include<stdio.h>

int main() {

    unsigned i = 0;

    while(i < 10) {
       ++i;
       puts("a");
    }
    i = 0;
    while(i < 20) {
       ++i;
       ++i;
       puts("b");
    }
}
