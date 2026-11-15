#include<stdio.h>
int main()
{
    int temp;

    int arr[5] = {1,2,3,4,5};
    
    for(int i = 1;i<4;i++)
    {
        for(int j=4-i;j>i;j--)
        {
            if(i<=j)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            break;
        }
    }

    printf("reversed ''array:");

    for(int i =0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}