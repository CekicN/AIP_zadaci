#include<stdio.h>

int main()
{
	int i, sum = 0,j, n = 3 ,At[50][50],Ar[50][50], A[50][50] =
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	
	for ( i = 0; i < n; i++)
	{
		for ( j = 0; j < n; j++)
		{
			At[j][i] = A[i][j];
		}
	}

	for ( i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			for ( int z = 0; z < n; z++)
			{
				sum += A[i][z] * At[z][j];
			}
			Ar[i][j] = sum;
			sum = 0;
		}
	}
	for ( i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("\t%d", Ar[i][j]);
		}
		printf("\n");
	}
}