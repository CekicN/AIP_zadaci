#include<stdio.h>


int main()
{
	int matrica[50][50], i, j, n, m,pom;

	printf("Unesi dimenziju matrice: ");
	scanf("%d%d", &n, &m);

	for ( i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &matrica[i][j]);
		}
	}

	for ( i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			for (int z = j+1; z < m; z++)
			{
				if (matrica[i][j] > matrica[i][z])
				{
					pom = matrica[i][z];
					matrica[i][z] = matrica[i][j];
					matrica[i][j] = pom;
				}
			}
			
		}
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