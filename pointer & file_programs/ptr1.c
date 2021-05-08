# include<stdio.h>
int add(int *a,int *b,int *add);
int swap(int *a,int *b);
void main()
{
    int x,y,z;
    printf("enter two numbers:");
    scanf("%d%d",&x,&y);
    add(&x,&y,&z);
    printf("addition=%d\n",z);
    printf("before swapping\n");
    printf("a=%d\nb=%d",x,y);
    swap(&x,&y);
}
int add(int *a,int *b,int *add)
{
    *add=*a+*b;
    return(*add);
}
int swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("\nafter swappping:");
    printf("a=%d\n",*a);
    printf("b=%d",*b);

}