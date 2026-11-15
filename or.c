#include<stdio.h>
int main()
{
    int n;

    printf("enter a number:");
    scanf("%d",&n);

    if(n%5 == 0 || n%3 == 0)
    {
        printf("number is divisible by any of 5 or 3");
    }
    else 
    {
        printf("number is not divisible by any of 5 or 3");
    }

    return 0;
}