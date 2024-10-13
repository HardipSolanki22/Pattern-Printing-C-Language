// pattern 28

#include<stdio.h>
int main()
{
 int i,j,n,mid;
 printf("Enter  no. of rows:");
 scanf("%d",&n);
 mid=n/2+1;
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=n;j++)
  {
   if(i==mid || j==mid || j==1 && i<=mid || j==n && i>=mid || i==1 && j>=mid || i==n && j<=mid)
   {
    printf(" *");
   }

  else
  {
    printf("  ");
  }
 }
  printf("\n");
 }
return 0;
}
