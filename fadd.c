#include<stdio.h>
int add(int x,int y)
{
    printf("sum is %d",x+y);
    return 0;
}

int main()
{

    int a,b,sum;

    printf("enter 1st number:");
    scanf("%d",&a);

    printf("enter 2nd number:");
    scanf("%d",&b);

    add(a,b);

    // printf("sum is %d",sum);

    // return 0;
}