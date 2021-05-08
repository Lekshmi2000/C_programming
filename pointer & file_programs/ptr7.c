# include<stdio.h>
# include<string.h>
# include<stdlib.h>
void main()
{
    int n,n1,j,i;
    char *s[50],temp[20];
    printf("enter the no.of strings:");
    scanf("%d",&n);
    printf("enter the max.length of string:");
    scanf("%d",&n1);
    printf("enter the names:");
    for(i=0;i<n;i++)
    {
        s[i]=(char*)malloc(n1*sizeof(char));
        scanf("%s",s[i]);   
    }
    for(i=0;i<n;i++)
    {
      for(j=i+1;j<n;j++)
      {
          if(strcmp(s[i],s[j])>0)
           {
               strcpy(temp,s[i]);
               strcpy(s[i],s[j]);
               strcpy(s[j],temp);
               temp[0]='\0';
           }
      }   
    }
    printf("sorted list is:\n");
    for(i=0;i<n;i++)
    {
        printf("%s\n",s[i]);
    }

}