#include<stdio.h>


int main()
{
	int n, niz[100], i,brojac=1;
	printf("Unesite broj elemenata niza: ");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		printf("Unesite element: ");
		scanf("%d", &niz[i]);
	}
	for (i = 0; i < n-1; i++)
		if (niz[i + 1] >= niz[i])
		{
			brojac++;
		}
		else
			brojac = 1;
	
	printf("%d", brojac);
}