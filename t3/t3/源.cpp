#include<stdio.h>

int m, n;
int a, b, c;
int i;
int sum;

int main()
{
	
	printf("please enter two numbers!\n");
	scanf_s("%d%d", &m, &n);
	i = m;
	do
	{
		a = i % 10;                //��λ
		b = i / 10 % 10;         //ʮλ
		c = i / 100;     //��λ
		sum = (a * a * a) + (b * b * b) + (c * c * c);
		if (sum == i)
			printf("%d\n", i);

		i += 1;
	} 
	while (i <= n);
}