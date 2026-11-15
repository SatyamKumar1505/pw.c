#include<stdio.h>
int main()
{
    int n;
    int temp;
    printf("enter number of rows and coloumn:");
    scanf("%d",&n);

    int matrix[n][n];

    printf("enter elements of matrix:");

    for(int i =0;i<n;i++)
    {
        for(int j =0;j<n;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }

    
    
    for(int i =0;i<n;i++)
    {
        for(int j =i;j<n;j++)
        {
            temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    for(int i =0;i<n;i++)
    {
        for(int j=n-1;j>=0;j--)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}