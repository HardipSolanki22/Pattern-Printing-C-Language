// pattern 24

#include<stdio.h>
int main()
{
 int i,j,n,k,q,a=1;
 int st;
 printf("Enetr no. of rows:");
 scanf("%d",&n);
 printf("\n");
 for(i=1;i<=n;i++)
 {
 st=i-1;
   for(j=1;j<=n-i;j++)
    {
      printf("  ");
    }
   for(k=1;k<=i;k++)
    {
     printf(" %c",k+64);
    }
   for(q=1;q<=a-i;q++)
   {
    printf(" %c",st+64);
    st--;
   }
   a+=2;
   printf("\n");
 }
return 0;
}