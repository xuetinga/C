/*
	2019年2月3日12:48:39
	功能：有关浮点的计算
*/

#include <stdio.h>
int main(void)
{
	int i;
	float sum = 0;

	for (i=1;i<=100;++i)
	{
		sum = sum + 1.0/i;//还可以写成1/(float)(i)这里是强制转换数的类型
	}
	printf("sum=%f\n",sum);
	return 0;
}
/*
在vc6++中的输出结果为：
------------------
sum=5.187378
Press any key to continue
------------------
*/