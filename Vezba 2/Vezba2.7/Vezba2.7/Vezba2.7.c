#include<stdio.h>
#include<math.h>

void main()
{
	int n,y;
	printf("Unesite vrednost N: ");
	scanf("%d", &n);

	for (int x = -n; x <= n; x++)
	{
		if (x < 0)
			y = x * x;
		else if (x < 1)
			y = x;
		else
			y = sqrt(x);
		printf("%d\n", y);
	}
	
}