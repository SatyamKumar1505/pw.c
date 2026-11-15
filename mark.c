#include<stdio.h>
int main()
{
    int mark[10];
    int i;
    for(i=0;i<10;i++)
    {
        printf("enter mark of %d student:",i+1);
        scanf("%d",&mark[i]);
    }
    for(i =0;i<10;i++)
    {
        if(mark[i]<35)
        {
            printf("%d\n",i);
        }
    }

    return 0;
}