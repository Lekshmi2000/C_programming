#include<stdio.h>
#include<conio.h>
void main()
{
int i,num,digit,result=0,temp;
//clrscr();
printf("enter a no:");
scanf("%d",&num);
temp=num;
for(i=num;i>0;i=i/10)
 {
 digit=num%10;
 result+=digit*digit*digit;
 num=num/10;
 }
 if(result==temp)
 printf("armstrong");
 else
 printf("not armstrong");
 //getch();
 }