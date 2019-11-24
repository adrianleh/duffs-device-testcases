a, b;
main() {
  int c, i;
  if (b)
    c = a;
  i = c * sizeof(int);
  for (; i < c; i++)
    ;
}
