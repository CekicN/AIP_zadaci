#include<stdio.h>

void main()
{
	int f1 = 1, f2 = 1, f, n, i;

	printf("Unesite broj n: ");
	scanf("%d", &n);
	printf("Clanovi niza su:\n");
	for  (i = 3; i <= n;i++)
	{
		f = f1 + f2;
		f1 = f2;
		f2 = f;
		if((f%2)==0)
			printf("\t%d", f);
	}
	
}