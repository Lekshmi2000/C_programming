 # include<stdio.h>
 # include<string.h>
 # include<stdlib.h>
 union address
 {
     char name[50];
     char housename[50];
     char cityname[50];
     char state[20];
     char pincode[15];
 };
 void main()
{
    char temp1[50],temp2[50],temp3[50],temp4[20],temp5[15];
    union address n;
    printf("enter name:");
    gets(n.name);
    strcpy(temp1,n.name);
    printf("\nenter house name:");
    gets(n.housename);
    strcpy(temp2,n.housename);
    printf("\nenter city name:");
    gets(n.cityname);
    strcpy(temp3,n.cityname);
    printf("\nenter state:");
    gets(n.state);
    strcpy(temp4,n.state);
    printf("\nenter pincode:");
    gets(n.pincode);
    strcpy(temp5,n.pincode);
    printf("\t    ADDRESS\n\n");
    printf("\t %s\n",temp1);
    printf("\t %s\n",temp2);
    printf("\t %s\n",temp3);
    printf("\t %s\n",temp4);
    printf("\t %s\n",temp5);

}