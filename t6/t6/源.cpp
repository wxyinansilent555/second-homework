#include<stdio.h>

int a, b, c;
int sum = 152;

int main()
{
	a = sum % 10;
	b = sum / 10 % 10;
	c = sum / 100;
	printf("152  =��λ����%d+ʮλ����%d*10+��λ����%d*100", a, b, c);
	return 0;
}