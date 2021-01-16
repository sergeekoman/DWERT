#include <stdio.h>
#include <math.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	float a, x, p, y, p2;
	setlocale(LC_ALL, "Russian");
	printf("Введите вес x кг\n");
	scanf_s("%f", &x);
	printf("Введите цену a руб\n");
	scanf_s("%f", &a);
	if ((a < 0) or (x<0)) {
		printf("Неправильные данные");
	}
	else {
		p = a/x;
		printf("Цена 1 кг = %f руб\n", p);
		printf("Введите вес  y кг\n");
		scanf_s("%f", &y);
		p2 = p * y;
		printf("Цена y кг = %f руб\n", p2);
	}
	return 0;
}