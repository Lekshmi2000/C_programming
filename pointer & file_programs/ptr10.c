# include<stdio.h>
struct bill
{
    float previous;
    float present;
    float amount;
    char address[100]; 
};
void main()
{
    struct bill x;
    struct bill *ptr;
    ptr=&x;
    printf("cost per unit=5.9Rs\n");
    printf("enter address:\n");
    scanf("%[^\n]s",&ptr->address);
    printf("enter units consumed prevoiusly:");
    scanf("%f",&ptr->previous);
    printf("\nunits consumed presently:");
    scanf("%f",&ptr->present);
    ptr->amount=(ptr->previous-ptr->present)*5.9;
    printf("\n\t***BILL AMOUNT***\n");
    printf("\nADDRESS=%s",ptr->address);
    printf("\namount=%f",ptr->amount);
}