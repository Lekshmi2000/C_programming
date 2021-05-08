#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,a[100],temp;
clrscr();
printf("enter no of elements");
scanf("%d",&n);
printf("enter elements:");
for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
for(i=0;i<n;i++)
 {
 for(j=0;j<n-1;j++)
 {
 if(a[j]>a[j+1])
 {
 temp=a[j];
 a[j]=a[j+1];
 a[j+1]=temp;
 }
 }
 }
 for(i=0;i<n;i++)
 {
 printf("%d",a[i]);
 }
 getch();
}