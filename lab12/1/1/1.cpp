#include <stdio.h>
#include <math.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	int a, n;
	setlocale(LC_ALL, "Russian");
	printf("Введите номер дня\n");
	scanf_s("%d", &a);
	printf("Введите номер месяца\n");
	scanf_s("%d", &n);
	if ((a < 1) or (a>31) or (n<1) or (n>12) or ((a > 29) and (n == 2)) or ((a > 30) and ((n == 4) or (n == 6) or (n == 9) or (n == 11)))) {
		printf("Неверные данные\n");
	}
	else {
		if (a == 1) {
			printf("первое ");
		}
		if (a == 2) {
			printf("второе ");
		}
		if (a == 3) {
			printf("третье ");
		}
		if (a == 4) {
			printf("четвёртое ");
		}
		if (a == 5) {
			printf("пятое ");
		}
		if (a == 6) {
			printf("шестоеое ");
		}
		if (a == 7) {
			printf("седьмое ");
		}
		if (a == 8) {
			printf("восьмое ");
		}
		if (a == 9) {
			printf("девятое ");
		}
		if (a == 10) {
			printf("десятое ");
		}
		if (a == 11) {
			printf("одиннадцатое ");
		}
		if (a == 12) {
			printf("двенадцатое ");
		}
		if (a == 13) {
			printf("тринадцатое ");
		}
		if (a == 14) {
			printf("четырнадцатое ");
		}
		if (a == 15) {
			printf("пятнадцатое ");
		}
		if (a == 16) {
			printf("шестнадцатое ");
		}
		if (a == 17) {
			printf("семнадцатое ");
		}
		if (a == 18) {
			printf("восемнадцатое ");
		}
		if (a == 19) {
			printf("девятнадцатое ");
		}
		if (a == 20) {
			printf("двадцатое ");
		}
		if (a == 21) {
			printf("двадцать первое ");
		}
		if (a == 22) {
			printf("двадцать второе ");
		}
		if (a == 23) {
			printf("двадцать третье ");
		}
		if (a == 24) {
			printf("двадцать четвёртое ");
		}
		if (a == 25) {
			printf("двадцать пятое ");
		}
		if (a == 26) {
			printf("двадцать шестое ");
		}
		if (a == 27) {
			printf("двадцать седьмое ");
		}
		if (a == 28) {
			printf("двадцать восьмое ");
		}
		if (a == 29) {
			printf("двадцать девятое ");
		}
		if (a == 30) {
			printf("тридцатое ");
		}
		if (a == 31) {
			printf("тридцать первое ");
		}
		if (n == 1) {
			printf("января");
		}
		if (n == 2) {
			printf("февраля");
		}
		if (n == 3) {
			printf("марта");
		}
		if (n == 4) {
			printf("апреля");
		}
		if (n == 5) {
			printf("мая");
		}
		if (n == 6) {
			printf("июня");
		}
		if (n == 7) {
			printf("июля");
		}
		if (n == 8) {
			printf("августа");
		}
		if (n == 9) {
			printf("сентября");
		}
		if (n == 10) {
			printf("октября");
		}
		if (n == 11) {
			printf("ноября");
		}
		if (n == 12) {
			printf("декабря");
		}

	}
	return 0;
}