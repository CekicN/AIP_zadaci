#include<stdio.h>
int delioci(int a[] , int b, int* c)
{

	int n = 0;
	for (int i = 1; i <= b; i++)
	{
		if (b % i == 0)
		{
			a[n] = i;
			n++;
		}
	}
	*c = n;


}
void main()
{
	int b,a[100],c;

	printf("Uneti prirodan broj b: ");
	scanf("%d", &b);
	delioci(a, b, &c);
	for (int i = 0; i < c; i++)
	{
		printf("%d ", a[i]);
	}

}