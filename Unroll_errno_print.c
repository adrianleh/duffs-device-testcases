
#include <errno.h>
#include <stdio.h>

int main() {
    for(int i = 0; i < 17; ++i) {
        printf("%d\n", errno);
    }
}
