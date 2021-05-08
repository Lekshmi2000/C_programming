#include<stdio.h>
struct date
{
 int day;
 int month;
 int year;
 int nd;
 int nm;
 int ny;
};
void main()
{
 struct date tom;
 int m [12]={31,28,31,30,31,30,31,31,30,31,30,31};
 int ndays;
 printf(" enter date in format dd.mm.yy:");
 scanf("%d",&tom.day);
 scanf("%d",&tom.month);
 scanf("%d",&tom.year);
 printf("todays date is %d.%d.%d",tom.day,tom.month,tom.year);
 ndays=m[tom.month-1];
 if(tom.month==2)
  {
   if(tom.year%4==0)
   ndays=29;
   else
   ndays=28;
  }
 tom.nd=tom.day+1;
 tom.nm=tom.month;
 tom.ny=tom.year;
 if(tom.nd>ndays)
 {
 tom.nd=1;
 tom.nm=tom.nm+1;
 tom.ny=tom.ny;
 }
 if(tom.nm>12)
 {
  tom.nd=1;
  tom.nm=1;
  tom.ny=tom.ny+1;
 }
 printf("\ntomorrows date is%d.%d.%d ",tom.nd,tom.nm,tom.ny);
}
