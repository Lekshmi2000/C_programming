#include<stdio.h>
#include<conio.h>
void main()
{
int n,digit,sum=0,i;
//clrscr();
printf("enter a no:");
scanf("%d",&n);
for(i=n;i>0;i=n)
 {
 digit=n%10;
 sum+=digit;
 n=n/10;
 }
printf("sum=%d",sum);
//getch();
}