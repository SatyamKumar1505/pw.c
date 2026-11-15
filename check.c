#include<stdio.h>
int main()
{
    int x,y;
    printf("enter a point (x,y):");
    scanf("%d %d",&x,&y);

    if(x == 0 && y == 0)
    {
        printf("it is origin");
    }
    else if(y == 0)
    {
        printf("it lies on x axis");
    }
    else if(x == 0)
    {
        printf("it lies on y axis");
    }
    else{
        printf("any point on the coordinate systum");
    }


    return 0;
}