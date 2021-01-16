#include <stdio.h>
#include <math.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	int a, b, c, n;
	setlocale(LC_ALL, "Russian");
	printf("Введите значения n:\n");
	scanf_s("%d", &n);
	if ((n < 100) or ( n > 999)){
		printf("Неверные данные\n");
	}
	else {
		a = n%10;
		b = (n % 100) / 10;
		c = n/100;
		if (((a >= b) and (b >= c)) or ((a <= b) and (b <= c))) {
			printf("Выражение «Цифры данного числа образуют возрастающую или убывающую последовательность» истинно\n");
		}
		else {
			printf("Выражение «Цифры данного числа образуют возрастающую или убывающую последовательность» ложно\n");
		}
	}
	return 0;
}