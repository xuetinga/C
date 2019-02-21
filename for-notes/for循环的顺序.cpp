/*
	2019年1月27日10:18:36
	功能：for循环的顺序
*/

#include <stdio.h>

int main (void)
{
	int i;
	int sum = 0;

	for (i=1;i<=4;++i)
		//先执行i=1，在执行i<=4，在执行sum的那一个，在执行++i，
		//注意一次循环结束的时候是执行i+1之后。当I<=4不成立之后，就执行printf
		sum = sum + i;
	printf("sum = %d\n",sum);

	return 0;


}
/*
在vc6++中的运行结果为：
-----------------------
sum = 10
Press any key to continue
------------------------
*/