# include<stdio.h>
void main()
{
    int i,n,x,ar[100],count=0,*p;
    printf("enter the no.of elements:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }    
        p=ar;
        printf("elements of the array are:");
        for(i=0;i<n;i++)
        {
            printf("%d ",*p);
            p++;
        }   
        printf("\nenter element the element to be checked:");
        scanf("%d",&x);
        p=ar;
        for(i=0;i<n;i++)
        {
            if(*p==x)
            {
             count=count+1;
            }
            p++;
        }
        printf("\nnumber of occurances of %d is %d",x,count);
}