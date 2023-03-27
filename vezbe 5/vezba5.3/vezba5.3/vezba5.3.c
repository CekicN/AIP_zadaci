#include<stdio.h>

int main()
{
	int matrica[50][50], i, j, n, m,pom;

	printf("Unesite dimenziju matrice: ");
	scanf("%d%d", &n, &m);
	printf("------------------------------------\n");
	for ( i = 0; i < n; i++)
	{	
		for (j = 0; j < m; j++)
		{
			scanf("%d", &matrica[i][j]);
		}

	}

	for ( i = 0; i < n; i++)
	{
		pom = matrica[i][m - 1];
		for ( j = m-1; j > 0; j--)
		{
			matrica[i][j] = matrica[i][j - 1];

		}
		matrica[i][0] = pom;
	}

	for ( i = 0; i < m; i++)
	{
		pom = matrica[n-1][i];
		for (j = n-1; j >0; j--)
		{
			
			matrica[j][i] = matrica[j-1][i];

		}
		matrica[0][i] = pom;
	}

	for ( i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("%d", matrica[i][j]);
		}
		printf("\n");
	}
}