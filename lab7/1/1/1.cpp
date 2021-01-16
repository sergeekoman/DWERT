#include <stdio.h>
#include <math.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	float a, p;
	setlocale(LC_ALL, "Russian");
	printf("Введите значения угла а в градусах\n");
	scanf_s("%f", &a);
	if ((a < 0) or (a > 360)) {
		printf("Неправильные данные");
	}
	else {
		p = (a * 3.14) / 180;
		printf("Угол а в радианах = %f", p);
	}
	return 0;
}