#include<stdio.h>
int main()
{
    int n,i,j,k,x;
    int count = 0;

    printf("enter size of arrays:");
    scanf("%d",&n);

    printf("enter a value for comprison:");
    scanf("%d",&x);

    int arr[n];
    printf("enter values of elements:");

    for(i = 0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }

    for(i =0;i<n;i++)
    {
        for(j = i+1;j<n;j++)
            {
                for(k = j+1;k<n;k++)
                {
                    if(arr[i]+arr[j]+arr[k] == x)
                    {
                        count++;
                        printf("(%d,%d,%d)",arr[i],arr[j],arr[k]);
                    }
                }
            }
    }

if(count>0)
{
    printf("number of pairs is %d",count);
}

else
{
    printf("no pairs");
}
    return 0;
}