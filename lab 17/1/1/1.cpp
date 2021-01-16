#include <stdio.h>
#include <math.h>
#include <locale.h>
using namespace std;
int main(void)
{
    int a[10];
    int n, k, l;

    printf("N: ");
    scanf_s("%i", &n);

    printf("K: ");
    scanf_s("%i", &k);

    printf("L: ");
    scanf_s("%i", &l);

    int i;
    for (i = 0; i < n; ++i) {
        printf("a[%i] : ", i + 1);
        scanf_s("%i", &a[i]);
    }

    int sum = 0;
    for (i = 0; i < k - 1; ++i) sum += a[i];
    for (i = l; i < n; ++i) sum += a[i];
    printf("%f\n: ", (float)sum / (float)(k - 1 + (n - l)));
    return 0;
}