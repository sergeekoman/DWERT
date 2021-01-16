#include <stdio.h>
#include <math.h>
#include <locale.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int n, f1=1, f2=1, k=2;
    printf("Введите N:");
    scanf_s("%d", &n);
    while (n>f2) {
        f2 = f1 + f2;
        f1 = f2 - f1;
        k++;
    }
    if (n = f2) {
        printf("Порядковый номер числа Фибоначчи: %d\n", k);
    }
    else {
        printf("N не является числом Фибоначчи!\n");
    }
    return 0;
}