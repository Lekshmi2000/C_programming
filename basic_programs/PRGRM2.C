#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,sum=0;
//clrscr();
printf("enter the no:of numbers:");
scanf("%d",&n);
for(i=2;i<=n;i++)
    {
     if(i%2==0)
      sum+=i;
    }
printf("sum=%d",sum);
//getch();
}
