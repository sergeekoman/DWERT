#include <stdio.h>
#include <math.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    {
        float a;
        int n, i;
        printf("Введите a:");
        scanf_s("%f", &a);
        printf("Введите n:");
        scanf_s("%d", &n);

        int rez = 1;
        for (i = 1; i < n+1; i++) {
            rez = rez + pow(a, i);
        }
        printf("%i \n ", rez);
        return 0;
    }
}