#include <stdio.h>
#include <math.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	float y1, y2, x1, x2;
	setlocale(LC_ALL, "Russian");
	printf("Введите координаты первой точки\n");
	scanf_s("%f %f", &x1, &y1);
	printf("Введите координаты второй точки\n");
	scanf_s("%f %f", &x2, &y2);
	float s, p;
	s = abs(x1 - x2) * abs(y1 - y2);
	p = 2 * (abs(x1 - x2) + abs(y1 - y2));
	printf("Периметр = %f; Площадь = %f", p, s);
	return 0;
}