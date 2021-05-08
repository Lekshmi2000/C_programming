#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
char st1[100],st2[100];
int i,j;
clrscr();
printf("enter first string ending with $:");
scanf("%s",&st1);
printf("enter next string ending with $:");
scanf("%s",&st2);
 for(i=0;st1[i]!='\0';++i)
 {
   printf("\n");
 }
  for(j=0;st2[j]!='\0';++j,++i)
  {
   st1[i]=st2[j];
  }
   st1[i]='\0';
   printf("output=%s",st1);
getch();
}