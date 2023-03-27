#include<stdio.h>

int main()
{
	int  n,i, brojac=0;
	float niz[100], s = 0;
	printf("Unesite broj elemenata niza: ");
	scanf("%d", &n);
	printf("Unesite elemente niza:\n");
	for (i = 0; i < n; i++)
	{
		scanf("%f", &niz[i]);
	}

	for ( i = 0; i < n; i++)
		s += niz[i];

	printf("prosecna vrednost niza je: %.1f\n", s / n);

	for ( i = 0; i < n; i++)
	{
		if (niz[i] < (s / n))
		{
			printf("%.0f ", niz[i]);
			brojac++;
		}
	}
	printf("\nBroj elemenata koji ispunjavaju uslov je: %d", brojac);
}