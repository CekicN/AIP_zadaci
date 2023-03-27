#include<stdio.h>
#include<string.h>

int main()
{
	int x;
	char a[100], b[100];
	scanf("%s", a);
	strcpy(b, a);
	strcat(a, "mika");
	x = strcmp(a, "pera");

	if (x>0)
	{
		strcpy(a, b);
	}
	printf("%s", a);
}