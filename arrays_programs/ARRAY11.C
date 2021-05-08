#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
int magic[50][50];
int i=0,j,k;
int order,sqr;
clrscr();
printf("magic square work only for an odd order matrix\n");
printf("enter an odd order matrix:\n");
scanf("%d",&order);
sqr=order*order;
j=order/2;
   for(k=1;k<=sqr;k++)
    {
      magic[i][j]=k;
      i--;
      j++;
      if(k%order==0)
      {
       i=i+2;
       --j;
      }
      else
      {
	if(j==order)
	 {
	 j=j-order;
	 }
	else if(i<0)
	 {
	   i=i+order;
	 }
      }
    }
 printf("magic square\n");
  for(i=0;i<order;i++)
   {
    for(j=0;j<order;j++)
     {
	printf("%d\t",magic[i][j]);
     }
     printf("\n");
   }
   getch();
 }
