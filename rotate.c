#include<stdio.h> //not completed after function you come.

void reversed(int arr[],int a,int b)
{
     int temp;
    
    for(int i = a;i<b;i++)
    {

        for(int j=b-i;j>i;j--)
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
    return;
}



int main()
{
    int k =3;
    int arr[7] = {1,2,3,4,5,6,7};
   
   reversed(arr,0,6);
   reversed(arr,0,2);
   reversed(arr,3,6);

    printf("reversed ''array:");

    for(int i =0;i<7;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0; // in need out put 5 6 7 1 2 3 4
}