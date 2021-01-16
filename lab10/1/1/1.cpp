#include <stdio.h>
#include <math.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	int a, b;
	setlocale(LC_ALL, "Russian");
	printf("Введите значения a и b:\n");
	scanf_s("%d %d", &a, &b);
	if ((a > 2) and (b <= 3)) {
		printf("Выражение «Справедливы неравенства A > 2 и B <= 3» истинно\n");
	}
	else {
		printf("Выражение «Справедливы неравенства A > 2 и B <= 3» ложно\n");
	}
	return 0;
}