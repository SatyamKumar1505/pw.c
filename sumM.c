#include<stdio.h>
int main()
{
    int n,m;
    // int sum =0;
    
    printf("enter number of rows and coloumn:");
    scanf("%d %d",&n,&m);

    int matrix[n][m];
    int max = matrix[0][0];
    int idx,idy;
    printf("enter elements of matrix:");
    for(int i =0;i<n;i++)
    {
        for(int j =0;j<m;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }

    for(int i =0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            // sum = sum + matrix[i][j];
            if(max<matrix[i][j])
            {
                max = matrix[i][j];
                idx = i;
                idy = j;
            }
        }
    }

    // printf("sum of matrix :%d",sum);
    printf("maximum element of matrix:%d\n",max);
    printf("index is %d %d",idx,idy);



    return 0;
}