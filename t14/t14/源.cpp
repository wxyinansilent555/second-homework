#include<stdio.h>

/*˫����δ��ɣ�Ŀǰֻ������������*/

int calc_pow(int x, int n) 
{
	if (n == 0)
		return 1;
	else
		return x * calc_pow(x, n - 1);
}

int main()
{
	int x;
	int n;

	scanf_s("%d%d", &x, &n);
	printf("%d\n", calc_pow(x, n));

	return 0;
}