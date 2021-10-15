#include<stdio.h>
#include<math.h>

int max(int m, int n)//辗转相除法求最大公约数
{
	if (n == 0)
		return m;
	else
		return max(n, m % n);
}
int min(int m, int n)//求最小公倍数
{
	return m * n / max(m, n);
}
void main()
{
	int m, n, a, b;
	scanf_s("%d %d", &m, &n);
	a = max(m, n);
	b = min(m, n);
	printf("%d %d", a, b);
}
