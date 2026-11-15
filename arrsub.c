#include<stdio.h>
int main()
{
    int n,i;
    int sume =0;
    int sumo =0;


    
    printf("enter the number of elements:");
    scanf("%d",&n);

    int arr[n];

    printf("enter elements of array:");
    for(i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
 
    for(i =0;i<n;i++)
    {
        if(i%2 == 0)
        {
            sume = sume + arr[i];
        }
        else
        {
            sumo = sumo + arr[i];
        }

    }

    printf("%d is diffrence of even index elements to odd index elements",(sume-sumo));


    return 0;
}