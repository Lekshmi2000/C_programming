#include<stdio.h>
struct salary
{
  float BS;
  float DA;
  float taxcuts;
  float PF;
  float IT;
  float netsalary;
}amount;
void main()
{
 int HRA=150;
 int TA=120;
 int others=450;
 printf("enter basic salary:");
 scanf("%f",&amount.BS);
 amount.DA=0.12*amount.BS;
 amount.PF=0.14*amount.BS;
 amount.IT=0.15*amount.BS;
 amount.taxcuts=amount.PF+amount.IT;
 amount.netsalary=amount.BS+amount.DA+HRA+TA+others-(amount.taxcuts);
 printf("employee salary=%f",amount.netsalary);
}

