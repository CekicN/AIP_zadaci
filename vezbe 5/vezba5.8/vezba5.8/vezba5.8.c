#include<stdio.h>
int main()
{
	int i, j, n, A[50][50];

	printf("Unesite dimenziju kvadratne matrice: ");
	scanf("%d", &n);

	for ( i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &A[i][j]);
		}
	}


}