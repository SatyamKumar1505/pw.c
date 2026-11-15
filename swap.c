#include<stdio.h>
int swap(int x,int y)
{
    int temp;

    temp =x;
    x=y;
    y=temp;

    printf("%d %d",x,y);
    return 0;

    // return x,y;
}
int main()
{
    int a,b;
    int number;
    printf("enter a:");
    scanf("%d",&a);

    printf("enter number b:");
    scanf("%d",&b);

    swap(a,b);

    // printf("%d %d",a,b);

    // return 0;
}