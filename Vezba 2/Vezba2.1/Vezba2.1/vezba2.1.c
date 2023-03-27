#include <stdio.h>
void main()
{
	int i = 1, j, n, p, bp = 0;
	printf("Unesite broj n: ");
	scanf("%d", &n);
	while( bp < n )
	{
		
		p = 1;
		for (j = 2; j < i; j++)
		{
			if ((i % j) == 0)
				p = 0;
		}
		if (p == 1)
		{
			printf("%d\t", i);
			bp++;
		}
		i++;
	}
}