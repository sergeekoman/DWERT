#include <stdio.h>
#include <math.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	int n, d;
	setlocale(LC_ALL, "Russian");
	printf("Введите кол-во секунд\n");
	scanf_s("%d", &n);
	if (n < 0) {
		printf("Неправильные данные\n");
	}
	else {
		d = n % 60;
		printf("%d секунд прошло с последней минуты\n", d);
	}
	return 0;
}