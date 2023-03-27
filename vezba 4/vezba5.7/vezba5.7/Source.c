#include<stdio.h>
int ispisimatricu(int a[20][20] , int n , int m)
{
	int i, j;
	for ( i = 0; i < n; i++)
	{
		printf("| ");
		for (j = 0; j < m; j++)
		{
			printf("%d", a[i][j]);
		}
		printf(" |\n");
	}
	return;
}
void main()
{
	int a[20][20], i, j, n, m;

	printf("Unesite dimenziju matrice: ");
	scanf("%dx%d", &n, &m);

	for (i = 0; i < n; i++)
	{
		for ( j = 0; j < m; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	ispisimatricu(a, n, m);

}