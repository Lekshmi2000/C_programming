#include<stdio.h>
#include<conio.h>
int fun(int[],int,int,int);
int main()
{
  int ar[100],i,n,temp;
  clrscr();
  printf("enter the no of elements:\n");
  scanf("%d",&n);
  printf("enter elements in sorted manner:");
  for(i=0;i<n;i++)
    scanf("%d",&ar[i]);
  printf("enter element to check:");
  scanf("%d",&temp);
  fun(ar,i,n,temp);
  getch();
}
int fun(int ar[],int i,int n,int temp)
{
  int f=0,l=n-1,m;
  while(f<=l)
  {
    m=(f+l)/2;
    if(ar[m]==temp)
     {
       printf("element is founded in %dth place",m+1);
       break;
     }
    else if(ar[m]<temp)
      f=m+1;
    else
      l=m-1;
  }
  if(f>l)
    printf("element not found");
}