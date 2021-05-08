# include <stdio.h>
# include <stdlib.h>
void main()
{
    FILE*fptr;
    char str[100];
    fptr=fopen("ptr11b.txt","r");
    if(fptr==NULL)
    {
        printf("error");
        exit(1);
    }
    while(fgets(str,sizeof(str),fptr)!=NULL)
    {
        printf("%s",str);
    }
    fclose(fptr);
}