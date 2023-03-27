#include<stdio.h>
#include<math.h>
void main()
{
	FILE* fa;
	int b, n=0,s=0;
	fa = fopen("binarne-cifre.txt", "r");
	

	if (!fa)
	{
		printf("rrrrr");
		return 0;
	}
	do
	{
		fscanf(fa, "%d", &b);

		if (b==1)
		{
			s +=pow(2, n);
		}
		n++;
	} while (!feof(fa));

	printf("%d", s);
	fclose(fa);
}