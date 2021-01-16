#include <stdio.h>
#include <math.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	float v1, v2, s, t, v3, s1;
	setlocale(LC_ALL, "Russian");
	printf("Введите скорость 1-го автомобиля (v1)\n");
	scanf_s("%f", &v1);
	printf("Введите скорость 2-го автомобиля (v2)\n");
	scanf_s("%f", &v2);
	printf("Введите расстояние между ними (s)\n");
	scanf_s("%f", &s);
	printf("Введите время (t)\n");
	scanf_s("%f", &t);
	if ((v1 < 0) or (v2 < 0) or (s < 0) or (t < 0)) {
		printf("Неправильные данные");
	}
	else {
		v3 = v1 + v2;
		s1 = s + v3 * t;
		printf("Новое расстояние = %f км\n", s1);
	
	}
	return 0;
}