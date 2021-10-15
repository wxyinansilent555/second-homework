#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int sum;//sum是所有素数的和
int a[1001], i, j;

int main(int argc, char* argv[])
{
	
	for (i = 0; i < 1001; i++) //给数组a赋值
	{
		a[i] = i;
	}
	for (i = 2; j <= sqrt(i); j++)    //从2开始遍历
	{
		for (j = 2; j <= sqrt(i); j++)
		{
			if (a[i] % j == 0)//判断是否是素数
			{
				a[i] = 0;
			}
		}
	}
	for (i = 2; i < 1001; i++)
	{
		if (a[i] != 0)
		{ 
			sum += a[i];
		}
	}
	printf("%d", sum);
	return 0;
}