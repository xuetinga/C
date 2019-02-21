/*
	2019年2月14日13:58:19
	功能：数组是如何使用的
*/
#include <stdio.h>

int main(void)
{
	int a[5] = {1,2,3,4,5};
		//a是数组的名字，5是表示数组元素的个数。
	int i;

	for (i=0;i<5;++i)
		printf("%d\n",a[i]);
	printf("%d\n",a[100]);//这里应该是报错了。

	return 0;
}
/*
在vc6++中的结果为：
----------------------
1
2
3
4
5
4048
Press any key to continue
----------------------
*/