#include <stdio.h>
#include <math.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	float x, y;
	setlocale(LC_ALL, "Russian");
	printf("Введите значения x\n");
	scanf_s("%f", &x);
	y = 4 * pow(x-3, 6) - 7 * pow(x-3, 3) +2;
	printf("y = %f", y);
	return 0;
}