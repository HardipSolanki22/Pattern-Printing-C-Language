// pattern 13

#include<stdio.h>
int  main()
{
 int i,j,n,a;
 printf("Enter no of rows :");
 scanf("%d",&n);                    //only odd number
 printf("\n");
 a=n/2+1;

  for(i=1;i<=n;i++)
  {
   for(j=1;j<=n;j++)
   {
     if(i==j || i+j==n+1 || i==a || j==a)
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
