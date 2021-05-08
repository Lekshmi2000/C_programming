#include<stdio.h>
#include<math.h>
#include<conio.h>
float fun(float*sum,float*mean,float*variance,float*std)
{
 int i,n;
 float ar[100],var=0;
 printf("enter the no:of elements:");
 scanf("%d",&n);
 printf("enter the elements:");
  for(i=0;i<n;i++)
  {
   scanf("%f",&ar[i]);
  }
    for(i=0;i<n;i++)
    {
      *sum=*sum+ar[i];
    }
      *mean=*sum/n;
      for(i=0;i<n;i++)
      {
	var+=(ar[i]-*mean)*(ar[i]-*mean);
      }
	*variance=var/n;
	*std=sqrt(*variance);
  printf("sum=%f",*sum);
  printf("mean=%f",*mean);
  printf("variance=%f",*variance);
  printf("standard deviation=%f",*std);
}
void main()
{
  float sum=0,mean=0, variance=0, std=0;
  clrscr();
  fun(&sum,&mean,&variance,&std);
  getch();
}


