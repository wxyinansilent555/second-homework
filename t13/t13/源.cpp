#include<stdio.h>
#include<math.h>

int a, n;
int i = 0;
int item;
double sum = 0;

int main()
{
	printf("�����벻����9��������a��n!");
	scanf_s("%d%d", &a, &n);
	for (i = 1; i <= n; i++) {
		item = a * pow(10, i - 1) + item;
		sum += item;
	}
	printf("%.0lf", sum);
	return 0;
}