#include<stdio.h>

int a,b,c;

int main() {
	printf("����������\n");
	scanf_s("%d", &a);
	b= a / 5;
	c = a - (b * 5);
	if (c >= 3)
		printf("ɹ��\n");
	else
		printf("����\n");
	return 0;
}