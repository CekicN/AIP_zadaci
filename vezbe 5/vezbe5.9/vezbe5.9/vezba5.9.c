#include<stdio.h>

int main()
{
	int i, j,z=100000,k, s=0,n, m, A[50][50];

	printf("Unesite dimenziju matrice: ");
	scanf("%d%d", &n, &m);

	for ( i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &A[i][j]);
		}
	}

	for ( j = 0; j < m; j++)
	{
		for (i = 0; i < n; i++)
		{
			s += A[i][j];
		}
		if (s<z)
		{
			z = s;
			k = j;
		}
		s = 0;
	}
	printf("\n\n");
	for ( i = 0; i < n; i++)
	{
		printf("%d\n", A[i][k]);
	}
}