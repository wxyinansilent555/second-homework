#include<stdio.h>

int main()
{
    int N, i;
    double sum = 0.0;    //����sum������ȡ��
    int den = 1;         //��ĸ��ֵ

    scanf_s("%d", &N);   

    for (i = 1; i <= N; i++)
    {
        sum = sum + 1.0 / den;    //1.0��Ȼ�ò�������ֵorz���˺þá�����
        den = den + 1;            //��ĸһ��ѭ����1
    }
    printf("sum = %lf", sum);   
    return 0;
}
