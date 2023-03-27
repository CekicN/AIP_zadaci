#include <stdio.h>
 
int main()
{

	int n,j;
	double long f, b;

	printf("Uneti parametar n: ");
	scanf("%d", &n);

	for (int i = 2; i < n; i++)
	{
		f = 1;
		b = 1;
		for (int j = 2; j <= i; j++)
		{
			f *= j;
		}

		for ( j = 2; j <= i*i; j++)
		{
			b *= j;
		}
		printf("%.0lf\t", f);
		printf("%.0lf\n", b);


	}
    return 0;
}