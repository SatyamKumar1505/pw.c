#include<stdio.h>
int main()
{
    int rollno[4];
    int mark[4];
    char name[100][100];

    printf("enter name,rollno and mark:");


    for(int i =0;i<4;i++)
    {
            printf("enter name,rollno and mark of student %dth:",i+1);
            scanf(" %[^\n]",name[i]);
            scanf(" %d",&rollno[i]);
            scanf("%d",&mark[i]);
    }
   
 for(int i =0;i<4;i++)
    {
            printf("%s ",name[i]);
            printf("%d  ",rollno[i]);
            printf("%d\n",mark[i]);  
    }

    return 0;
}