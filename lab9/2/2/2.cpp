#include <stdio.h>
#include <math.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	int k, d;
	setlocale(LC_ALL, "Russian");
	printf("Введите день\n");
	scanf_s("%d", &k);
	if ((k < 1) or (k > 365)) {
		printf("Неправильные данные\n");
	}
	else {
		d = k % 7;
		printf("Это %d-й день\n", d);
	}
	return 0;
}