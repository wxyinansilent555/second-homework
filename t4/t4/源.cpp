#include <stdio.h>
#include <math.h>    //pow函数

int main()
{
    float m, y, r, i;     //分别输入本金，年，利率
    printf("请输入本金，年，利率\n");
    scanf_s("%f %f %f", &m, &y, &r);
    i = m * pow(1 + r, y) - m;
    printf("interest = %.2f\n", i);
    return 0;
}
