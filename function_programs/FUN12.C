#include<stdio.h>
#include<conio.h>
int fun(int);
void main()
{
  int n,i,value;
  clrscr();
  printf("enter the number:");
  scanf("%d",&n);
  printf("fibonacci series is:");
  for(i=0;i<n;i++)
  {
    value=fun(i);
    printf(" %d",value);
  }
  getch();
}
int fun(int x)
{
  if((x==0)||(x==1))
    return x;
  else
    return (fun(x-1)+fun(x-2));
}

