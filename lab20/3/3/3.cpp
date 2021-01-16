#include <stdio.h>
#include <math.h>
#include <locale.h>
using namespace std;

int main(void)
{
	int a[20], b[20];
	int n, k;
	printf("N: ");
	scanf_s("%i", &n);
	printf("K: ");
	scanf_s("%i", &k);

	int i;
	for (i = 0; i < n; ++i) {
		printf("a[%i] : ", i + 1);
		scanf_s("%i", &a[i]);
	}

	int i2 = -1, len1series = 1, lenkseries = 0, endkseries, nk = 1;

	for (i = 0; i < 20; ++i) b[i] = 0;

	for (i = 1; (i < n) && (nk <= k); ++i) {
		if (a[i - 1] != a[i]) nk++;
		if (nk == 1) len1series++;
		if (nk == k) {
			lenkseries++;
			b[++i2] = a[i];
		}
		endkseries = i;
	}

	for (i = len1series, nk = 1; (i < n) && (i < endkseries - lenkseries); ++i) {
		if (a[i - 1] != a[i]) nk++;
		b[++i2] = a[i];
	}

	for (i = 0; i < len1series; ++i) b[++i2] = a[i];

	for (i = endkseries; i < n; ++i) b[++i2] = a[i];

	for (i = 0; i < n; ++i) a[i] = b[i];

	for (i = 0; i < n; ++i) printf("a  %i : %i\n", i + 1, a[i]);
	return 0;
}