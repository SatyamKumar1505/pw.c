#include<stdio.h>
int fact(int x)
{
    int c =1;
    for(int i =1;i<=x;i++)
    {
        c =c*i;
    }
    return c;
    
}

int main()
{
    int n,r,combination;

    printf("enter a number n:");
    scanf("%d",&n);

    printf("enter a number r:");
    scanf("%d",&r);

    int nfact = fact(n);
    int rfact = fact(r);
    int nrfact = fact(n-r);

    combination = nfact/(rfact*nrfact);

    printf("combination:%d",combination);

    return 0;
}