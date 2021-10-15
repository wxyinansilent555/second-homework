#include<stdio.h>

int main()
{
    double a, b;           //双精度实数型
    scanf_s("%lf", &a);
    if (a < 0) 
    {
        printf("无效的值！\n");
    }
    else if (a <= 50)
    {
        b = 0.53 * a;
        printf("cost = %.2f\n", b);
    }
    else {
        b = 0.58 * a - 0.05 * 50;
        printf("cost = %.2f\n", b);
    }
}
