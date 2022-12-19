#include <stdio.h>
//PRINT_N_NUMBERS
int main()
{
    int n;
    int i=1;
    printf("Give a Number");
    scanf("%d",&n);
    loop:
       if(i<=n)
       {
           printf("number=%d\n",i);
           i++;
           goto loop;
       }
return 0;
}