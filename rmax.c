#include<stdio.h>
int main()
{ 
    int n,m;
    int idx;
    
    printf("enter number rows and coloumn:");
    scanf("%d %d",&n,&m);

    int matrix[n][m];
    int max =0;

    printf("enter elements of matrix:");
    for(int i =0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
          scanf("%d",&matrix[i][j]);   
        }
    }


    for(int i =0;i<n;i++)
    {
        int sum =0;
        for(int j =0;j<m;j++)
        {
            sum = sum + matrix[i][j];
        }
        if(sum>max)
        {
            max = sum;
             idx = i +1;
        }
         
    }

    printf("max sum of all rows :%d",max);
    printf("index of that row is %d",idx);
    return 0;
}