#include <stdio.h>
int main()
{
  int l, b;
  int A, P;

  printf("enter length of rectangle:\n");
  scanf("%d", &l);

  printf("enter breadth of rectangle:\n");
  scanf("%d", &b);

  A = l * b;
  P = 2 * (l + b);

  if (A > P)
  {
    printf("area is greater then parimeter");
  }

  else if (P > A)
  {
    printf("perimeter is greater then area");
  }

  else
  {
    printf("perimeter is equal to area");
  }
  return 0;
}