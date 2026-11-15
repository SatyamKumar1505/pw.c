#include<stdio.h>
int main()
{
    int x;
    int temp;

    printf("enter size of array:");
    scanf("%d",&x);

    int arr[x];
    printf("enter values of array:");
   
    for(int i =0;i<x;i++)
    {
          scanf("%d",&arr[i]);
    }
  
    for(int i =0;i<x/2;i++)
    {
        temp = arr[i];
        arr[i] = arr[x-1-i];
        arr[x-1-i] = temp;
    }
    printf("reversed order:");

    for(int i = 0;i<x;i++)
    {
        printf("%d,",arr[i]);
    }
    return 0;
}