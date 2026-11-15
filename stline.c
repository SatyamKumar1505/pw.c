#include<stdio.h>
int main()
{
  int x1,x2,x3,y1,y2,y3,m,n;
  printf("enter 1st point (x1,y1):");
  scanf("%d %d",&x1,&y1);

  printf("enter 2nd point (x2,y2):");
  scanf("%d %d",&x2,&y2);

  printf("enter 3rd point (x3,y3):");
  scanf("%d %d",&x3,&y3);

  m = (y2 - y1)/(x2 - x1);
  n = (y3 - y2)/(x3 - x2);
  if(m == n)
  {
    printf("all points lies on the line");
  }
  else 
  {
    printf("not lies");
  }

    return 0;
}