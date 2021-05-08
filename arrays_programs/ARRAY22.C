#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
char st[100];
int i, count1=0,count2=0,count3=0,len;
clrscr();
printf("enter a string ending with $:");
scanf("%[^\n]s",st);
len=strlen(st);
 for(i=0;st[i]!='\0';i++)
 {
  if(st[i]=='a'||st[i]=='e'||st[i]=='i'||st[i]=='o'||st[i]=='u'||st[i]=='A'||st[i]=='E'||st[i]=='I'||st[i]=='O'||st[i]=='U')
   {
    count1++;
   }
    if(st[i]==' ')
    {
    count2++;
    }
     if(st[i]=='!'||st[i]=='@'||st[i]=='#'||st[i]=='$'||st[i]=='%'||st[i]=='^'||st[i]=='&'||st[i]=='*')
     {
      count3++;
     }
 }
printf("total vowels:%d\n",count1);
printf("total space:%d\n",count2);
printf("total consonants:%d\n",len-(count1+count2+count3));
getch();
}