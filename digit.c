#include<stdio.h>
int main()
{
  int n;
  int count = 0;
  printf("enter a number(n):");
  scanf("%d",&n);

  while(n !=0)
  {
    n = n/10;
    count ++;
  }
  printf("the number of digit is %d",count);

    return 0;
}