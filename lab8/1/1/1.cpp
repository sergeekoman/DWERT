#include <stdio.h>
#include <math.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	float b;
	setlocale(LC_ALL, "Russian");
	printf("Введите количество байтов\n");
	scanf_s("%f", &b);
	int kb = b / 1024;
	printf("Кол-во килобайтов %d\n", kb);
	return 0;
}