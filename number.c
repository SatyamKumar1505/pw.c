#include<stdio.h>
int main()
{
    int n;
    printf("enter a number:\n");
    scanf("%d",&n);

    if(n>99 && n<=999)
    {
        printf("%d is 3 digits number",n);
    }
    else
    {
        printf("%d did not a 3 digits number",n);
    }
    return 0;


}