#include <stdio.h>
#include <math.h>
#include <locale.h>
using namespace std;
float fact2(int n) {
    int temp = 1;
    for (; n > 0; n -= 2) temp *= n;
    return temp;
}

int main(void)
{
    int i, n;
    for (i = 1; i <= 5; ++i) {
        printf("N:");
        scanf_s("%i", &n);
        printf("fact: %f\n", fact2(n));
    }
    return 0;
}