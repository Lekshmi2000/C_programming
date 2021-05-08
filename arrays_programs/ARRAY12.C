#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
 char st[20],ch;
 int i,count=0;
 clrscr();
 printf("enter string\n");
 gets(st);
 printf("enter character to be checked:");
 scanf("%c",& ch);
 for(i=0;st[i]!='\0';i++)
  {
   if(st[i]== ch)
    count++;
   }
 printf("count of %c is %d",ch,count);
 getch();
 }

