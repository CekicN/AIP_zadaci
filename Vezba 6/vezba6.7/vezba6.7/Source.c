#include<stdio.h>

void main()
{
	FILE* fa;
	int postoji = 0;
	char rec[20], recenica[100];
	fa = fopen("text.txt", "r");

	printf("Unesite rec: ");
	scanf("%s", &rec);
	while (!feof(fa) && !postoji)
	{
		fscanf(fa, "%s", &recenica);
		if (strcmp(recenica,rec)==0)
		{
			postoji = 1;
		}
	}
	if (postoji)
	{
		printf("postoji ova rec u tekstu.");
	}
	else
	{
		printf("Ne postoji ova rec u tekstu.");
	}
	
}