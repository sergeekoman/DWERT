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

    int r = a[1] - a[0];
    for (i = 1; i < n; ++i) {
        if (r != a[i] - a[i - 1]) {
            r = 0;
        }
    }

    printf("%i\n: ", r);
    return 0;
}