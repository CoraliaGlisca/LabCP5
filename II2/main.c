#include <stdio.h>
#include<stdlib.h>

int n,j,k,i;
float a[100],t;
int main()
{
     printf("Enter the number of elements:");
     scanf("%d", &n);

    for(i=0;i<n;i++)
        {
            printf("\nElements of a[%d]:", i+1);
            scanf("%f", &a[i]);
        }
    for(j=1;j<n;j+=2)
    {
        t=a[j];
        a[j]=(t+a[j-1])/2;
        n++;
        for(k=n-1;k>j+1;k--)
        {
            a[k]=a[k-1];
        }
        a[j+1]=t;
    }
    for(i=0;i<n;i++)
         printf("%2.1f ", a[i]);
    return 0;
}
