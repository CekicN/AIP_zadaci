#include<stdio.h>
#include<string.h>
void main()
{
	int k, i, n = 0, N = 0,j;
	char c[50],nadjeno[50];

	
	printf("Unesi string: \n");
	gets(c);
	printf("Unesi k= ");
	scanf("%d", &k);
	int b = strlen(c);
	for ( i = 0; i < b; i++)
	{
		if (!((c[i] >= 65 && c[i] <= 90) || (c[i] >=97 && c[i] <= 122)))
		{
			continue;
		}
		j = 0;
		n = 0;
		while (n <= k && j <= b)
		{
			if (c[j]==c[i])
			{
				n++;
			}
			j++;
		}
		
		if (n >= k)
		{
			j = 0;
			while (j <= N && nadjeno[j] != c[i]) 
			{
				j++;
			}
			if (j== N+1)
			{
				nadjeno[++N] = c[i];
			}
		}
	}

	
	for ( i = 1; i <= N; i++)
	{
		printf("%c ", nadjeno[i]);
	}
	
}