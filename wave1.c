#include<stdio.h>
int main()
{

    int i,j,n,m;

    printf("enter number of rows and coloumn:");
    scanf("%d %d",&n,&m);

    int matrix[n][m];
    printf("enter elements of matrix A:");

    for(i =0;i<n;i++)
    {
        for(j =0;j<m;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }

    for(j =0;j<m;j++)
    {
        if(j%2 == 0)
        {
            for(i =0;i<n;i++)
            {
                printf("%d\n",matrix[i][j]);
            }

        }
    
        else
        {
            for(i=n-1;i>=0;i--)
            {
                printf("%d\n",matrix[i][j]);
            }
        }

        
    }


    return 0;
}