#include <stdio.h>
#include <math.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	int a, b, c;
	setlocale(LC_ALL, "Russian");
	printf("Введите длины a и b\n");
	scanf_s("%d %d", &a, &b);
	if (a < b) {
		printf("Неправильные данные\n");
	}
	else {
		c = a / b;
		printf("Кол-во отрезков %d\n", c);
	}
	return 0;
}