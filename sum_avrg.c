#include<stdio.h>
//SUM AND AVERAGE
int main()
{
    int n,i,sum=0;
    printf("Enter the number of terms");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int temp;
        printf("Enter %dth number",i);
        scanf("%d",&temp);
        sum+=temp;
    }
    printf("sum:%d and Average: %d",sum,sum/n);
     return 0;   
}