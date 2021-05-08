#include<stdio.h>
#include<conio.h>
char fun(char);
void main()
{
  char i='a';
  clrscr();
  printf("english alphabets are:");
  fun(i);
  getch();
}
char fun(char i)
{
  printf(" %c ",i);
  if(i<'z')
  fun(i+1);
}

