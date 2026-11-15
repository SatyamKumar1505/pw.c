#include <stdio.h>
int main()
{
    int n, m, i, j;

    int count = 0;
    printf("enter number of rows and coloumn:");
    scanf("%d %d", &n, &m);

    int td = n * m;
    int minr = 0;
    int maxr = n - 1;
    int minc = 0;
    int maxc = m - 1;

    int matrix[n][m];

    printf("enter elements:");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    while (count < td)
    {
        for (j = minc;j<= maxc; j++)
        {
            printf("%d",matrix[minr][j]);
            count++;
        }
        minr++;
        break;

        for (i=minr;i<= maxr;i++)
        {
            printf("%d", matrix[i][maxc]);

            count++;
        }
        maxc--;
        break;

        for (j = maxc;j>= minc;j--)
        {
            printf("%d",matrix[maxr][j]);

            count++;
        }
        maxr--;
        break;

        for (i=maxr;i>=minr;i--)
        {
            printf("%d",matrix[i][minc]);

            count++;
        }
        minc++;
        break;

    }

    return 0;
}