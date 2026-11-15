#include<stdio.h>
int main()
{
   int n,ld;
   int r = 0;
   printf("enter a number:");
   scanf("%ld",&n);

   while(n !=0)
   {
    ld = n %10;
    r = 10*r + ld;
    n = n/10;
   }

   printf("%ld is reverse",r);
    return 0;
}