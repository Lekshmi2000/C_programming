#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,sum=0;
float num[100], avg;
clrscr();
printf("enter the no:of numbers:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%f",&num[i]);
}
sum=0;
for(i=0;i<n;i++)
{
sum+=num[i];
}
avg=sum/n;
printf("average= %f",avg);
getch();
}


