#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
char st[20];
int i,palindrome=1,len;
clrscr();
printf("enter a string:");
scanf("%s",&st);
len=strlen(st);
 for(i=0;i<len;i++)
 {
  if(st[i]!=st[len-i-1])
  {
   palindrome=0;
   break;
  }
 }
   if(palindrome==0)
   {
   printf("string is not palindrome");
   }
   else
   {
   printf("string is palindrome");
   }
 getch();
 }

