#include<stdio.h>
struct dsum
{
    float dist1;
    float dist2;
    float distsum;

};
void main()
{
    struct dsum x;
    printf("enter first euclidean distance:");
    scanf("%f",&x.dist1);
    printf("enter second euclidean distance:");
    scanf("%f",&x.dist2);
    x.distsum=x.dist1+x.dist2;
    printf("sum of distances:%f",x.distsum);
}