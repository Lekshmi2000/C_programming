#include<stdio.h>
#include<conio.h>
int fact(int);
int main()
{
  int n,r,ncr;
  clrscr();
  printf("enter value of n:");
  scanf("%d",&n);
  printf("enter value of r:");
  scanf("%d",&r);
  if(n>r)
  {
    ncr=fact(n)/(fact(n-r)*fact(r));
    printf("ncr=%d",ncr);
  }
  else
    printf("ncr is not possible");
  getch();
}
int fact(int a)
{
  int fact=1,i;
  for(i=1;i<=a;i++)
  {
    fact=fact*i;
  }
  return fact;
}