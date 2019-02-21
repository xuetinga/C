/*
	2019年2月15日14:29:30
	功能：函数返回值不一样返回哪一个
*/
#include <stdio.h>

int f()//这里是整型，以这里为主。
{
	return 10.5;//这里是浮点型
}

int main (void)
{
	int i =99;
	double x = 6.6;

	x = f();
	printf("%lf\n",x);

	return 0;
}
/*
在vc6++中的结果为：
------------------
10.000000
Press any key to continue
所以是返回函数前面的函数类型。
------------------
*/