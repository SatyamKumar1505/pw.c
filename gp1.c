#include<stdio.h>
int main()
{
    int n,i;
    float a = 100;
    printf("enter number of terms(n):");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("%.2f ",a);
        a = a/2;
    }
    



    return 0;

}