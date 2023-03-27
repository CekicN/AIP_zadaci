#include<stdio.h>

int main()
{
	int i,pom, j,n,m, matrica[50][50] = {
								{7,6,3},
								{1,4,9},
								{8,2,5}
								};

	n = 3; m = 3;

	for ( j = 0; j < m; j++)
	{
		for (i = 0; i < n; i++)
		{
			for (int z = i+1; z < n; z++)
			{
				if (matrica[i][j]<matrica[z][j])
				{
					pom = matrica[i][j];
					matrica[i][j] = matrica[z][j];
					matrica[z][j] = pom;
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