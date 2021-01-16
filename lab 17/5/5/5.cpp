#include <stdio.h>
#include <math.h>
#include <locale.h>
using namespace std;

int main(void)
{
    int a[10];
    int n;

    printf("N: ");
    scanf_s("%i", &n);

    int i;
    for (i = 0; i < n; ++i) {
        printf("a[%i] : ", i + 1);
        scanf_s("%i", &a[i]);
    }

    int i2;
    for (i = 0; i < n - 1; ++i) {
        for (i2 = i + 1; i2 < n; ++i2) {
            if (a[i] == a[i2]) {
                printf("%i %i\n", i + 1, i2 + 1);
            }
        }
    }

    return 0;
}