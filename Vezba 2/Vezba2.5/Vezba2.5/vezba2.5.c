#include<stdio.h>

void main()
{
	int t,c,s=0,b;
	printf("Uneti ceo broj B: ");
	scanf("%d", &t);

	while (t>0)
	{
		c = t % 10;
		s += c;
		t /= 10;
	}
	printf("%d\t\n", s);
	t = s;
	printf("Binarna reprezentacija zadatog broja: ");
	while (t > 0)
	{	
		b = t % 2;
		t /= 2;
		printf("%d", b);
	}
	printf("\nOktalna reprezentacija zadatog broja: ");
	t = s;
	while (t > 0)
	{
		b = t % 8;
		t /= 8;
		printf("%d", b);
	}
	printf("\nHeksadecimalna reprezentacija zadatog broja: ");
	t = s;
	while (t > 0)
	{
		switch (t % 16)
		{
		case 10: printf("A");
			break;
		case 11: printf("B");
			break;
		case 12: printf("C");
			break;
		case 13: printf("D");
			break;
		case 14: printf("E");
			break;
		case 15: printf("F");
			break;
		default:printf("%d" ,t % 16);
		}
		t /= 16;
	}
	
}