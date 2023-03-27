#include<stdio.h>

int sortiranje(int a[],int smer,int n)
{
	int pom,i,j;
	if (smer==1)
	{
		for (i = 0; i < n; i++)
		{
			for (j = i+1; j < n; j++)
			{
				if (a[i] > a[j])
				{
					pom = a[i];
					a[i] = a[j];
					a[j] = pom;
				}
			}
		}
	}
	if (smer == 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = i+1; j < n; j++)
			{
				if (a[i] < a[j])
				{
					pom = a[i];
					a[i] = a[j];
					a[j] = pom;
				}
			}
		}
	}
}
void main()
{
	int a[20], n,smer;
	printf("Unesite broj elemenata niza: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		printf("Unesite element...");
		scanf("%d", &a[i]);
	}

	printf("Unesite 1 za rastuci, a 0 za opadajuci redosled: ");
	scanf("%d", &smer);
	printf("Niz pre uredjenja:\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	}
	
	sortiranje(a, smer,n);
	printf("\n\n");
	printf("Niz kad sortira u neopadajuci redosled:\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	}
	
	
}