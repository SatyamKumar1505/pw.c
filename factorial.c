#include<stdio.h>
int main()
{
    //  not completed
    
    int n;
    int c = 1;
    printf("enter a number:");
    scanf("%d",&n);
    
    for(int i =0; i<=n;i++)
    {
    for(int j= i +1;j<=n;j++)
    {
        c = c*j;
    }
    }
    printf("%d is factorial",c);
    

    return 0;
}