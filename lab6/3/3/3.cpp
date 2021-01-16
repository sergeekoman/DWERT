#include <stdio.h>
#include <math.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	float a, b, c, d;
	setlocale(LC_ALL, "Russian");
	printf("Введите значения a, b и c\n");
	scanf_s("%f %f %f", &a, &b, &c);
	d = a;
	a = c;
	c = b;
	b = d;
	printf("a = %f; b = %f; c = %f", a, b, c);
	return 0;
}