#include <stdio.h>
#include <math.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	int a, b, c, d, n;
	setlocale(LC_ALL, "Russian");
	printf("Введите значения n:\n");
	scanf_s("%d", &n);
	if ((n < 1000) or (n > 9999)) {
		printf("Неверные данные\n");
	}
	else {
		a = n % 10;
		b = (n % 100) / 10;
		c = (n % 1000) /100 ;
		d = n / 1000;
		if ((a == d) and (b == c)) {
			printf("Выражение «Данное число читается одинаково слева направо и справа налево» истинно\n");
		}
		else {
			printf("Выражение «Данное число читается одинаково слева направо и справа налево» ложно\n");
		}
	}
	return 0;
}