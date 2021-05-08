#include<stdio.h>
#include<conio.h>
void main()
{
int n,totalnum,i,small;
//clrscr();
printf("enter total no:of numbers:");
scanf("%d",&totalnum);
printf("enter first no:");
scanf("%d",&n);
small= n;
for(i=1;i<totalnum;i++)
  {
  printf("enter next no:");
  scanf("%d",&n);
  if(n<small)
  small=n;
  }
printf("small is %d",small);
//getch();
}