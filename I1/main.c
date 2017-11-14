#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],n,i;

    printf("Enter n:");
    scanf("%d", &n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter the elements of a[%d]:\n", i+1);
        scanf("%d", &a[i]);
    }

    for(i=1;i<n-1;i++)
    {
        if((a[i-1]+a[i+1])/2==a[i])
            printf("%d", a[i]);
    }
    return 0;
}
