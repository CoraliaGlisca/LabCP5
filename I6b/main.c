#include <stdio.h>

 int inmultire(int a[10][10], int b[10][10], int inm[10][10], int r1, int c1, int r2, int c2);
 int display(int inm[10][10], int r1, int c2);

int main()
{
    int a[10][10], b[10][10], inm[10][10], r1, c1, r2, c2, i, j, k;

    printf("Enter rows and column for first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and column for second matrix: ");
    scanf("%d %d",&r2, &c2);

    while (c1 != r2)
    {
        printf("Column of first matrix not equal to row of second!\n");

        printf("Enter rows and column for first matrix: ");
        scanf("%d %d", &r1, &c1);

        printf("Enter rows and column for second matrix: ");
        scanf("%d %d",&r2, &c2);
    }

    printf("\nEnter elements of matrix a:\n");
    for(i=0; i<r1; ++i)
        for(j=0; j<c1; ++j)
        {
            printf("Enter elements a[%d][%d]: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }

    printf("\nEnter elements of matrix b:\n");
    for(i=0; i<r2; ++i)
        for(j=0; j<c2; ++j)
        {
            printf("Enter elements b[%d][%d]: ", i+1, j+1);
            scanf("%d",&b[i][j]);
        }

    inmultire(a, b, inm, r1, c1, r2, c2);
    display(inm, r1, c2);
}
    int inmultire(int a[10][10], int b[10][10], int inm[10][10], int r1, int c1, int r2, int c2)
{
	int i, j, k;

	for(i = 0; i < r1; ++i)
	{
		for(j = 0; j < c2; ++j)
		{
			inm[i][j] = 0;
		}
	}

	for(i = 0; i < r1; ++i)
	{
		for(j = 0; j < c2; ++j)
		{
			for(k=0; k<c1; ++k)
			{
				inm[i][j] += a[i][k]*b[k][j];
			}
		}
	}
}

int display(int inm[10][10], int r1, int c2)
{
	int i, j;
	printf("\nThe resulted matrix is:\n");

	for(i = 0; i < r1; ++i)
	{
		for(j = 0; j < c2; ++j)
		{
			printf("%d ", inm[i][j]);

			if(j == c2 - 1)
				printf("\n\n");
		}
	}
}
