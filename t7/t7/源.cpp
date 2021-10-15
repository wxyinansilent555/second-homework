#include<stdio.h>

int a,b,c;

int main() {
	printf("请输入天数\n");
	scanf_s("%d", &a);
	b= a / 5;
	c = a - (b * 5);
	if (c >= 3)
		printf("晒网\n");
	else
		printf("打鱼\n");
	return 0;
}