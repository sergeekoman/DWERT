#include <stdio.h>
#include <math.h>
#include <locale.h>
using namespace std;

int main(void)
{
    float a[10], b[10];
    int n;

    printf("N: ");
    scanf_s("%i", &n);

    int k;
    for (k = 0; k < n; ++k) {
        printf("a[%i] : ", k + 1);
        scanf_s("%f", &a[k]);
    }

    int i;
    for (k = 0; k < n; ++k) {
        b[k] = 0;
        for (i = k; i < n; ++i) {
            b[k] += a[i];
        }
    }

    printf("B: \n");
    for (k = 0; k < n; ++k) printf("  %i: %f\n", k + 1, b[k]);

    return 0;
}