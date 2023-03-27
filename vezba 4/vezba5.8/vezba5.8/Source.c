#include<stdio.h>

int suma(int a[20][20], int n)
{
	int i, j,s=0;

	for ( i = 0; i < n; i++)
	{
		for ( j = 0; j < n; j++)
		{
			if ((i+j) >= n)
			{
				s += a[i][j];
			}
		}
	}
	return s;
}
void main()
{
	int a[20][20], b[20][20], n, i, j,s1=0,s2=0;

	printf("Unesite dimenziju matrica n= ");
	scanf("%d", &n);

	printf("Unesite elemente matrice a...\n");
	for ( i = 0; i < n; i++)
	{
		for ( j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	printf("Unesite elemente matrice b...\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}

	s1 = suma(a,n);
	s2 = suma(b,n);

	if (s1>s2)
	{
		for ( i = 0; i < n; i++)
		{
			for ( j = 0; j < n; j++)
			{
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
	}
	else if (s1<s2)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				printf("%d ", b[i][j]);
			}
			printf("\n");
		}
	}
}