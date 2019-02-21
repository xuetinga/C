/*
	2019年2月16日13:37:13
	功能：解释全局变量和局部变量
*/
#include <stdio.h>

int k =1000;//全局变量。可以在f内部使用，

void g()
{
	printf("k=%d\n",k);
}//此函数在k的上面会出错，因为k这个全局变量不能在上面使用，所以要把g放在k的下面。
//所以全局变量的使用位置是他的下面
void f(void)
{
	g();//f调用g
	printf("k=%d\n",k);
}

int main (void)
{
	int i=10;
	
	f();
	return 0;
}
/*
在vc6++中的结果为：
----------------
k=1000
k=1000
Press any key to continue

----------------
*/