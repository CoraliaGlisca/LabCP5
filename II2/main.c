#include <stdio.h>
#include<math.h>

int main()
{
    float a[100], b[100];
    int n,i;
    int k=0;

    printf("Enter the number of elements:");
    scanf("%d", &n);

    for(i=0;i<n;i++)
    {
        printf("\nElements of a[%d]:", i+1);
        scanf("%d", &a[i]);
    }

    for(i=0;i<=n;i++)
    {
        b[k]=a[i];
        b[k+1]=(a[i]+a[i+1])/2;
        k+=2;
    }

    for(i=0;i<=k-2;i++)
        printf("%2.1f ", a[i]);
}
