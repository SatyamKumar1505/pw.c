#include<stdio.h>
int main()
{ int r,c;

    printf("enter the number of rows and coloumns:");
    scanf("%d %d",&r,&c);

  int arr[r][c];


  printf("enter number in array:");

 for(int i =0;i<r;i++)
  {
    for(int j =0;j<c;j++)
    {
        scanf("%d",&arr[i][j]);
    }
  }

  for(int i =0;i<r;i++)
  {
    for(int j =0;j<c;j++)
    {
        printf("%d\t",arr[i][j]);
    }
    printf("\n");
  }

    return 0;
}