#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	int fn = 1;  //���������ܶ��� 
	int fn_1 = 1;  //�ϸ��������ܶ��� 
	int fn_2 = 1;  //���ϸ��������ܶ��� 
	int N;      //����Ҫ�ﵽ�����Ӷ��� 
	int month = 1;  //�����ǵڼ��� 
	int ret = 1;    //��Ҳ���·ݣ������������յĽ�� 
	printf("������Ҫ�ﵽ������\n");
	scanf_s("%d", &N);  
	while (fn < N)   
	{
		if (month >= 3) {   
			fn = fn_1 + fn_2;  //�ӵ������¿�ʼ�������������������ϸ��º����ϸ��µ�����֮�� 
			fn_2 = fn_1;   
			fn_1 = fn;     

		}
		ret = month++;
	}
	printf("%d", ret);  //��ӡ���յĽ�� 
	return 0;
}
