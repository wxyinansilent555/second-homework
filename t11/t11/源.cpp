#include<stdio.h>

//µİ¹éËã·¨

int fib(int n)
{
	if (n == 1 || n == 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}
int main()
{
	int n;
	scanf_s("%d", &n);
	printf(" % d\n", fib(n));
	return 0;
}