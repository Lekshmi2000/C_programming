#include <stdio.h>
#include <conio.h>
# include<string.h>
char fun(char*new)
{
 int i,l;
 l=strlen(new);
 for(i=0;i<l;i++)
  {
   if(new[i]>='a'&&new[i]<='z')
   new[i]=new[i]-32;
   else if(new[i]>='A'&&new[i]<='Z')
   new[i]=new[i]+32;
  }
 printf("string is: %s",new);
}
void main()
{
  char str[100];
  clrscr();
  printf("enter a string:");
  scanf("%[^\n]s",str);
  fun(&str);
  getch();
}


