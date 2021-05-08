# include<stdio.h>
void main()
{
    int ar[100],i,j,n,temp,*p;
    printf("enter the no.of elements:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
      scanf("%d",&ar[i]);
    }
    p=ar;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(p+i)>*(p+j))
            {
              temp=*(p+i);
              *(p+i)=*(p+j);
              *(p+j)=temp;
            }  

        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(p+i));
    }
}