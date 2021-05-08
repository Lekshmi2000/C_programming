#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
int mt1[10][10],i,j,k,mt2[10][10],sum=0,m,n,mt3[10][10];
clrscr();
printf("enter order of matrix m*n");
scanf("%d%d",&m,&n);
printf("enter elements of first:");
for(i=0;i<m;i++)
 {
 for(j=0;j<n;j++)
 {
 scanf("%d",&mt1[i][j]);
 }
 }
printf("enter elements of second:");
for(i=0;i<m;i++)
 {
 for(j=0;j<n;j++)
 {
 scanf("%d",&mt2[i][j]);
 }
 }
for(i=0;i<m;i++)
 {
 for(j=0;j<n;j++)
 {
  sum=0;
  for(k=0;k<n;k++)
  {
  sum+=mt1[i][k]*mt2[k][j];
  }
 mt3[i][j]=sum;
 }
}
printf("on multiplication:");
for(i=0;i<n;i++)
 {
 for(j=0;j<n;j++)
 {
 printf("%d \n",mt3[i][j]);
 }
}
getch();
}
