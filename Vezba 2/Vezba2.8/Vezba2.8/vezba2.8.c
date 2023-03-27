#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{

	float e;
	float x1 = 0;
	float x0;

	printf("Unesite vrednost za 'e': ");
	scanf("%e", &e);
	do
	{
		x0 = x1;
		x1 = (3 * pow(x0, 4) + 4 * pow(x0, 2) - 4) / (4 * pow(x0, 3) + 8 * x0 - 9);
	} while (fabsf(x1-x0) >= e);
	printf("%f", x1);

	

}
