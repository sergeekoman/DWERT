#include <stdio.h>
#include <math.h>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	float l;
	printf("Введите значение a - ");
	scanf_s("%d", &a);
	printf("Введите значение b - ");
	scanf_s("%d", &b);
	l = (a+b)/2;
	printf("Среднее арифмитическое = %f ", l);
	return 0;
}
