#include <stdio.h>

int main()
{
	int niz[50], n, i;

	
	scanf("%d", &n);
	for ( i = 0; i < n; i++)
	{
		scanf("%d", &niz[i]);
	}

	for ( i = 0; i < n; i++)
	{
		if (niz[i] % 3 == 2)
		{
			
			for (int j = n - 1; j >= i; j--)
			{
				niz[j + 1] = niz[j];

			}
			n++;
			niz[i+1] = 0;
		}
		

	}
	for ( i = 0; i < n; i++)
	{
		printf("%d\n", niz[i]);
	}
}