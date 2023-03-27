#include<stdio.h>

int main()
{
	int nizA[100],n=0, s=0, i, v;
	float p;
	printf("Uneti vrednost za zbir cifara v: ");
	scanf("%d", &v);

	do
	{
		scanf("%d", &nizA[n]);

		s += nizA[n];
		n++;
	} while (s < v);
	p = (float)s / n;
	printf("Broj unetih elemenata je: %d\n", n);
	printf("Elementi unetog niza su: ");

	for ( i = 0; i < n; i++)
	{
		printf("%d ", nizA[i]);
	}
	printf("\nZbir elemenata niza je: %d", s);
	printf("\nProsecna vrednost elemenata niz je: %f", p);
}