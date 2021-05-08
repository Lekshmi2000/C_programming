#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,sum=0;
//clrscr();
printf("enter the no:of numbers:");
scanf("%d",&n);
for(i=1;i<=n;i++)
 {
   sum=sum+i;

 }
printf("sum=%d",sum);
//getch();
}