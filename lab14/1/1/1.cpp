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

    int i, i2;
    for (i = a; i <= b; ++i) {
        for (i2 = 1; i2 <= i; ++i2) printf("%i ", i);
        printf("\n");
    }

    return 0;
}