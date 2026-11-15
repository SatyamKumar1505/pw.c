#include<stdio.h>
int main()
{
    int n;
    int count =0;

    printf("enter size of an array:");
    scanf("%d",&n);

    int arr[n];

    printf("enter values of elements:");
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i =0,j=n-1;i<j;i++,j--)
    {
        if(arr[i] == arr[j])
        {
            // printf("array is palindrome");
            // break;
            count++;
        }

    //     else
    //    {
    //     printf("not p");
    //    }

    }
    if(count == n/2)
    {
        printf("array ,is palindrome");
    }
    else{
        printf("not palindrome");
    }

    return 0;
}