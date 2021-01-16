#include <stdio.h>
#include <math.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	int a, b, c, d;
	setlocale(LC_ALL, "Russian");
	printf("Введите трёхзначное число\n");
	scanf_s("%d", &a);
	if ((a < 100) or (a > 999)) {
		printf("Неправильные данные\n");
	}
	else {
		c = a % 100;
		b = a / 100;
		d = c * 10 + b;
		printf("%d\n", d);
	}
	return 0;
}