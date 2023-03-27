#include<stdio.h>

int minimax(int a[], int* amin, int* amax,int n)
{
	int min = 0;
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[min]>a[i])
		{
			min = i;
		}
		if (a[max]<a[i])
		{
			max = i;
		}
	}

	*amin = min;
	*amax = max;
}
void main() 
{
	int n, a[20], min, max;
	printf("Unesite broj elemenata niza: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		printf("Unesite element... ");
		scanf("%d", &a[i]);
	}

	minimax(a, &min, &max, n);

	printf("Minimalni element je %d, a maksimalni element je %d", a[min], a[max]);
}