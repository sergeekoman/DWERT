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

    int amax = 0;
    float r, rmax;
    for (i = 0; i < n; ++i) {
        if (a[i][0] < 0 && a[i][1]>0) {
            r = sqrt(pow(a[i][0], 2) + pow(a[i][1], 2));
            if (r > rmax || i == 0) {
                rmax = r;
                amax = i;
            }
        }
    }

    printf("A  %i :\n x: %f\n y: %f\n", amax + 1, a[amax][0], a[amax][1]);
    return 0;
}