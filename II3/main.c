#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k,i,j;
    printf("Enter k=");
    scanf("%d", &k);

    for(i=1;i<=k;i++)
        for(j=1;j<=i;j++)
            printf("%d, ", j);
}
