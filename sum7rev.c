#include<stdio.h>
int main()
{
    int n;
    int ld;
    int r =0;
    printf("enter a number:");
    scanf("%d",&n);
    int value = n;
    
    while(n>0)
    {
        ld = n%10;
        r = r*10 + ld;
        n = n/10;
    }
    int sum = (r + value);
  
    printf("%d is sum\n",sum);
    printf("%d is reverse",r);

    return 0;
}