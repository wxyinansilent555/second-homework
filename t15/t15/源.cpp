#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	int fn = 1;  //本月兔子总对数 
	int fn_1 = 1;  //上个月兔子总对数 
	int fn_2 = 1;  //上上个月兔子总对数 
	int N;      //我们要达到的兔子对数 
	int month = 1;  //本月是第几月 
	int ret = 1;    //这也是月份，它是我们最终的结果 
	printf("请输入要达到的数！\n");
	scanf_s("%d", &N);  
	while (fn < N)   
	{
		if (month >= 3) {   
			fn = fn_1 + fn_2;  //从第三个月开始，本月兔子数量等于上个月和上上个月的数量之和 
			fn_2 = fn_1;   
			fn_1 = fn;     

		}
		ret = month++;
	}
	printf("%d", ret);  //打印最终的结果 
	return 0;
}
