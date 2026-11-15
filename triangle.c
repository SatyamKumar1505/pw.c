#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter values of a,b,c:");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a)
    {
        printf("it forms a triangle");
    }
    else
    {
        printf("it not form a traingle");
    }

    return 0;
}