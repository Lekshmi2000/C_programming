#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,row,space,ncr=1;
//clrscr();
printf("enter no of rows: \n");
scanf("%d",&row);
for(i=0;i<row;i++)
 {
  for(space=1;space<row-i;space++)
  {
   printf(" ");
   }
    for(j=0;j<=i;j++)
     {
      if(i==0||j==0)
      {
      ncr=1;
      }
      else
      {
      ncr=ncr*(i-j+1)/j;
      }
      printf(" %d ",ncr);

    }
   printf("\n");
  }
  //getch();
  }
