#include<stdio.h>
#include<conio.h>
int fun(int[],int,int,int);
void main()
{
  int i,n,ar[100],temp,y;
  clrscr();
  printf("enter the no:of elements:");
  scanf("%d",&n);
  printf("enter the elements:");
   for(i=0;i<n;i++)
   {
     scanf("%d",&ar[i]);
   }
  printf("enter element to search:");
  scanf("%d",&temp);
  y=fun(ar,i,n,temp);
  if(y==1)
    printf("element found at %dth position",i);
  else
    printf("element not found");
  getch();
}
fun(int ar[],int i,int n,int temp)
{
  for(i=0;i<n;i++)
  {
    if(ar[i]==temp)
    return 1;
  }
}



