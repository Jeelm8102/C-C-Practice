#include <stdio.h>
//GRADES
int main()
{
    char mark;
    printf("Enter your marks\n");
    scanf("%d",&mark,&mark);
    printf("your mark is %d\n",mark);
    if(mark>80 && mark<100)
    {
        printf("Your grade is Distinction %d", mark);
    }
    else if (mark>60 && mark<=79)
    {
        printf("Your grade is First Class %d", mark);
    }
    else if (mark>40 && mark<=59)
    {
        printf("Your grade is Second Class %d", mark);
    }
    else
    {
        printf("You are FAIL %d", mark); 
    }
    return 0;
    


}
