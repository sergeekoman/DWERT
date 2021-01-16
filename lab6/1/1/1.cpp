#include <stdio.h>
#include <math.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	float a, b, d;
	setlocale(LC_ALL, "Russian");
	printf("Введите значения a и b\n");
	scanf_s("%f %f", &a, &b);
	d = a;
	a = b;
	b = d;
	printf("a = %f; b = %f", a, b);
	return 0;
}