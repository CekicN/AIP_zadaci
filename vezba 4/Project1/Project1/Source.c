#include<stdio.h>

int sumiraj(int a[], int n, int d)
{
	int i,s=0;
	for ( i = 0; i < n; i++)
	{
		a[i] += d;
	}

	for ( i = 0; i < n; i++)
	{
		s += a[i];
	}
	return s;
}

int main()
{
	int a[20], n, d, i;

	scanf("%d", &n);
	scanf("%d", &d);

	for ( i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("%d", sumiraj(a, n, d));
}