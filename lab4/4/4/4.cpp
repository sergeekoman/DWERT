#include <stdio.h>
#include <math.h>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, s, r, p, aa, bb;
	float c;
	printf("Введите значение a - ");
	scanf_s("%d", &a);
	printf("Введите значение b - ");
	scanf_s("%d", &b);
	if ((a = 0) or (b = 0)) {
		printf("Упс, ошибочка!");
	}
	else {
		aa = a * a;
		bb = b * b;
		s = aa + bb;
		r = aa - bb;
		p = aa * bb;
		c = aa / bb;
		printf("Сумма квадратов = %d ", s);
		printf("Разность квадратов = %d ", r);
		printf("Произведение квадратов = %d ", p);
		printf("Частное квадратов = %f ", c);
		return 0;
	}
}
