#include <stdio.h>
#include <math.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	int a;
	setlocale(LC_ALL, "Russian");
	printf("Сколько учебных заданий?\n");
	scanf_s("%d", &a);
	if ((a < 10) or (a > 40)) {
		printf("Неверные данные\n");
	}
	else {
		if (a == 10) {
			printf("десять ");
		}
		if (a == 11) {
			printf("одиннадцать ");
		}
		if (a == 12) {
			printf("двенадцать ");
		}
		if (a == 13) {
			printf("тринадцать ");
		}
		if (a == 14) {
			printf("четырнадцать ");
		}
		if (a == 15) {
			printf("пятнадцать ");
		}
		if (a == 16) {
			printf("шестнадцать ");
		}
		if (a == 17) {
			printf("семнадцать ");
		}
		if (a == 18) {
			printf("восемнадцать ");
		}					   
		if (a == 19) {		   
			printf("девятнадцать ");
		}
		if (a == 20) {
			printf("двадцать ");
		}
		if (a == 21) {
			printf("двадцать одно ");
		}
		if (a == 22) {
			printf("двадцать два ");
		}
		if (a == 23) {
			printf("двадцать три ");
		}
		if (a == 24) {
			printf("двадцать четыре ");
		}
		if (a == 25) {
			printf("двадцать пять ");
		}
		if (a == 26) {
			printf("двадцать шесть ");
		}
		if (a == 27) {
			printf("двадцать семь ");
		}
		if (a == 28) {
			printf("двадцать восьмое ");
		}
		if (a == 29) {
			printf("двадцать девять ");
		}
		if (a == 30) {
			printf("тридцать ");
		}
		if (a == 31) {
			printf("тридцать одно ");
		}
		if (a == 32) {
			printf("тридцать два ");
		}
		if (a == 33) {
			printf("тридцать три ");
		}
		if (a == 34) {
			printf("тридцать четыре ");
		}
		if (a == 35) {
			printf("тридцать пять ");
		}
		if (a == 36) {
			printf("тридцать шесть ");
		}
		if (a == 37) {
			printf("тридцать семь ");
		}
		if (a == 38) {
			printf("тридцать восемь ");
		}
		if (a == 39) {
			printf("тридцать девять ");
		}
		if (a == 40) {
			printf("сорок ");
		}
		if ((a == 21) or (a == 31)) {
			printf("учебное задание");
		}
		else {
			if (((a > 21) and (a < 25)) or ((a > 31) and (a < 35))) {
				printf("учебных задания");
			}
			else {
				printf("учебных заданий");
			}
		}

	}
	return 0;
}