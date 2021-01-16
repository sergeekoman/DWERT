#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <limits.h>

const UCHAR Nmax = UCHAR_MAX;

int main()
{
    setlocale(LC_ALL, "");
    UCHAR N = 0, 
        min_i = 0, 
        max_i = 0; 
    printf_s("N: ");
    scanf_s("%hhu", &N);
    if (1 < N && N <= Nmax)
    {
        ULONGLONG a[Nmax] = {}; 
        printf_s("A: ");
        for (UCHAR i = 0; i < N; i++)
            scanf_s("%llu", &a[i]);
        for (UCHAR i = 1; i < N; i++) 
        {
            if (a[i] < a[min_i])
                min_i = i;
            else
                if (a[i] >= a[max_i])
                    max_i = i;
        }
        if (max_i > min_i)
            max_i++; 
        N += 2;
        for (UCHAR i = N - 1; i > min_i; --i)
            a[i] = a[i - 1]; 
        a[min_i] = 0; 
        for (UCHAR i = N - 1; i > max_i + 1; --i)
            a[i] = a[i - 1];
        a[max_i + 1] = 0;
        printf_s("Измененный массив: ");
        for (UCHAR i = 0; i < N; i++)
            printf_s("%llu ", a[i]);
    }
    else
        printf_s("Введено некорректное число.");
    return 0;
}