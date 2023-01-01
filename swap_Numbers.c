#include <stdio.h>

int main()
{
    int Num1,Num2,Num3;
    printf("Value of Num1 is ");
    scanf("%d",&Num1);
    printf("Value of Num2 is ");
    scanf("%d",&Num2);

    //Num3=Num1;
    //Num1=Num2;
    //Num2=Num3;

    Num1=Num1+Num2;
    Num2=Num1-Num2;
    Num1=Num1-Num2;

    printf("Value of Num1 is %d\n",Num1);
    printf("Value of Num2 is %d\n",Num2);


    if(printf("Kartik"))

    return 0;
}
