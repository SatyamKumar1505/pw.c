#include <stdio.h>
int main()
{
    int i, j,n, m, p, q, k,s;
    int matrixC[100][100];
   

    printf("enter number of rows and coloumns:");
    scanf("%d %d", &n, &m);

    int matrixA[n][m];

    printf("enter elements in matrixA:");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d",&matrixA[i][j]);
        }
    }


    printf("enter number of rows and coloumns:");
    scanf("%d %d", &p, &q);

    int matrixB[p][q];
    printf("enter elements in matrixB:");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            scanf("%d",&matrixB[i][j]);
        }
    }

    if (m != p)
    {
        printf("we cant do multiplication of matrix");
        return 0;
    }

    
    else
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < q; j++)
            {
                int sum = 0;
                for (k = 0; k < m; k++)
                {
                    matrixC[i][j]= matrixA[i][k] * matrixB[k][j];
                    sum = sum + matrixC[i][j];
                }
                printf("%d ",sum);
            }
            printf("\n");
        }
    }

    return 0;
}