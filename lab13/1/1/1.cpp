#include <stdio.h>
#include <math.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    {
        float c;
        printf("Цена:");
        scanf_s("%f", &c);

        float m;
        for (m = 0.1f; m < 1.1; m += 0.1f) {
            printf("%f кг = %f \n ", m, c * m);
        }
        return 0;
    }
}