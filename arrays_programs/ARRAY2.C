#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],i,n,temp,fbig,sbig;
clrscr();
printf("enter limit of array:");
scanf("%d",&n);
printf("enter the array elements:");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  fbig=a[0];
  sbig=a[1];
 }
  if(sbig>fbig)
  {
   temp=sbig;
   sbig=fbig;
   fbig=temp;
  }
 for(i=2;i<n;i++)
   if(a[i]>fbig)
    {
    sbig=fbig;
    fbig=a[i];
    }
   else if(a[i]>sbig)
    sbig=a[i];
 printf("biggest and second biggest are%d and%d:",fbig,sbig);
 getch();
 }





