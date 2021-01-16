#include <stdio.h>
#include <math.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	float a, b, x;
	setlocale(LC_ALL, "Russian");
	printf("Введите значения a и b\n");
	scanf_s("%f %f", &a, &b);
	if (a==0) {
		printf("Неправильные данные\n");
	}
	else {
		x = (-b) / a;
		printf("x = %f\n", x);
	}
	return 0;
}