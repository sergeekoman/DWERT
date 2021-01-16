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

    for (i = 0; i < n; ++i) {
        printf("a[%i] : ", i + 1);
        scanf_s("%i", &a[i]);
    }

    for (i = 0; i < n / 2 + 1; i += 2) {
        printf("%i\n", a[i]);
        if (i < n / 2) printf("%i\n", a[i + 1]);             
        if (n - i - 1 > n / 2) printf("%i\n", a[n - i - 1]);
        if (n - i - 2 > n / 2) printf("%i\n", a[n - i - 2]);
    }
    return 0;
}