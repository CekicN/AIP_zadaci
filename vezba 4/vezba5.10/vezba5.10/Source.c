#include<stdio.h>

int transponovano(int a[20][20], int n)
{
	int i, j;
	for ( i = 0; i < n; i++)
	{
		for ( j = 0; j < n; j++)
		{
			a[j][i];

		}
	}
}
void main()
{
	int n, a[20][20],i, j;

	printf("Unesite n= ");
	scanf("%d", &n);

	for ( i = 0; i < n; i++)
	{
		for ( j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	transponovano(a, n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d ", &a[i][j]);
		}
		printf("\n");
	}


}