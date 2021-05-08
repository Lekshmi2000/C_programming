#include<stdio.h>
#include<conio.h>
void main()
{
int ar[100],i,ele,n,p=0;
clrscr();
printf("enter no of elements:");
scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 scanf("%d",&ar[i]);
 }
 printf("enter element to be checked:");
 scanf("%d",&ele);
  for(i=0;i<n;i++)
  {
   if(ar[i]==ele)
    {
    p=1;
   break;
   }
 }
   if(p==1)
   printf("present");
   else
   printf("not present");
getch();
}

