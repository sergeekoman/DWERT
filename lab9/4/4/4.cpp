#include <stdio.h>
#include <math.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	int a, b, c, t, d;
	setlocale(LC_ALL, "Russian");
	printf("Длина и ширина прямоугольника?\n");
	scanf_s("%d %d", &a, &b);
	printf("Сторона квадрата?\n");
	scanf_s("%d", &c);
	if ((a < 1) or (b < 1) or (c < 1) or (c > a) or (c > b)) {
		printf("Неправильные данные\n");
	}
	else {
		t = (a / c) * (b / c);
		printf("Кол-во квадратов: %d\n", t);
		d = a * b - t * c * c;
		printf("Оставшаяся площадь: %d\n", d);
	}
	return 0;
}