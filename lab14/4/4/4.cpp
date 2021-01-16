#include <stdio.h>
#include <math.h>
#include <locale.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int i=0;
    float k = 1000, p;
    printf("Введите процент:");
    scanf_s("%f", &p);
    if ((p < 0) or (p>25)) {
        printf("Неверные данные");
    }
    else {
        while (k <= 1100) {
            i++;
            k = k*(1 + p/100);
        }
        printf("Кол-во месяцев = %d.  Вклад увеличится до %f\n ", i, k);
    }
    return 0;
}