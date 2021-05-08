#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
//clrscr();
printf("enter a no:");
scanf("%d",&n);
for(i=1;i<=10;i++)
printf("%d*%d=%d\n",i,n,i*n);
//getch();
}