#include <stdio.h>
#include <math.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{//установка русского языка
	float y1, y2, x1, x2;
	setlocale(LC_ALL, "Russian"); 
	printf("Введите координаты первой точки\n");
	scanf_s("%f %f", &x1, &y1);
	printf("Введите координаты второй точки\n");
	scanf_s("%f %f", &x2, &y2);
	float d;
	d = sqrt(pow(x1 - x2, 2) + (pow(y1 - y2, 2)));
	printf("Расстояние между точками = %f", d);
	return 0;
}