#include <stdio.h>
void bubblesort(int [], int);
int main(void)
{
    int a[50],n,i;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    printf("Enter the elements of an array :");
    for(i=0;i<n;i++)
    {
        printf("\na[%d]:",i);
        scanf("%d",&a[i]);
    }

    printf("\nBefore sorting the array : \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    bubblesort(a,n);
    printf("\nAfter sorting the array : \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

void bubblesort(int a[], int n)
{
    int x,i,j,flag;
    for(i=0;i<n-1;i++)
    {
        flag=0;
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                x=a[j+1];
                a[j+1]=a[j];
                a[j]=x;
                flag=1;           
            }
            if(flag==0)
            break;
        }
    }
}