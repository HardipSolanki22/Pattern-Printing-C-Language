 // pattern 3evan or odd number

#include<stdio.h>
int main()
{
 int i,j,a,n;
 printf("Enter no of rows: ");
 scanf("%d",&n);

 for(i=1;i<=n;i++)
 {                          
			   //evan no a=2 and a+=2
 a=1;
   for(j=1;j<=i;j++)
    {

       printf("%d",a);
       a+=1;
    }
     printf("\n");
 }
}