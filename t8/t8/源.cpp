#include<stdio.h>
#include<math.h>

int main()
{
    int flag = 1, i = 1;
    double sum = 0, n = 1.0, eps;

    printf("请输入你需要达到的精度！\n");
    scanf_s("%lf", &eps);

    if (eps >= 1) //判断当eps大于等于1时临界情况
        printf("sum = %.6f", n);
    else
    {
        while (fabs(n) > eps)
        {
            n = flag * 1.0 / i;
            sum = sum + n;
            i += 3;
            flag = -flag;
        }
        printf("sum = %.6f", sum);
    }
    return 0;
}

