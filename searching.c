#include<stdio.h>
int main()
{
    int n,x;
    int count = 0;

    printf("enter size of an array:");
    scanf("%d",&n);

    printf("element for searching:");
    scanf("%d",&x);

    int arr[n];
    printf("enter elements of an array:");
    for(int i = 0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }

    for(int i =0;i<n;i++)
    {
        if(arr[i] == x)
        {
            count++;
        }

    }

    if(count >=1)
        {
            printf("%d number is in the array\n",x);
            
        }
        else
        {
            printf("%d number is not in the array\n",x);
    
        }

    return 0;
}