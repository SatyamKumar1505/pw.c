#include<stdio.h>
int main()
{
    int i,a,d,n;

    printf("enter first term(a):\n");
    scanf("%d",&a);

    printf("enter common difrence(d):\n");
    scanf("%d",&d);

    printf("enter number of terms(n):\n");
    scanf("%d",&n);

    for(i = a;i<=(a+(n-1)*d);i = i + d)
    {
        printf("%d\n",i);
    }

    return 0;
}