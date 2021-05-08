#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
void fun(int count,char *str[]);
void main()
{
  char *str[100];
  int count=0,i;
  clrscr();
  printf("enter the no:of strings:");
  scanf("%d",&count);
  printf("enter the strings:");
  for(i=0;i<count;i++)
  {
    str[i]=(char*)malloc(20*sizeof(char));
    scanf("%s",str[i]);
  }
  fun(count,str);
  printf("\n sorted string is:\n");
  for(i=0;i<count;i++)
  {
    printf("%d. %s\n",i+1,str[i]);
  }
  getch();
}
void fun(int count,char *str[])
 {
   char temp[100];
   int i,j;
   for(i=0;i<count-1;i++)
   {
    for(j=i+1;j<count;j++)
     {
       if(strcmp(str[i],str[j])>0)
	{
	  strcpy(temp,str[i]);
	  strcpy(str[i],str[j]);
	  strcpy(str[j],temp);
	}
     }
   }
  return;
 }