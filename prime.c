#include <stdio.h>
int main()
{
    int n, i;
    printf("enter a number(n):");
    scanf("%d", &n);

    int a =0;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            a = 1;
            break;
        }
    }
       if(n == 1)
       {
        printf("number is neither prime or composite");
       }
       else if(a == 0)
       {
        printf("number is prime");
       }
       else 
       {
        printf("number is not prime");
       }
    
    return 0;
}