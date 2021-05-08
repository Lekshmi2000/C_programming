#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
int mt[10][10],i,j,r=0,c=0,m,n;
float normal;
clrscr();
printf("enter order of matrix m*n");
scanf("%d%d",&m,&n);
printf("enter elements row wise:");
for(i=0;i<m;i++)
 {
 for(j=0;j<n;j++)
 {
 scanf("%d",&mt[i][j]);
 }
 }
 for(i=0;i<m;i++)
 {
 r=0;
 for(j=0;j<n;j++)
 {
 r=r+mt[i][j];
 }
 printf("sum of %d row =%d \n",i+1,r);
 }
 for(j=0;j<n;j++)
 {
 c=0;
 for(i=0;i<n;i++)
 {
 c=c+mt[i][j];
 }
 printf("sum of %d column=%d \n",j+1,c);
 }
getch();
}
