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
        scanf_s("%d", &n);

        float d=1;
        for (i = 0; i < n; i++) {
            d = d * (1 + i / 10);
        }
            printf("D = %f \n ", d);
        
        return 0;
    }
}