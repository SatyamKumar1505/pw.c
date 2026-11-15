#include<stdio.h>
int main()
{
  int n;
  
  printf("enter size of array:");
  scanf("%d",&n);

  int arr[n];
  int brr[n];
  
  printf("enter values of array:");

  for(int i = 0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }

  for(int i = 0;i<n;i++)
  {
    brr[i] = arr[n-1-i];
  } 
  
  printf("reversed array:");
  for(int i = 0;i<n;i++)
  {
   printf("%d,",brr[i]);
  } 


    return 0;
}