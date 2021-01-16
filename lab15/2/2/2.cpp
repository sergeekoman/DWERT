#include <stdio.h>
#include <math.h>
#include <locale.h>
using namespace std;
int sign(float x) {
    if (x < 0) { return -1; }
    if (x == 0) { return 0; }
    if (x > 0) { return 1; }
}

int main(void)
{
    float a, b;
    printf("A:");
    scanf_s("%f", &a);
    printf("B:");
    scanf_s("%f", &b);

    printf("Sign(A)+Sign(B):%i\n", sign(a) + sign(b));

    return 0;
}