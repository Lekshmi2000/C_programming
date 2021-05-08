#include<stdio.h>
#include<conio.h>
int fun(int n)
{
int fact=1;
if(n==1)
return 1;
else
fact=n*fun(n-1);
return fact;
}
void main()
{
 int num,value;
 clrscr();
 printf("enter the no:");
 scanf("%d",&num);
 value = fun(num);
 printf("factorial=%d",value);
 getch();
}