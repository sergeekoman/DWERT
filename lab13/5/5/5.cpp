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

        int rez = 0;
        for (i = 0; i < n; i = i+2) {
            rez = rez + pow(a, i) - pow(a, i+1);
        }
        printf("%i \n ", rez);
        return 0;
    }
}