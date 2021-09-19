#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    scanf("%d", &n);
    int a[n];
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    int temp;

    int k;
    for(i=0;i<n-1;i++)
    {
         for(k=i+1;k<n;k++)
         {
             if(a[k]<a[i])
             {
                 temp=a[i];
                 a[i]=a[k];
                 a[k]=temp;
             }
         }
    }

    for(i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
