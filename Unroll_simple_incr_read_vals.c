# include <stdio.h>
int n(int n) { return n; }
int main() {
    int i = n(3);
    printf("%d", i);
    for(int i = 0; i< 17; i = (i * 4) + (1 + 1)) {

        puts("a");
    }
    return 0;
}
