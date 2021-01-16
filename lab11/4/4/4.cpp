#include <stdio.h>
#include <math.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	int x, y;
	setlocale(LC_ALL, "Russian");
	printf("Введите значения координат точки (x;y):\n");
	scanf_s("%d %d", &x, &y);
	if ((x == 0) or (y == 0)) {
		printf("Точка находится или на оси oX, или на оси oY\n");
	}
	if ((x>0) and (y >0)){
		printf("Точка находится в I четверти\n");
	}
	if ((x < 0) and (y > 0)) {
		printf("Точка находится в II четверти\n");
	}
	if ((x < 0) and (y < 0)) {
		printf("Точка находится в III четверти\n");
	}
	if ((x > 0) and (y < 0)) {
		printf("Точка находится в IV четверти\n");
	}
	return 0;
}