// pattern 23

#include<stdio.h>
int main()
{
 int i,j,n,k,a=1,q;
 int st;
 printf("Enetr no. of rows:");
 scanf("%d",&n);
 printf("\n");
 for(i=1;i<=n;i++)
 {
 st=i-1;
 for( j=1;j<=n-i;j++)
  {
   printf("  ");
  }
  for(k=1;k<=i;k++)
   {
     printf(" %d",k);
   }

     for(q=1;q<=a-i;q++)
     {
      printf(" %d",st);
      st--;
     }
     a+=2;
     printf("\n");
  }
  return 0;
 }


