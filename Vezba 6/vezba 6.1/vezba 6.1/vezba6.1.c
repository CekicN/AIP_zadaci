#include<stdio.h>

void main()
{
	int s=0,b;
	int n = 0;
	FILE *fa, *fb;

	fa = fopen("podaci.txt", "r");
	fb = fopen("podaci.txt", "a");

	if (fa == NULL)
	{
		printf("GRESKA!!!");
		return 0;
	}
	else
	{
		while (!feof(fa))
		{
			fscanf(fa, "%d ", &b);
			s += b;
			n++;
		}
	}

	fprintf(fb, "\n%d", s / n);

	fclose(fa);
	fclose(fb);
}