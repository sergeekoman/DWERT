#include <stdio.h>
#include <math.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	int a, b, c;
	setlocale(LC_ALL, "Russian");
	printf("Введите значения сторон треугольника:\n");
	scanf_s("%d %d %d", &a, &b, &c);
	if ((a < 1) or (b < 1) or (c < 1) or (a+b<=c) or (a + c <= b) or (c + b <= a)) {
		printf("Неверные данные\n");
	}
	else {
		if ((a*a+c*c == b*b) or (b * b + c * c == a * a) or (a * a + b * b == c * c)) {
			printf("Выражение «Треугольник со сторонами a, b, c является прямоугольным» истинно\n");
		}
		else {
			printf("Выражение «Треугольник со сторонами a, b, c является прямоугольным» ложно\n");
		}
	}
	return 0;
}