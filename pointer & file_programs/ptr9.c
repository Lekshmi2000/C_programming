#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],c[10][10];
    int *p1,*p2,*p3;
    int m,n,p,q,i,j,e;
    p1=a;
    p2=b;
    p3=c;
    printf("enter the size of first matrix:");
    scanf("%d%d",&m,&n);
    printf("enter the size of next matrix:");
    scanf("%d%d",&p,&q);
    if(n==p)
    {  
      printf("enter the elements of first matrix:");
      for(i=0;i<m;i++)
      {
        for(j=0;j<n;j++)
        {
            scanf("%d",(p1+i*10+j));
        }
      }
      printf("enter the elements of second matrix:");
      for(i=0;i<p;i++)
      {
        for(j=0;j<q;j++)
        {
            scanf("%d",(p2+i*10+j));
        }
      }
      printf("\t\ton multiplication");
      printf("\n*****************************************************");
    
          for(i=0;i<m;i++)
          {
              for(j=0;j<q;j++)
              {
                 *(p3+i*10+j)=0;
              }
          }   
          for(i=0;i<m;i++)
           {
                for(j=0;j<q;j++)
                  {
                     for(e=0;e<n;e++)
                      {
                         *(p3+i*10+j)+=*(p1+i*10+e) * *(p2+e*10+j);
                      }
                  }
           }
         printf("\nproduct of the matrices=\n\n");
          for(i=0;i<m;i++)
          {
              for(j=0;j<q;j++)
              {
                printf("%d ",*(p3+i*10+j));
              }
              printf("\n");  
          }         
    } 
    else
    printf("multiplication not possible"); 

}