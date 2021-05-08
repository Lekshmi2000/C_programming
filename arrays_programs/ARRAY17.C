#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
char s1[20],s2[20],s3[20],s4[20];
char ch1,ch2;
int len1,len2,i;
int pos,len,comp;
clrscr();
printf("enter first string:\n");
scanf("%s",s1);
printf("enter second string:\n");
scanf("%s",s2);
len1=strlen(s1);
strcpy(s3,s1);
strcat(s3,s2);
printf("length of first string:%d\n",len1);
len2=strlen(s2);
printf("length of second string:%d\n",len2);
comp=strcmp(s1,s2);
if(comp==0)
{
printf ("strings are same\n");
}
else
printf("strings are not same\n");
printf("copied string:%s\n",s3);
printf("after concatenation=%s\n",s3);
printf("reverse=\n");
for(i=len1+len2-1;i>=0;i--)
printf("%c",s3[i]);
printf("enter position anh length of substring:");
scanf("%d%d",&pos,&len);
for(i=0;i<len;i++)
s4[i]=s3[pos+i-1];
printf("required substring=\n");
printf("%s",s4);
printf("\nenter element to be replaced:\n");
scanf(" %c",&ch1);
printf("\nenter element to replace with:\n");
scanf(" %c",&ch2);
for(i=0;i<len1+len2-1;i++)
{
 if(s3[i]==ch1)
   s3[i]=ch2;
 }
printf("%s",s3);
getch();
}






