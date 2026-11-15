#include<stdio.h>
int main()
{
    int arr[5] = {3,5,9,6,8};
    int i,x =arr[0];

    for(i = 0;i<5;i++)
    {
        if(x<arr[i])
        {
            x = arr[i];
        }
    }

    printf("%d is max element of array",x);



    return 0;
}