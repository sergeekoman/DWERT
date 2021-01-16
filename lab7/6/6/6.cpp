#include <stdio.h>
#include <math.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	float a1, b1, c1, a2, b2, c2, x, y;
	setlocale(LC_ALL, "Russian");
	printf("Введите значения переменных по порядку (a1, b1, c1, a2, b2, c2)\n");
	scanf_s("%f %f %f %f %f %f", &a1, &b1, &c1, &a2, &b2, &c2);
	y = (c2 - (a2 * c1) / a1) / (b2 - (b1 / a1));
	x = (c1 - b1 * y) / a1;
		printf("x = %f\n", x);
	return 0;
}