#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int sum;//sum�����������ĺ�
int a[1001], i, j;

int main(int argc, char* argv[])
{
	
	for (i = 0; i < 1001; i++) //������a��ֵ
	{
		a[i] = i;
	}
	for (i = 2; j <= sqrt(i); j++)    //��2��ʼ����
	{
		for (j = 2; j <= sqrt(i); j++)
		{
			if (a[i] % j == 0)//�ж��Ƿ�������
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