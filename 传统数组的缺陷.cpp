/*
	2019年2月18日13:28:21
	功能：列举静态数组的弊端
*/
#include <stdio.h>

void f(void)
{
	int a[5] = {1,2,3,4.5};//20个字节的存储空间程序员无法手动释放它。
						  //他只能在本函数运行完毕时由系统自动释放。
}
int main (void)
{
	return 0;
}
/*
在vc6++中的结果为：
--------------------
Press any key to continue
--------------------
*/
