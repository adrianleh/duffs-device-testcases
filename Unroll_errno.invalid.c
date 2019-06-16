#include <errno.h>
#include <stdio.h>

int main() {
    for(int i = 0; i < errno; ++i) {
        printf("%d\n", i);
    }
}
