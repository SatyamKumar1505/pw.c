#include<stdio.h>
int main()
{
    int x,n,i;
    int count =0;
    printf("enter number of elemants in array:");
    scanf("%d",&n);

    printf("enter a number of for compare:");
    scanf("%d",&x);

    int arr[n];

    for(i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i = 0;i<n;i++)
    {
        if(arr[i]>x)
        {
            count++;
        }
    }

    if(count>0)
    {
        printf("%d number are greater then %d",count,x);
    }

    else
    {
        printf("no number are greater then %d",x);
    }

    return 0;
}