#include<stdio.h>
int main()
{
	int niz[100], n, i, m, x, z;

	printf("Unesite broj elemenata niza: ");
	scanf("%d", &n);

	for ( i = 0; i < n; i++)
	{
		printf("Unesi element: ");
		scanf("%d", &niz[i]);
	}


	printf("Koliko elemanata oces da umetnes?");
	scanf("%d", &m);


	for ( i = 1; i <= m; i++)
	{
		printf("\nUnesite poziciju na koju ce da se ubaci element: ");
		scanf("%d", &z);
		printf("Unesite vrednost elementa: ");
		scanf("%d", &x);
		if (z==n)
		{
			niz[z] = x;
			n++;
		}
		else {
			for (int j = n - 1; j >= z; j--)
			{
				niz[j + 1] = niz[j];

			}
			niz[z] = x;
			n++;
		}
		for (int a = 0; a < n; a++)
		{
			printf("%d ", niz[a]);
		}
	}
	
}