#include<stdio.h>
int main()
{
    int n,i;
    printf("enter elements of array:");
    scanf("%d",&n);


    int arr[n];


    printf("enter elements of array:");

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }


    for(i = 0;i<n;i++)
    {
        if(i%2 == 0)
        {
            arr[i] = arr[i] +10;
            printf("arr[%d] = %d\n",i,arr[i]);
        }

        else
        {
            printf("arr[%d] = %d\n",i,arr[i]*2);
        }
    }


    return 0;
}