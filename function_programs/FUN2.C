#include<stdio.h>
#include<conio.h>
int fun(int a,int b)
{
 int k;
 k=a;
 a=b;
 b=k;
 printf("after swapping num1=%d\n num2=%d\n",a,b);
}
int main()
{
 int num1,num2;
 clrscr();
 printf("enter two numbers:");
 scanf("%d%d",&num1,&num2);
 printf("before swapping num1=%d \n num2=%d\n",num1,num2);
 fun(num1,num2);
 getch();
}