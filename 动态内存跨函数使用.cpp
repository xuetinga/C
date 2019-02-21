/*
	2019年2月18日21:54:45
	功能：动态内存跨函数使用
*/

#include <stdio.h>
#include <malloc.h>
void f(int ** q)
{
	*q = (int *)malloc(sizeof(int));
		//等价于p = (int *)malloc(sizeof(int));动态分配四个字节的空间
	//q = 5;是错的
	//*q = 5;是错的
	**q =5;//是对的
}
int main (void)
{
	int *p;
	f(&p);
	printf("%d\n",*p);
	return 0;
}
/*
在vc6++中的结果为：
------------------------
5
Press any key to continue
------------------------
*/