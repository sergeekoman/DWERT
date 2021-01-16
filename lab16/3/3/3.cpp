#include <stdio.h>
#include <math.h>
#include <locale.h>
using namespace std;
int main(void)
{
    int a[10];
    int n, i;

    printf("N: ");
    scanf_s("%i", &n);

    printf("A: ");
    scanf_s("%i", &a[0]);

    printf("B: ");
    scanf_s("%i", &a[1]);

    for (i = 2; i < n; ++i) {
        a[i] = 0;
        int i2;
        for (i2 = 0; i2 < i; ++i2) a[i] += a[i2];
    }
    for (i = 0; i < n; ++i) printf("%i : %i\n", i, a[i]);
    return 0;
}