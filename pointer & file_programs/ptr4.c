# include<stdio.h>
void main()
{
    int a,b,*p,*q,temp;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("before swapping:\n");
    printf("a=%d,b=%d\n",a,b);
    p=&a;
    q=&b;
    temp=*p;
    *p=*q;
    *q=temp;
    printf("\nafter swapping:");
    printf("\na=%d,b=%d",*p,*q);
}