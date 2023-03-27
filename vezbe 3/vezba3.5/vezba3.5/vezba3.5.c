#include<stdio.h>

int main()
{
	int niz[100], n, k, i,pom;

	printf("Unesite broj elemenata niza: ");
	scanf("%d", &n);

	for ( i = 0; i < n; i++)
	{
		scanf("%d", &niz[i]);
	}

	printf("Unesite za koliko mesta  ce se izvrsiti pomeranje: ");
	scanf("%d", &k);

	printf("Niz pre pomeranja: ");
	for (i = 0; i < n; i++)
		printf("%d ", niz[i]);

	for ( i = 0; i < k; i++)
	{
		pom = niz[0];
		for (int j = 0; j < n; j++)
		{
			niz[j] = niz[j + 1];
		}
		niz[n - 1] = pom;
	}
	
	
	printf("\nNiz posle pomeranja: ");
	for ( i = 0; i < n; i++)
	{
		printf("%d ", niz[i]);
	}
}