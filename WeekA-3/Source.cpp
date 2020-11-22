#include<stdio.h>
int main()
{
		struct complex { int real, imaginary; };
		struct complex a, b, c;
		printf("Enter complex number A : ");
		scanf_s("%d %di", &a.real, &a.imaginary);
		printf("\nEnter complex number B : ");
		scanf_s("%d %di", &b.real, &b.imaginary);
		c.real = a.real * b.real - a.imaginary * b.imaginary;
		c.imaginary = a.real * b.imaginary + b.real * a.imaginary;
		printf("\nA x B : ");
		printf("%d", c.real);
		if (c.imaginary >= 0) printf("+");
		printf("%di", c.imaginary);
		printf("\n");
		return 0;
}