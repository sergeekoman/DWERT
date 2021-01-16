#include <stdio.h>
#include <math.h>
#include <locale.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b;
    printf("A:");
    scanf_s("%i", &a);
    printf("B:");
    scanf_s("%i", &b);
    if ((a < 0) or (b < 0) or (a < b)) {
        printf("Неверные данные");
    }

    int temp = a;
    while (temp >= 0) {
        temp -= b;
    }
    printf("%i\n ", temp + b);

    return 0;
}