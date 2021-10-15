#include<stdio.h>

int main()
{
    int N, i;
    double sum = 0.0;    //定义sum变量获取和
    int den = 1;         //分母的值

    scanf_s("%d", &N);   

    for (i = 1; i <= N; i++)
    {
        sum = sum + 1.0 / den;    //1.0不然得不到精度值orz查了好久。。。
        den = den + 1;            //分母一次循环加1
    }
    printf("sum = %lf", sum);   
    return 0;
}
