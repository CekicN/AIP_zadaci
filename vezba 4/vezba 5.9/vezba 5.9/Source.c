#include<stdio.h>
#include<math.h>
int faktoriel(int n)
{
	int s = 1;
	for (int i = 1; i <= n; i++)
	{
		s *= i;
	}
	return s;
}
float exp(float x, float e)
{
	int n = 0;
	float s = 0, ex = 0, ne;
	do
	{
		ne = ex;
		ex = pow(x, n) / faktoriel(n);
		s += ex;
		n++;
	} while (fabsf(ne-ex)>e);
	return s;
}
void main()
{
	float e, x;

	printf("Unesite e= ");
	scanf("%f", &e);

	printf("Unesite x= ");
	scanf("%f", &x);

	printf("%f", exp(x, e));
}