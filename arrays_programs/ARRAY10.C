#include<stdio.h>
#include<conio.h>
void main()
{
int mt[10][10],i,j,trace[10][10],m,n;
clrscr();
printf("enter order of matrix m*n");
scanf("%d%d",&m,&n);
printf("enter elements of matrix:");
for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
  scanf("%d",&mt[i][j]);
  }
 }
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   printf(" %d ",mt[i][j]);
  }
  printf(" \n ");
 }
printf("trace of matrix:\n");
for(i=0;i<m;i++)
 {
   for(j=0;j<n;j++)
   {
   trace[i][j]=mt[j][i];
   }
 }
for(i=0;i<m;i++)
 {
 for(j=0;j<n;j++)
 {
  printf(" %d ",trace[i][j]);
  }
  printf(" \n ");
 }
getch();
}
