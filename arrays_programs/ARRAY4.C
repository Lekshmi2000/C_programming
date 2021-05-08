#include<stdio.h>
#include<conio.h>
void main()
{
int ar1[100],ar2[100],sum[100],i,n;
clrscr();
printf ("enter the no of elements\n");
scanf("%d",&n);
printf("enter the elements of first array:\n");
for(i=0;i<n;i++)
 {
  scanf("%d",&ar1[i]);
 }
printf("enter elements of second array:\n");
 for(i=0;i<n;i++)
 {
 scanf("%d",&ar2[i]);
 }
 for(i=0;i<n;i++)
 sum[i]=ar1[i]+ar2[i];
 printf("sum of array is \n");
 for(i=0;i<n;i++)
 printf(" %d ",sum[i]);
 getch();
 }
