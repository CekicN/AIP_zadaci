#include<stdio.h>
#include<string.h>

void main()
{//15
	int m, mmax=0;
	FILE* fa, * fp;
	char s[100];
	fa = fopen("recenice.txt", "r");
	fp = fopen("sadrze.txt", "w");

	printf("Unesite m: ");
	scanf("%d", &m);

	while (scanf(fa,"%s", &s)!= '\n')
	{
		printf("fff");
	}
}