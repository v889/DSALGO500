#include <stdio.h>

int main()
{
    int n,i,max,min,a[100];
    printf("enter lenght of array:");
    scanf("%d",&n);
    printf("element of array:\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[1];
    max=a[1];
    for(i=1;i<=n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("max %d\n",max);
    printf("min :%d",min);
}
