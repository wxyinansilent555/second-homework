#include <stdio.h>
#include <math.h>    //pow����

int main()
{
    float m, y, r, i;     //�ֱ����뱾���꣬����
    printf("�����뱾���꣬����\n");
    scanf_s("%f %f %f", &m, &y, &r);
    i = m * pow(1 + r, y) - m;
    printf("interest = %.2f\n", i);
    return 0;
}
