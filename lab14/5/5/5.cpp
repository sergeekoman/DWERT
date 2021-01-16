#include <stdio.h>
#include <math.h>
#include <locale.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b;
    printf("A:");
    scanf_s("%i", &a);

    printf("B:");
    scanf_s("%i", &b);
    while ((a != 0) & (b != 0)) {
        if (a > b) a = a % b;
        else b = b % a;
    }
    printf("%i\n", a + b);
    return 0;
}