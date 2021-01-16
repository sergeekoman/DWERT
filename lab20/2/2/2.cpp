#include <stdio.h>
#include <math.h>
#include <locale.h>
using namespace std;

int main(void)
{
    int a[20], b[20];
    int n, l;
    printf("N: ");
    scanf_s("%i", &n);
    printf("L: ");
    scanf_s("%i", &l);

    int i;
    for (i = 0; i < n; ++i) {
        printf("a[%i] : ", i + 1);
        scanf_s("%i", &a[i]);
    }

    int i2 = -1, len = 1, i3, endn = n;

    for (i = 1; i < n; ++i) {
        if (a[i - 1] != a[i]) {
            if (len > l) {
                b[++i2] = 0;
                endn -= len - 1;
            }
            else {
                for (i3 = 0; i3 < len; ++i3) b[++i2] = a[i - 1];
            }             len = 0;
        }         ++len;
    }       if (len > l) {
        b[++i2] = 0;
        endn -= len - 1;
    }
    else {
        for (i3 = 0; i3 < len; ++i3) b[++i2] = a[i - 1];
    }

    for (i = 0; i < endn; ++i) a[i] = b[i];

    for (i = 0; i < endn; ++i) printf("a  %i : %i\n", i + 1, a[i]);

    return 0;
}