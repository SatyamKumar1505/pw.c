#include<stdio.h>
int main()
{
    int n,m;
    printf("enter number of rows and coloumn:");
    scanf("%d %d",&n,&m);
    int arr[n][m];
    int brr[n][m];

    printf("enter value of matrix A:");
    for(int i =0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("enter value of matrix B:");
    for(int i =0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&brr[i][j]);
        }
    }


     printf("sum of matrix A and B:");

    for(int i =0;i<n;i++)
    {
        for(int j =0;j<m;j++)
        {
            printf("%d\t",arr[i][j]+brr[i][j]);
        }
        printf("\n");
    }

    return 0;
}