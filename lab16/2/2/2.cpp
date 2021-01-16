#include <stdio.h>
#include <math.h>
#include <locale.h>
using namespace std;
int main(void)
{
    int a[10];
    int d, n, i, pow;

    printf("N: ");
    scanf_s("%i", &n);

    printf("A[0]: ");
    scanf_s("%i", &a[0]);

    printf("D: ");
    scanf_s("%i", &d);
    pow = 1;
    for (i = 1; i < n; ++i) {
        pow *= d;
        a[i] = a[0] * pow;
    }

    for (i = 0; i < n; ++i) printf("%i : %i\n", i, a[i]);
    return 0;
}