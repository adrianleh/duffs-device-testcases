#include <stdio.h>
int main() {
  int a = ~(1 << 31);
  for (int b = 0; b < 10; b += a)
    printf("a\n");
}
