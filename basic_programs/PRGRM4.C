#include<stdio.h>
#include<conio.h>
void main()
{
int i,n1,n2;
//clrscr();
printf("enter the first and second no:");
scanf("%d%d",&n1,&n2);
for(i=n1;i<=n2;i++)
    {
    if(i%2!=0)
      printf("%d",i);
    }
//getch();
}
