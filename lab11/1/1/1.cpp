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
	if (a == b) {
		a = 0;
		b = 0;
	}
	if (a > b) {
		b = a;
	}
	if (a < b) {
		a = b;
	}
	printf("a = %d; b = %d\n", a, b);
		
	return 0;
}