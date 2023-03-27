#include<stdio.h>

int main()
{
	int niz[100], n, i, m, z;

	printf("Unesite broj elemenata niza: ");
	scanf("%d", &n);

	for ( i = 0; i < n; i++)
	{
		scanf("%d", &niz[i]);
	}

	printf("Unesite broj elemenata koje treba obrisati: ");
	scanf("%d", &m);

	for ( i = 1; i <= m; i++)
	{
		printf("\nUnesite poziciju sa koje treba obrisati element: ");
		scanf("%d", &z);
		if (z==0)
		{
			niz[z] = niz[z + 1];
		}
		else 
		{
			for (int j = z; j < n; j++)
			{
				niz[j] = niz[j + 1];
			}

			n--;
		}
		for (int b = 0; b < n; b++)
		{
			printf("%d ", niz[b]);
		}
	}
	
}