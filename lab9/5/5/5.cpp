#include <stdio.h>
#include <math.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	int a, t;
	setlocale(LC_ALL, "Russian");
	printf("Какой год?\n");
	scanf_s("%d", &a);
	if (a < 1) {
		printf("Неправильные данные\n");
	}
	else {
		if (a % 100 == 0) {
			t = a / 100;
		}
		else {
			t = a / 100 + 1;
		}
		printf("Этот год принадлежит %d-му столетию\n", t);
	}
	return 0;
}