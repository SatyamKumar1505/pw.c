#include<stdio.h>
int main()
{
    int arr[5]= {5,7,10,4,8};
    int max = arr[0];
    int smax = arr[0];
    

    for(int i = 0;i<5;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }


    for(int i =0;i<5;i++)
    {
        if(arr[i]>smax && arr[i]!=max)
        {
            smax = arr[i];
        }
    }


printf("smax is %d",smax);
    return 0;
}