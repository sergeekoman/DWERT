#include <stdio.h>
#include <math.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	int k, d, n;
	setlocale(LC_ALL, "Russian");
	printf("Введите день\n");
	scanf_s("%d", &k);
	printf("1 января был?..\n");
	scanf_s("%d", &n);
	if ((k < 1) or (k > 365) or (n < 1) or (n >7)) {
		printf("Неправильные данные\n");
	}
	else {
		d = (k+n-1) % 7;
		if (d == 0) {
			d = 7;
		}
		printf("Это %d-й день\n", d);
	}
	return 0;
}