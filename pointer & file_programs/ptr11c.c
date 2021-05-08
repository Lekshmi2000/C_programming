# include<stdio.h>
# include<stdlib.h>
void main()
{
    FILE*fptr;
    char str[100];
    fptr=fopen("ptr11c.txt","a");
    if(fptr==NULL)
    {
        printf("error");
        exit(1);
    }
    printf("****ENTER THE CONTENTS TO APPEND****\n");
    while(1) 
    
    {
        fgets(str,sizeof(str),stdin);
        if(strcmp(str,"end\n")==0)break;
        fputs(str,fptr);
    
    }  
    fclose(fptr);
    fptr=fopen("ptr11c.txt","r");
    printf("****FILE CONTENTS AFTER APPENDING****\n");
    while(fgets(str,sizeof(str),fptr)!=NULL)
    {
        printf("%s",str);
    }   
    fclose(fptr); 
}
