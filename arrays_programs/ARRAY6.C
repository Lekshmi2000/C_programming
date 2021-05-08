#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
int mt[10][10],i,j,sumt=0,sumn=0,m,n;
float normal;
clrscr();
printf("enter order of matrix m*n");
scanf("%d%d",&m,&n);
printf("enter elements row wise:");
sumn=0;
for(i=0;i<m;i++)
 {
 for(j=0;j<n;j++)
 {
 scanf("%d",&mt[i][j]);
 sumn=sumn+mt[i][j]*mt[i][j];
 }
 }
 normal=sqrt(sumn);
 printf("norm=%f \n",normal);
 if(m==n)
 {
 sumt=0;
 for(i=0;i<n;i++)
 {
 sumt=sumt+mt[i][i];
 }
 printf("trace is %d",sumt);
 }
 else
 printf("no trace");
getch();
}
