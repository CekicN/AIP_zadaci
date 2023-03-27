#include<stdio.h>
#include<math.h>
int prevodjenje(int b[],int n)
{
	int s=0;
	for (int i = 0; i < n; i++)
	{
		if (b[i] == 1)
		{
			s += pow(2, i);
		}
	}
	return s;
}
void main()
{
	int n, a[20];
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	int d = prevodjenje(a, n);
	printf("%d", d);
}