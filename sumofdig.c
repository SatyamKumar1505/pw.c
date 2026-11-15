#include<stdio.h>
int main()
{
    int n,c;
    int sum =0;
    int ld ;
    printf("enter a number:");
    scanf("%d",&n);
    
  
    while(n !=0)
    {
        ld = n % 10;
        sum = sum + ld;
        n = n/10;
    }


    printf("%d is sum of digits",sum);
    return 0;
}