#include <stdio.h>

int main() 
{
	int n;
	float i, j, sum1 = 0, sum2 = 0; 

	printf("请输入需要计算的数n！\n");
	scanf_s("%d", &n);
	if (n % 2 == 0) {
		for (i = 1; i <= n / 2; i++) {
			sum1 += (2 * i - 1) / (4 * i - 3);
		}
		for (j = 1; j <= n / 2; j++) {
			sum2 += -(2 * j) / (4 * j - 1);
		}
	}
	else if (n % 2 == 1) {
		for (i = 1; i <= (n + 1) / 2; i++) {
			sum1 += (2 * i - 1) / (4 * i - 3);
		}
		for (j = 1; j < (n + 1) / 2; j++) {
			sum2 += -(2 * j) / (4 * j - 1);
		}
	}
	printf("%.3f", sum1 + sum2);
	return 0;
}