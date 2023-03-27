#include <stdio.h>

int main()
{
	int niz[#], i,n,pom;

	printf("Unesite broj elemenata niza: ");
	scanf("%d", &n);

	printf("Unesite elemente:\n");

	for ( i = 0; i < n; i++)
	{
		scanf("%d", &niz[i]);
	}
	for (i = 0; i < n; i++)
	{
		printf("%d ", niz[i]);
	}
	for ( i = 0; i < n-1; i++)
	{
		
		for (int j = i+1; j < n; j++)
		{
			if (niz[i] < niz[j])
			{
				pom = niz[i];
				niz[i] = niz[j];
				niz[j] = pom;
			}
		}
		
		
	}
	printf("\nSortiran niz:\n");
	for ( i = 0; i < n; i++)
	{
		printf("%d ", niz[i]);
	}
}