#include<stdio.h>
#include<conio.h>
void main()
{
int mt[10][10],i,j,max=0,min=0,m,n;
clrscr();
printf("enter order of matrix m*n");
scanf("%d%d",&m,&n);
printf("enter elements row wise:");
for (i=0;i<m;i++)
 {
   for(j=0;j<n;j++)
   {
   scanf("%d",&mt[i][j]);
   }
 }
  for(i=0;i<m;i++)
    {
    min=mt[i][0];
    for(j=0;j<n;j++)
     {
      if(mt[i][j]<min)
      {
      min=mt[i][j];
      }
      }
    printf("smallest of %d row is =%d \n",i+1,min);
    }
  i=0;
  j=0;
 for(j=0;j<n;j++)
  {
  max=mt[0][j];
   for(i=0;i<m;i++)
   {
    if(mt[i][j] > max)
     {
      max=mt[i][j];
     }
   }
   printf("largest of %d column is =%d \n",j+1,max);
 }
getch();
}
