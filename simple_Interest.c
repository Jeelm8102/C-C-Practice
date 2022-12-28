#include <stdio.h>
#include <stdlib.h>
//SIMPLE_INTEREST
int main()
{
    int p,n;
    float r,i;
    printf("Enter Principal Amount\n");
    scanf("%d",&p);
    printf("Give rate of Interest and Number of Years\n");
    scanf("%f %d", &r,&n);
    i=(p*r*n)/100;
    printf("Interest of amount = %f\n",i);
    return 0;
    
}