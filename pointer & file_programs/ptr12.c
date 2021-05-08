# include<stdio.h>
# include<stdlib.h>
void main()
{
    FILE*fptr;
    char fname[25];
    char ch;
    int l=0,w=1,c=0;
    printf("enter the file name:");
    scanf("%[^\n]s",fname);
    fptr=fopen(fname,"r");
    if(fptr==NULL)
    {
        printf("error");
        exit(0);
    }
    ch=getc(fptr);
    while(ch!=EOF)
    {
        if(ch=='\n')
        l++;
        if(ch==' ')
        w++;
        c++;
        ch=getc(fptr);
    }
    fclose(fptr);
    printf("Number of lines =%d\nNumber of words=%d\nNumber of characters=%d",l+1,w+l,c);
    printf("\nresults are written to result.txt file");
    fptr=fopen("result.txt","w");
    fprintf(fptr,"Number of lines =%d\nNumber of words=%d\nNumber of characters=%d",l+1,w+l,c);
    fclose(fptr);

}