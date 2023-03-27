#include <stdio.h>

void main()
{
	int n, i,c,s,b,j,p;
	
	printf("Uneti trocifreni broj n: ");
	scanf("%d", &n);

	for  (i = n; i >= 100;i--)
	{
		s = 0;
		b = i;
		while(b>0)
		{
		c = b % 10;
		s += c;
		b /= 10;
		}
		p = 1;
		for (j = 2; j < s; j++)
		{
			if ((s % j) == 0)
				p = 0;
		}
		if(p==1)
			printf("%d\t", s);
		
	}
}
