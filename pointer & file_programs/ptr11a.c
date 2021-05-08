# include<stdio.h>
# include<stdlib.h>
void main()
{
    char str[100];;
    FILE*fptr;
    fptr=fopen("ptr11a.txt","w");
if(fptr==NULL)
{
    printf("error");
    exit(1);
}
printf("enter a string:");
fgets(str,sizeof(str),stdin);
fprintf(fptr,"%s",str);
fclose(fptr);
return 0;
}