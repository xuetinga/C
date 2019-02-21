/*
	2019年2月18日21:35:49
	功能：说明静态分配不可以跨函数使用
*/

#include <stdio.h>
void f (int **q)//q是个指针变量，无论q是什么类型的变量，都只占四个字节。
{
	int i =5;
	*q = &i;
}
//q i都是静态变量，执行完之后空间释放了，所以下面的p在读就是没有逻辑的了。
//但是p可以保存i的地址。
int main (void)
{
	int *p;

	f(&p);
	printf("%d\n",*p);//本语句语法没有问题，但逻辑上有问题。内存越界，访问了一个不属于你的内存。
	return 0;
}
/*
在vc6++中的结果为：
-----------------
会被报错
-----------------

*/