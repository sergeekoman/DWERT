#include <stdio.h>
#include <math.h>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int d;
	float l;
	printf("Введите значение d - ");
	scanf_s("%d", &d);
	l = 3.14 * d;
	printf("Длина окружнсти = %f ", l);
	return 0;
}
