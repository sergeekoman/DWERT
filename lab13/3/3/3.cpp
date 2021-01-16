#include <stdio.h>
#include <math.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    {
        int n, i;
        printf("Введите N:");
        scanf_s("%i", &n);

        int rez = 0;
        for (i = 1; i <= (2 * n - 1); i += 2) {
            rez += i;
            printf("%i \n ", rez);
        }
        return 0;
    }
}