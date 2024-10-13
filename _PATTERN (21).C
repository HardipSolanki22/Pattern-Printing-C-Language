// pattern 8

#include<stdio.h>
int main() {
 int i,j,n;
 printf("Enter no of rows: ");
 scanf("%d",&n);
 printf("\n");
			      //same as j<=i and i=n;i<=1,i--;
  for(i=1;i<=n;i++)
  {
   for(j=1;j<=i;j++)
   {
     if(j%2==0)
       {
	printf("0");
       }
     else
      {
       printf("1");
      }
   }
   printf("\n");
  }

return 0;
}