#include<stdio.h>
int main()
{
    int n,i;
    int a = 1;
    printf("enter number of terms in gp(n):\n");
    scanf("%d",&n);

    for(i = 1;i<=n;i++)
    {
        printf("%d\n",a);

        a = a*2;
    }

   
    return 0;
}