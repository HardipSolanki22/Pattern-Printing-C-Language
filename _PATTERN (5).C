// pattern 21

#include<stdio.h>
int main()
{
 int i,k,j,n,a=1;
 printf("Enter no. of rows:");
 scanf("%d",&n);
 printf("\n");
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=n-i;j++)
   {
    printf("  ");
   }
   for(k=1;k<=a;k++)
   {
    printf(" %c",k+64);
   }
   a+=2;
   printf("\n");
  }
  return 0;
 }