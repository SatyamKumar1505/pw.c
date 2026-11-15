#include<stdio.h>
int main()
{
    int n,m;
    
    int max = 0;
    int idx;
    printf("enter number of row and coloumn:");
    scanf("%d %d",&n,&m);

    int matrix[n][m];
    printf("enter elements of matrix(only 1,0):");

    for(int i = 0;i<n;i++)
    {
        for(int j =0;j<m;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }

     for(int i = 0;i<n;i++)
    {
        int count =0;
        for(int j =0;j<m;j++)
        {
            if(matrix[i][j] == 1)
            {
                count++;
            }
        }
        if(max<count)
        {
            max = count;
            idx = i+1;
        }
    }

    printf("%dth row have maximam number of 1's\n",idx);
    printf("number of maximam 1's is %d",max);

    return 0;


}