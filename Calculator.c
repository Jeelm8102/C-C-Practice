#include <stdio.h>
#include <conio.h>

int main()
{
    int Num1,Num2,Result;
    char Operator;
    printf("Enter number 1=");
    scanf("%d",&Num1);
    printf("Enter number 2=");
    scanf("%d",&Num2);
    printf("Enter operator");
    //_flushall();- This function flushes all the buffer assoc. with i/o stream.
    scanf(" %c",&Operator);
    switch(Operator)
    {
    case '+' :
        Result=Num1+Num2;
        printf("Result of entered value: \n""%d + %d=%d", Num1,Num2,Result);
        break;
    case '-' :
        Result=Num1-Num2;
        printf("Result of entered value: \n""%d - %d=%d", Num1,Num2,Result);
        break;
    case '*' :
        Result=Num1*Num2;
        printf("Result of entered value: \n""%d * %d=%d", Num1,Num2,Result);
        break;
    case '/' :
        //Result= Num1/Num2;
        if(Num2==0)
        {
            printf("Enter Valid Value");
        }   
        else
        {
            Result= Num1/Num2;
            printf("Result of entered value: \n""%d / %d=%d", Num1,Num2,Result);
        }
        
        break; 
    default : 
        printf("Enter valid Operator.");           
    }
    getch();
    return 0;
}
