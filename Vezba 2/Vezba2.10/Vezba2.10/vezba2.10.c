#include<stdio.h>

void main()
{
	float A, B,C;
	char op;
	printf("Unesite izraz: ");
	scanf("%f%c%f", &A, &op, &B);

	switch (op)
	{
		case'+':
			C = A + B;
		break;
		case'-':
			C = A - B;
			break;
		case'*':
			C = A * B;
			break;
		case'/':
			C = A / B;
			break;

	default:
		printf("Nevazeca operacija!!!");
		break;
	}

	printf("A%cB=%.3f", op,C);


}