#include<stdio.h>
int main()
{
    int n,m;
    int temp;

    printf("enter rows and coloumns:");
    scanf("%d %d",&n,&m);

    int matrix[n][m];

    printf("enter elements of matrix:");

    for(int i =0;i<n;i++)
    {
        for(int j =0;j<m;j++)
        {
            scanf("%d",&matrix[i][j]);
            
        }
    }


    printf("transpose of matrix:");
    for(int i =0;i<m;i++)
    {
        for(int j =0;j<n;j++)
        {
            printf("%d\t",matrix[j][i]);
        }
        printf("\n");
    }

return 0;
}