#include<stdio.h>
int main()
{
    int n;
    int sum = 0;
    printf("enter number of term:");
    scanf("%d",&n);

    for(int i= 1;i<=n;i++)
    {
        if(i%2 == 0)
        {
            i = -1*i;
        }
        sum = sum + 
        i;
    }
    printf("%d is sum of series",sum);

    return 0;
}