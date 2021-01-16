#include <stdio.h>
#include <math.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	float a, p;
	setlocale(LC_ALL, "Russian");
	printf("Введите значения угла а в радианах\n");
	scanf_s("%f", &a);
	if ((a < 0) or (a > (2*3.14))) {
		printf("Неправильные данные");
	}
	else {
		p = (a * 180) / 3.14;
		printf("Угол а в градусах = %f", p);
	}
	return 0;
}