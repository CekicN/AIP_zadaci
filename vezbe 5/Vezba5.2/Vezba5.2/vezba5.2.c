#include<stdio.h>

int main()
{
	int matrica[50][50], i, j, n,m,l,s,pom;

	printf("Unesite dimenziju matrice(NxM): ");
	scanf("%dx%d", &n, &m);

	for ( i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &matrica[i][j]);
		}
	}

	printf("Unesite koje vrste zelite da zamenite: ");
	scanf("%d %d", &l, &s);

	for ( i = 0; i < m; i++)
	{
		if (matrica[l-1][i] < 0)
			matrica[l-1][i] = 0;

		if (matrica[s-1][i] < 0)
			matrica[s-1][i] = 0;

		pom = matrica[l-1][i];
		matrica[l-1][i] = matrica[s-1][i];
		matrica[s-1][i] = pom;
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