#include <stdio.h>
#include <math.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	int a, b, c, s;
	setlocale(LC_ALL, "Russian");
	printf("Введите значения a, b и c:\n");
	scanf_s("%d %d %d", &a, &b, &c);
	if ((b - a) < (c-a)) {
		s = b -a;
		printf("b ближе к a (Расстояние = %d)\n", s);
	}
	if ((b - a) > (c - a)) {
		s = c - a;
		printf("c ближе к a (Расстояние = %d)\n", s);
	}
	if ((b - a) == (c - a)) {
		s = b - a;
		printf("И c, и b находятся на одном расстоянии от a (Расстояние = %d)\n", s);
	}
	return 0;
}