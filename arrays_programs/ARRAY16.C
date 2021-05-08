#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
char st[100],temp;
int i,j,len;
clrscr();
printf("enter a string:");
scanf("%s",&st);
len=strlen(st);
for(i=0;i<len;i++)
{
 for(j=i+1;j<len;j++)
 {
  if(st[i]>st[j])
  {
  temp=st[i];
  st[i]=st[j];
  st[j]=temp;
  }
 }
}
printf("In alphabetical order:%s",st);
getch();
}