﻿#include <stdio.h>
#include <math.h>
#include <locale.h>
using namespace std;

int main(void)
{
    int a[10], b[10];
    int n;

    printf("N: ");
    scanf_s("%i", &n);

    int i;
    for (i = 0; i < n; ++i) {
        printf("a[%i] : ", i + 1);
        scanf_s("%i", &a[i]);
    }
    for (i = 0; i < n; ++i) {
        printf("b[%i] : ", i + 1);
        scanf_s("%i", &b[i]);
    }

    for (i = 0; i < n; ++i) {
        a[i] += b[i];
        b[i] = a[i] - b[i];
        a[i] = a[i] - b[i];
    }
    printf("A: \n");
    for (i = 0; i < n; ++i) printf("  %i: %i\n", i + 1, a[i]);

    printf("B: \n");
    for (i = 0; i < n; ++i) printf("  %i: %i\n", i + 1, b[i]);

    return 0;
}