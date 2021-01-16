#include <stdio.h>
#include <math.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	int a, b, c;
	setlocale(LC_ALL, "Russian");
	printf("Введите значения a, b и c:\n");
	scanf_s("%d %d %d", &a, &b, &c);
	if ((a < b) and (b < c)) {
		printf("Выражение «Справедливо двойное неравенство A < B < C» истинно\n");
	}
	else {
		printf("Выражение «Справедливо двойное неравенство A < B < C» ложно\n");
	}
	return 0;
}