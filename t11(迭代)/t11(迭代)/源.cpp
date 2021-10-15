#include<stdio.h>

int main() {
	printf("1-10内的斐波那契数列计算");
	int i, n, num[10];
	num[1] = 1;
	num[2] = 1;
	for (i = 3; i < 10; i++)
		num[i] = num[i - 1] + num[i - 2];
	scanf_s("%d", &n);

	printf("%d", num[n]);
	return 0;
}