# include<stdio.h>
# include<string.h>
struct list
{
 char name[20];
 float mark1;
 float mark2;
 float mark3;
 float mark4;
 float mark5;
 float total;
 float average;
};
void main()
{
 struct list s[50];
 int n,i;
 printf("enter the no:of students:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
  {
    printf("enter name:");
    scanf("%s",s[i].name);
    printf("enter mark1:");
    scanf("%f",&s[i].mark1);
    printf("enter mark2:");
    scanf("%f",&s[i].mark2);
    printf("enter mark3:");
    scanf("%f",&s[i].mark3);
    printf("enter mark4:");
    scanf("%f",&s[i].mark4);
    printf("enter mark5:");
    scanf("%f",&s[i].mark5);
    s[i].total=s[i].mark1+s[i].mark2+s[i].mark3+s[i].mark4+s[i].mark5;
    s[i].average=s[i].total/5;

  }
      printf("\t\t\t\t\tMARK LIST \n");
      printf("******************************************************************************************************************************************\n");
      printf("roll no\t name\t  mark1\t    mark2\t   mark3\t   mark4\t    mark5\t      total\t      average ");
       for(i=0;i<n;i++)
       {
           printf("\n  %d     %s    %f   %f     %f        %f        %f        %f       %f\n",i+1,s[i].name,s[i].mark1,s[i].mark2,s[i].mark3,s[i].mark4,s[i].mark5,s[i].total,s[i].average);

       }
}