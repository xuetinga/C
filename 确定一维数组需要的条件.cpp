/*
	2019年2月17日17:33:01
	功能：看看用指针确定一维数组需要几个条件
*/
#include <stdio.h>
//f函数可以输出任何一个一维数组的值

void f(int *parr,int len)
{
	int i;

	for (i=0;i<len;++i)
		printf("%d ",*(parr+i));//*parr *parr+1 *parr+2
	printf("\n");
}
int main (void)
{
	int a[5] = {1,2,3,4,5};
	int b[6] = {-1,-2,-3,-4,5};
	int c[100] = {1,99,19,2};

	f(a,5);
	f(b,6);
	f(c,10);

	return 0;
}
/*
在vc6++中的结果为：
----------------------
1 2 3 4 5
-1 -2 -3 -4 5 0
1 99 19 2 0 0 0 0 0 0
Press any key to continue
为什么后面都是0？因为都没有定义。就是零垃圾值。
----------------------
*/