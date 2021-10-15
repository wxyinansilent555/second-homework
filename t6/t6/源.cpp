#include<stdio.h>

int a, b, c;
int sum = 152;

int main()
{
	a = sum % 10;
	b = sum / 10 % 10;
	c = sum / 100;
	printf("152  =个位数字%d+十位数字%d*10+百位数字%d*100", a, b, c);
	return 0;
}