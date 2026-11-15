#include<stdio.h>
int mian()
{
    int arr[3] = {1,2,3};
    
    
    for(int i =0;i<1;i++)
    {
    for(int j =2;j>=0;j--)
    {
        printf("%d",arr[j]);
    }
    }
    return 0;

}