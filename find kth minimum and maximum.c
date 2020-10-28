#include<stdio.h>
int main()
{
    int a[50],i,j,n,temp,k;
    printf("enter a length of array:");
    scanf("%d",&n);
    printf("enter kth term:");
    scanf("%d",&k);
    printf("enter a element of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    int b=n-k;
    printf("\n%dth maximum element %d",k,a[b]);
    printf("\n%dth minimum element %d",k,a[k-1]);
}
