#include <stdio.h>

int factorial(int n) {
	int f = 1;
	for (int i = 2; i <= n; ++i) f *= i;
	return f;
}

int main() {
	long long n;
	if (printf("Enter a non-negative integer: ") < 0) return 0;
	if (scanf("%lld", &n) != 1) return 0;

	if (n < 0) {
		printf("%lld is not a Strong number\n", n);
		return 0;
	}

	long long temp = n;
	long long sum = 0;

	if (temp == 0) {
		sum = factorial(0); /* 0! = 1 */
	}

	while (temp > 0) {
		int d = (int)(temp % 10);
		sum += factorial(d);
		temp /= 10;
	}

	if (sum == n)
		printf("%lld is a Strong number\n", n);
	else
		printf("%lld is not a Strong number\n", n);

	return 0;
}
