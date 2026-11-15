#include<stdio.h>
int main()
{
    int cp,sp,c;
    

    printf("enter value of cp:\n");
    scanf("%d",&cp);
    
    printf("enter value of sp:\n");
    scanf("%d",&sp);
    
     c = sp - cp;
    if(c>0)
    {
        printf("profit\n");
        printf("profit is %d",c);
    }
    
    
    else
    {
        printf("loss\n");
         printf("loss is %d",c*(-1));
    }
   


   return 0;

}