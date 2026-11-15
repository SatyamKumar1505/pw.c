#include<stdio.h>
int main()
{

    int a =1,b=1;
    int n;
    int sum =1;
    sum = a +b;
    printf("enter the number of terms:");
    scanf("%d",&n);

    for (int i =1;i<=n-2;i++)
    {
        sum = a + b;
        a = b;
        b = sum;
         printf("%d is fibonnaci of %dth\n",sum,i+2);
    }

    

    return 0;
}