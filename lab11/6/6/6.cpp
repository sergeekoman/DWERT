#include <stdio.h>
#include <math.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	int a;
	setlocale(LC_ALL, "Russian");
	printf("Введите число\n");
	scanf_s("%d", &a);
	if (a < 0) {
		printf("Неверные данные\n");
	}
	else {
		if (a == 0) {
			printf("нулевое число\n");
		}
		else {
			if ((a > 0) and (a < 10)) {
				printf("одназначное ");
			}
			if ((a > 9) and (a < 100)) {
				printf("двузначное ");
			}
			if ((a > 99) and (a < 1000)) {
				printf("трёхзначное ");
			}
			if (a % 2 == 0) {
				printf("чётное ");
			}
			if (a % 2 == 1) {
				printf("нечётное ");
			}
			printf("число\n");
		}
	}
	return 0;
}