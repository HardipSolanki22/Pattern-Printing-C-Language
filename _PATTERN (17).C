// pattern 4 

#include<stdio.h>
int main()
{
 int i,j,n,a;
 printf("Enter no of rows: ");     //evan or odd no wioth pattren 2
 scanf("%d",&n);
 printf("\n");

  for(i=n;i>=1;i--)
  {
  a=2;
   for(j=1;j<=i;j++)
    {
      printf("%d",a);
      a+=2;
    }
    printf("\n");
   }
   return 0;
}