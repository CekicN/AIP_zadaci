#include<stdio.h>

int main()
{
	int niza[100], nizb[100],nizc[100], n, m, i,pom;

	printf("Unesite broj elemenata niza A: ");
	scanf("%d", &n);

	for ( i = 0; i < n; i++)
	{
		printf("Unesite vrednost elementa: ");
		scanf("%d", &niza[i]);
	}

	printf("Unesite broj elemenata niza B: ");
	scanf("%d", &m);

	for (i = 0; i < m; i++)
	{
		printf("Unesite vrednost elementa: ");
		scanf("%d", &nizb[i]);
	}
	
	for ( i = 0; i < n; i++)
	{	
			nizc[i] = niza[i];
	}
	for ( i = 0; i < m; i++)
	{
		nizc[i+n] = nizb[i];
	}

	for ( i = 0; i < n+m-1; i++)
	{
		for (int j = i+1; j < n+m; j++)
		{

			if (nizc[i] > nizc[j])
			{
				pom = nizc[i];
				nizc[i] = nizc[j];
				nizc[j] = pom;
			}
		}
	}
	for ( i = 0; i < n+m; i++)
	{
		printf("%d ", nizc[i]);
	}
}