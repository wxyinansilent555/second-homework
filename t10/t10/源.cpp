#include<stdio.h>

int i = 0;
int j = 0;
int k;
int m;
void pyramid(int m)
{

	for (i = 1; i <= m; i++)
	{
		for (j = m - 1; j >= i; j--)
		{
			printf(" ");
		}
		for (k = 1; k <= i; k++) 
		{
			printf("%d", i);
		}
		printf("\n");
	}
}

int main()
{
     
	scanf_s("%d", &m);
	pyramid(m);

	return 0;

}

