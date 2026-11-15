#include <stdio.h>
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d", &n);

    if (n > 0)
    {
        printf("absolute of %d = %d", n, n);
    }
    else
    {
        printf("absolute of %d = %d ", n, (-1) * n);
    }

    return 0;
}