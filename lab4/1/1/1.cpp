#include <stdio.h>
#include <math.h>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian"); 
	int a, b, p, s;
	printf("Введите значение a - ");
	scanf_s("%d", &a);
	printf("Введите значение b - ");
	scanf_s("%d", &b);
	p = 2 * (a + b);
	s = a * b;
	printf("Периметр = %d ", p);
	printf("Площадь = %d", s);
	return 0;
}
