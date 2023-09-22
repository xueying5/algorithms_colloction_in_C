#include <stdio.h>
#define N 3
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
  hanoi(N, 'A', 'B', 'C');
  return 0;
}
