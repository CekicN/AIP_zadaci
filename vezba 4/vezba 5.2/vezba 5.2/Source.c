#include<stdio.h>

int menjanje(int a, int b,int* aa,int* bb)
{
	int pom;

	pom=a;
	a = b;
	b = pom;

	*aa = a;
	*bb = b;
	
}
void main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);

	printf("%d%d%d\n", a, b, c);
	menjanje(a, b, &a, &b);
	menjanje(b, c, &b, &c);

	printf("%d%d%d", a, b, c);

}