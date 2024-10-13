// pattern 22

#include<stdio.h>
int  main()
{
 int i,j,n;
 printf("Enetr no. of rows:");
 scanf("%d",&n);
 printf("\n");
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=n;j++)
   {
    if(i==1||j==n||i==n||j==1)
    {
     printf("* ");
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