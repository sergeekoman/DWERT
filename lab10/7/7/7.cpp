#include <stdio.h>
#include <math.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	int a, b, c;
	setlocale(LC_ALL, "Russian");
	printf("Введите стороны треугольника:\n");
	scanf_s("%d %d %d", &a, &b, &c);
	if ((a < 1) or (b < 1) or (c < 1)) {
		printf("Неверные данные\n");
	}
	else {
		if ((a + b <= c) or (a + c <= b) or (c + b <= a)) {
			printf("Выражение «Существует треугольник со сторонами a, b, c» ложно\n");
		}
		else {
			printf("Выражение «Существует треугольник со сторонами a, b, c» истинно\n");
		}
	}
	return 0;
}