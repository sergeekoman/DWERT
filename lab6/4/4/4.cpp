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
	y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
	printf("y = %f", y);
	return 0;
}