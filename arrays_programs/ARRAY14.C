#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
char st[20] ,choice;
clrscr();
printf("enter a string");
gets(st);
printf("FOR UPPERCASE:Y\n");
printf("FOR LOWERCASE:N\n");
printf("\nenter a choice:");
scanf("%c",&choice);
if(choice=='y')
{
printf("In uppercase:");
puts(strupr(st));
}
else
{
printf("In lowercase:");
puts(strlwr(st));
}
getch();
}
