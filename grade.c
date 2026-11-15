#include<stdio.h>
int main()
{
    int mark;
    printf("enter obtained mark:");
    scanf("%d",&mark);

    if(mark>90)
    {
        printf("excellent");
    }
    else if(mark>80)
    {
        printf("very good");
    }
    else if(mark>70)
    {
        printf("good");
    }
    else if(mark>60)
    {
        printf("can do better");
    }
    else if(mark>50)
    {
        printf("average");
    }
    else if(mark>40)
    {
        printf("below average");
    }
    else 
    {
        printf("fail");
    }
    return 0;
}