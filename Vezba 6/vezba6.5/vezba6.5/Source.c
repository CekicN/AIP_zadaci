#include<stdio.h>
#include<string.h>
void main()
{
	char R[50], *posrec, rec[20];
	int n = 0;
	printf("Unesite recenicu: ");
	gets(R);
	printf("Unesite rec: ");
	gets(rec);

	posrec = strtok(R, " ");
	
	while (posrec)
	{
		int z = strcmp(posrec, rec);
		if (z==0)
		{
			n++;
		}
		posrec = strtok(NULL, " ");
	}
	printf("%d", n);

}