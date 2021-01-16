#include <stdio.h>
#include <math.h>
#include <locale.h>
using namespace std;
double Rings(double R1, double R2)
{
    double S1, S2;
    S1 = 3.14 * (R1 * R1);
    S2 = 3.14 * (R2 * R2);
    return S1 - S2;
}

int main()
{
    setlocale(0, "Russian");
    double R1, R2;
    int i;
    for (int i = 1; i <= 3; i++)
    {
        printf("Введите радиус внешнего кольца:\n");
        scanf_s("%lf", &R1);
        printf("Введите радиус внутреннего кольца:\n");
        scanf_s("%lf", &R2);
        if (R1 < R2) {
            printf("Ошибка! Указан радиус внешнего кольца, меньший. чем радиус внутреннего!");
        }
        else printf("Площадь %d фигуры, RingS(R1)-RingS(R2)", i);;
        return 0;
    }
}