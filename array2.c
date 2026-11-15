#include<stdio.h>
int main()
{
    int n,i,j,x;
    int sum;
    int count =0;

    printf("enter number of elements in array:");
    scanf("%d",&n);

    printf("enter a value for compare:");
    scanf("%d",&x);

    int arr[n];

    printf("enter elements values:");
    for(i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

   for(i =0;i<n;i++)
   {
    for(j =i+1;j<n;j++)
    {
        sum = arr[i] +arr[j];
        if(sum == x)
        {
            count++;
            printf("(%d,%d)\n",arr[i],arr[j]);
        }
    }
   }
   if(count>0)
   {
    printf("total number of pairs are %d",count);
   }

   else
   {
    printf("no pairs obtained");
   }

    return 0;
}