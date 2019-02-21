/*
	2019年2月15日16:14:50
	功能：一定要明白函数为什么出错
*/
#include <stdio.h>

void f (void);//函数声明，分号不能丢

int main(void)
{
	f();

	return 0;
}

void f (void)
{
	printf("护手霜\n");
}
/*
在vc6++中的结果为：
-------------------
护手霜
Press any key to continue

-------------------
*/