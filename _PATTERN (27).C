// pattern 14

#include<stdio.h>
int  main()
{
 int i,j,n,a=1;
 printf("Enter no of rows:");
 scanf("%d",&n);
 printf("\n");
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=i;j++)
  {
   printf(" %d",a);
   a=a+1;
  }
  printf("\n");
 }
 return 0;
}
