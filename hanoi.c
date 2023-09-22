#include <stdio.h>
#include <stdlib.h>
// #define N 3
void hanoi(int n, char A, char B, char C) {
  if (n == 1)
  {
    printf("Move sheet %d from %c to %c\n", n, A, C);
    return;
  }
  hanoi(n - 1, A, C, B);
  printf("Move sheet %d from %c to %c\n", n, A, C);
  hanoi(n - 1, B, A, C);
}
int main(int argc, char const *argv[])
{
  int N;
  if (argc < 2)
  {
    printf("usage: hanoi n\n");
    exit(EXIT_FAILURE);
  }
  N = atoi(argv[1]);
  // printf("%d\n", N);
  // return 0;
  hanoi(N, 'A', 'B', 'C');
  return 0;
}
