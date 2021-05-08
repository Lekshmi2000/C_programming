#include<stdio.h>
#include<conio.h>
#include<math.h>
int fun(int a)
 {
  int value,power;
  printf("enter the power:");
  scanf("%d",&power);
  value=pow(a,power);
  return value;
 }
void main()
 {
  int n,result;
  clrscr();
  printf("enter the no:");
  scanf("%d",&n);
  result=fun(n);
  printf("required power of %d is%d",n,result);
  getch();
 }