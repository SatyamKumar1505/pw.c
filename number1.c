#include<stdio.h>
int main()
{
    int a,b;
    printf("enter values of a and b:");
    scanf("%d %d",&a,&b);
    int x = a;
    int y = b;
    while(b>1)
    {
        a = (a)*(a);

        b--;
    }
    printf("%d to the power %d = %d",x,y,a);
    
    return 0;
}