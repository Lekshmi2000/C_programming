#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,row,space;
//clrscr();
printf("enter no of rows:\n");
scanf("%d",&row);
for(i=0;i<row;i++)
{
 for(space=1;space<row-i;space++)
 {
 printf(" ");
 }
  for(j=0;j<=i;j++)
  {
   printf(" %d ",j);

  }
printf("\n");
}
//getch();
}