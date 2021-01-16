#include <stdio.h>
#include <math.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	int a, b, c, d;
	setlocale(LC_ALL, "Russian");
	printf("Введите двузначное число\n");
	scanf_s("%d", &a);
	if ((a < 10) or (a>99)) {
		printf("Неправильные данные\n");
	}
	else {
		c = a % 10;
		b = a / 10;
		d = c * 10 + b;
		printf("%d\n", d);
	}
	return 0;
}