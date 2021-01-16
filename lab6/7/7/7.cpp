#include <stdio.h>
#include <math.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	float a, a3, a2, a15;
	setlocale(LC_ALL, "Russian");
	printf("Введите значения a\n");
	scanf_s("%f", &a);
	a2 = a * a;
	a3 = a2 * a;
	a15 = a3* a3* a3* a3* a3;
	printf("a8 = %f", a15);
	return 0;
}