#include<stdio.h>

int main()
{
	int niz[100], m, n, i, z, j,t;

	printf("Uneti broj elemenata niza: ");
	scanf("%d", &n);

	for ( i = 0; i < n; i++)
	{
		scanf("%d", &niz[i]);
	}

	printf("Unesite koliko brojeva zelite da unesete: ");
	scanf("%d", &m);
	for ( i = 0; i < m; i++)
	{
		printf("Unesite broj: ");
		scanf("%d", &z);
		for ( j = 0; j < n; j++)
		{
			if (niz[j] < z)
			{
				t = j;
				for ( int a = n-1; a <= t;  a++)
				{
					niz[a+1] = niz[a];
				}
				niz[t] = z;	
			}
		}
		n++;
	}

	for ( i = 0; i < n; i++)
	{
		printf("%d", niz[i]);
	}
}