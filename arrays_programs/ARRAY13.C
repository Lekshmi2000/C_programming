#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
char st[100];
int i,count1=0,count2=0,count3=1;
clrscr();
printf("enter a paragraph:");
gets(st);
 for(i=0;st[i]!='\0';i++)
  {
   if(st[i]=='a'||st[i]=='e'||st[i]=='i'||st[i]=='o'||st[i]=='u'||st[i]=='A'||st[i]=='E'||st[i]=='I'||st[i]=='O'||st[i]=='U')
     {
     count1++;
     }
  if(st[i]=='.'||st[i]=='?'||st[i]=='!')
    {
    count2++;
    }
  if(st[i]==' '&&st[i+1]!=' ')
    {
    count3++;
    }
   }
 printf("number of vowels=%d",count1);
 printf("number of sentences=%d",count2);
 printf("number of words=%d",count3);
 getch();
 }