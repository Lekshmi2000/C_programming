#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,j,prime=1,ar[100];
clrscr();
printf("enter the no:of numbers:");
scanf("%d",&n);
printf("enter numbers:");
for(i=0;i<n;i++)
{
scanf("%d",&ar[i]);
}
for(i=0;i<n;i++)
 {
  prime=1;
  for(j=2;j<ar[i];j++)
  {
    if(ar[i]%j==0)
    {
    prime=0;
    break;
    }
  }
  if(prime==1&&ar[i]!=1)
  printf(" %d ",ar[i]);
 }
getch();
}


