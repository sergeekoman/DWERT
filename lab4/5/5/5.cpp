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
		aa = abs(a);
		bb = abs(b);
		bb = b * b;
		s = aa + bb;
		r = aa - bb;
		p = aa * bb;
		c = aa / bb;
		printf("Сумма модулей = %d ", s);
		printf("Разность модулей = %d ", r);
		printf("Произведение модулей = %d ", p);
		printf("Частное модулей = %f ", c);
		return 0;
	}
}
