#include <stdio.h>
#include <math.h>
#include <locale.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int s, n, k, i=0;
    printf("Введите n:");
    scanf_s("%d", &n);
    if (n < 1) {
        printf("Неверные данные");
    }
    else {


        int a = n;
        while (a >= 0) {
            i++;
            a = a -i;
        }
        k = i;
        s = 0;
        for (i = 0; i < k+1; i++) {
            s = s + i;
        }
        printf("k = %d; сумма = %d\n ", k, s);
    }
    return 0;
}