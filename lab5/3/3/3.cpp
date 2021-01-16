#include <stdio.h>
#include <math.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	float a, b, c, ac, bc, s;
	setlocale(LC_ALL, "Russian");
	printf("Введите точки a, b, c\n");
	scanf_s("%f %f %f", &a, &b, &c);
	if ((c < a) or (c > b) or (a > b)) {
		printf("Неверные данные");
	}
	else {
		ac = abs(a - c);
		bc = abs(b - c);
		s = ac * bc;
		printf("AC*BC= %f", s);
	}
	return 0;
}