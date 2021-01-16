#include <stdio.h>
#include <math.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	int a, b, c, s;
	setlocale(LC_ALL, "Russian");
	printf("Введите значения a, b и c:\n");
	scanf_s("%d %d %d", &a, &b, &c);
	if ((a >= c) and (a>=c)) {
		s = a+b;
	}
	if ((c >= b) and (a >= b)) {
		s = a + c;
	}
	if ((c >= a) and (b >= a)) {
		s = c + b;
	}
	printf("Сумма = %d\n", s);

	return 0;
}