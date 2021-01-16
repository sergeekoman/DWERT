#include <stdio.h>
#include <math.h>
#include <iostream>
#include <locale.h>
#include "string"
using namespace std;
int main()
{
	int a;
	setlocale(LC_ALL, "Russian");
	printf("Введите число\n");
	scanf_s("%d", &a);
	if (a == 0) {
		printf("нулевое число\n");
	}
	else {
	if (a > 0) {
		printf("положительное ");
	}
	if (a < 0) {
		printf("отрицаительное ");
	}
	if (abs(a) % 2 == 0) {
		printf("чётное ");
	}
	if (abs(a) % 2 == 1) {
		printf("нечётное ");
	}
	printf("число\n");
	}
	return 0;
}