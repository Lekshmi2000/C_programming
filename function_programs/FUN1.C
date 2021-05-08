#include<stdio.h>
#include<conio.h>
int fun(int a,int b)
{
  if(a>b)
  return a;
  else
  return b;
}
void main()
{
  int x,y,value;
  clrscr();
  printf("enter two numbers:");
  scanf("%d%d",&x,&y);
  value=fun(x,y);
  printf("maximum=%d",value);
  getch();
}