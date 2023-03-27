#include<stdio.h>
#include<math.h>
int prost(int a)
{
	int pr=1;
	for (int i = 2; i <= sqrt(a); i++)
	{
		
		if (a%i==0)
		{
			pr = 0;
		}
	}
	return pr;
}
void main()
{
	int n, a,br=0;
	printf("Unesite koliko brojeva zelite da unesete: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		printf("Unesite broj: ");
		scanf("%d", &a);

		if (prost(a)==1)
		{
			br++;
		}
	}
	printf("Broj prostih brojeva je: %d.", br);
}