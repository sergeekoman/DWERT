#include <stdio.h>
#include <math.h>
#include <locale.h>
using namespace std;
void poweraA3(float a, float* b)
{
    *b = a * a * a;
}

int main(void)
{
    int i;
    for (i = 1; i <= 5; ++i) {
        float a;
        printf("A:");
        scanf_s("%f", &a);
        float b;
        poweraA3(a, &b);
        printf("B: %f\n", b);
    }
    return 0;
}