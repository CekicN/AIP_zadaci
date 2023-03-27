#include<stdio.h>

int main()
{
	int s=0,p=1,i,j,matrica[50][50] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	int n = 3;
	for ( j = 0; j < n; j++)
	{
		for ( i = 0; i < n; i++)
		{
			int z = i + j;
			if (i > j)
			{
				s += matrica[i][j];
			}
			if (z > n-1)
				p *= matrica[i][j];
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++) {
			printf("%d", matrica[i][j]);
		}
		printf("\n");
	}
	
	printf("s=%d , p=%d", s, p);
}