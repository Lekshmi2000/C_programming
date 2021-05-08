# include<stdio.h>
struct date
{
 int d;
 int m;
 int y;
};
void main()
{
 struct date x;
 char *month[12]={"january","february","march","april","may","june","july","august",
	    "september","october","november","december"};
 printf("enter date in the format dd.mm.yy:");
 scanf("%d",&x.d);
 scanf("%d",&x.m);
 scanf("%d",&x.y);
 printf("\n date in the format dd.mm.yy=%d.%d.%d",x.d,x.m,x.y);
 printf("\n date in the format dd.monthname.yy=%d.%s.%d",x.d,month[x.m-1],x.y);
}