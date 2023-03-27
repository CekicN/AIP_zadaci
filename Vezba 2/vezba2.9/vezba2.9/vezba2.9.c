#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float faktorijel(int n);
void main()
{
	float x, e,s=0, exp;
	int n=0;

	printf("Unesite x i e: ");
	scanf("%f%e", &x,&e);

	do
	{
		
		exp = pow(x, n) / faktorijel(n);
		s += exp;
		n++;
	} while (abs(exp/s) > e);
	printf("%f", s);
}

float faktorijel(int n)
{
		int f=1;
		for (int j = 1; j <= n; j++)
		{
			f *= j;
		}
	return f;
}


