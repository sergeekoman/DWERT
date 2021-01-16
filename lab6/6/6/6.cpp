#include <stdio.h>
#include <math.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	float a, b, a8;
	setlocale(LC_ALL, "Russian");
	printf("Введите значения a\n");
	scanf_s("%f", &a);
	b = a * a;
	a8 = b * b * b*b;
	printf("a8 = %f", a8);
	return 0;
}