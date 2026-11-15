#include<stdio.h>
int main()
{
    int n;
    int ld;
    int sum = 0;
    printf("enter a number:");
    scanf("%d",&n);

    while(n != 0)
    {
        ld = n%10;
         if(ld%2 == 0)
         {
            sum = sum + ld;
         }
         n =n/10;
    }

        printf("%d is sum of even digits",sum);
    return 0;
}