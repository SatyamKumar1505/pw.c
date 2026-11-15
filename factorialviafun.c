#include<stdio.h>
int factorial(int x)
{
    int c =1;
    for(int i=1;i<=x;i++)
    {
        c =c*i;
        printf("factorial of %d is %d\n",i,c);

    }

    // for(int i=1;i<x;i++)
    // {
    //    printf("factorial of %d is %d",x,c);
    // }
    return 0;

}
int main()
{
    int n;

    printf("enter a number:");
    scanf("%d",&n);

     factorial(n);

    // printf("factorial of %d is %d",n,result);

    // return 0;
}