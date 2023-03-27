#include<stdio.h>
void main()
{
	int k,b,c,s;
	printf("Uneti parametar k: ");
	scanf("%d", &k);
	for (int i = 100; i < 1000; i++)
	{
		b = i;
		s = 0;
		while (b > 0)
		{
			c = b % 10;
			s += c;
			b /= 10;
		}
		if (s == 17 && (i % k) == 0)
			printf("%d\t", i);
	}
}