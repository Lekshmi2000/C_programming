#include<stdio.h>
int sum(int *p,int x);
void main()
{
    int i,n,ar[100],fun;
    printf("enter the no.of elements:\n");
    scanf("%d",&n);
    printf("enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    fun=sum(ar,n);
    printf("\nsum of elements:%d",fun);   
}
int sum(int *p,int x)
{
    int i,sum=0;
    for(i=0;i<x;i++)
    {
        sum=sum+*p;
        p++;
    }
    return(sum);
}