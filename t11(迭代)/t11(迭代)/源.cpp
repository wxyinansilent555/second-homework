#include<stdio.h>

int main() {
	printf("1-10�ڵ�쳲��������м���");
	int i, n, num[10];
	num[1] = 1;
	num[2] = 1;
	for (i = 3; i < 10; i++)
		num[i] = num[i - 1] + num[i - 2];
	scanf_s("%d", &n);

	printf("%d", num[n]);
	return 0;
}