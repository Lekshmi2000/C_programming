#include<stdio.h>
#include<conio.h>
void main()
{
int i,num,fact=1;
//clrscr();
printf("enter number:");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
fact*=i;
}
printf("fact=%d",fact);
//getch();
}