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
	if (a < 1) {
		printf("Неверные данные\n");
	}
	else {
		printf("год ");
		if ((a % 10 == 1) or (a % 10 == 6)) {
			printf("зелён");
		}
		if ((a % 10 == 2) or (a % 10 == 7)) {
			printf("красн");
		}
		if ((a % 10 == 3) or (a % 10 == 8)) {
			printf("жёлт");
		}
		if ((a % 10 == 4) or (a % 10 == 9)) {
			printf("бел");
		}
		if ((a % 10 == 5) or (a % 10 == 0)) {
			printf("чёрн");
		}
		if ((a % 12 >= 3) and (a % 10 <= 5)) {
			printf("ого ");
		}
		else  {
			printf("ой ");
		}
		if (a % 12 == 1) {
			printf("крысы");
		}
		if (a % 12 == 2) {
			printf("коровы");
		}
		if (a % 12 == 3) {
			printf("тигра");
		}
		if (a % 12 == 4) {
			printf("зайца");
		}
		if (a % 12 == 5) {
			printf("дракона");
		}
		if (a % 12 == 6) {
			printf("змеи");
		}
		if (a % 12 == 7) {
			printf("лошади");
		}
		if (a % 12 == 8) {
			printf("овцы");
		}
		if (a % 12 == 9) {
			printf("обезьяны");
		}
		if (a % 12 == 10) {
			printf("курицы");
		}
		if (a % 12 == 11) {
			printf("собаки");
		}
		if (a % 12 == 0) {
			printf("свиньи");
		}

	}
	return 0;
}