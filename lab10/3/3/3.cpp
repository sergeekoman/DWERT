#include <stdio.h>
#include <math.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	int a;
	setlocale(LC_ALL, "Russian");
	printf("Введите значения a:\n");
	scanf_s("%d", &a);
	if (a < 0) {
		printf("Неверные данные\n");
	}
	else {
		if ((a > 9) and (a < 100) and (a % 2 == 0)) {
			printf("Выражение «Данное число является четным двузначным» истинно\n");
		}
		else {
			printf("Выражение «Данное число является четным двузначным» ложно\n");
		}
	}
	return 0;
}