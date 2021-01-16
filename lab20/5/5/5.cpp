#include <stdio.h>
#include <math.h>
#include <locale.h>
using namespace std;
int main(void)
{
    float a[10][2];
    int n;

    printf("N: ");
    scanf_s("%i", &n);

    int i;
    for (i = 0; i < n; ++i) {
        printf("a[%i]:\n", i + 1);
        printf("  x : ");
        scanf_s("%f", &a[i][0]);
        printf("  y : ");
        scanf_s("%f", &a[i][1]);
    }

    int p1, p2, p3, i2, i3;
    float p, pmax = 0;

    for (i = 0; i < n; ++i)
        for (i2 = i + 1; i2 < n; ++i2)
            for (i3 = i2 + 1; i3 < n; ++i3) {
                p = 0;
                p += sqrt(pow(a[i][0] - a[i2][0], 2) + pow(a[i][1] - a[i2][1], 2));
                p += sqrt(pow(a[i][0] - a[i3][0], 2) + pow(a[i][1] - a[i3][1], 2));
                p += sqrt(pow(a[i2][0] - a[i3][0], 2) + pow(a[i2][1] - a[i3][1], 2));
                if (p > pmax) {
                    p1 = i;
                    p2 = i2;
                    p3 = i3;
                    pmax = p;
                }
            }


    printf("P: %f\n", pmax);
    printf("A %i :\n x: %f\n y: %f\n", p1 + 1, a[p1][0], a[p1][1]);
    printf("A %i :\n x: %f\n y: %f\n", p2 + 1, a[p2][0], a[p2][1]);
    printf("A %i :\n x: %f\n y: %f\n", p3 + 1, a[p3][0], a[p3][1]);
    return 0;
}