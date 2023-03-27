#include<stdio.h>

int main()
{
	int i,z, j,s=0, n=3, P[50][50],A[50][50],
		B[50][50] = {
			{1,2,3},
			{4,5,6},
			{7,8,9}
	}
		,
		C[50][50] = {
		{2,4,6},
		{8,10,12},
		{14,16,18}
	},
		D[50][50] = {
			{1,3,5},
			{7,9,11},
			{13,15,17}
	};

	for ( i = 0; i < n; i++)
	{
		for ( j = 0; j < n; j++)
		{
			for (z = 0; z < n; z++)
			{
				s += B[i][z] * C[z][j];
			}
			P[i][j] = s;
			s = 0;
		}
	}
	for ( i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			A[i][j] = P[i][j] + D[i][j];
		}
	}
	for ( i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("\t%d", A[i][j]);
		}
		printf("\n");
	}
}