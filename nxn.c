#include<stdio.h>
int main()
{
    int n;
    int temp;
    printf("number of rows and coloumn:");
    scanf("%d",&n);

    int matrix[n][n];
    printf("enter elements :");

    for(int i =0;i<n;i++)
    {
        for(int j =0;j<n;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }

    for(int i =0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    printf("transpose of a matrix:\n");
    
    for(int i =0;i<n;i++)
    {
        for(int j =0;j<n;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }


    return 0;
}