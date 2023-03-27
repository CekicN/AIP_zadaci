#include<stdio.h>
#include<string.h>


void main()
{
	int c='a'-'A';
	char s[100];

	gets(s);

	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i]>=65 && s[i]<=90)
		{
			s[i] += c;
		}
	}

	printf("%s", s);
}