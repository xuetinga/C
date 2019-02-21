/*
	2019年2月18日18:00:09
	功能：多级指针修改值。
*/

#include <stdio.h>

void f(int ** q)
{
	**q = 1;
}

void g()
{
	int i = 10;
	int *p = &i;//p是int*类型，&p是int * *类型，
	printf("i1=%d\n",i);
	f(&p);//&p是取得i的地址的地址，是int**类型。
	printf("i2=%d\n",i);
}



int main (void)
{
	
	g();

	return 0;
}
/*
在vc6++中的结果为：
----------------
i1=10
i2=1
Press any key to continue
原理：main
函数调用g函数，g又调用f函数，将i的值修改，这是直接从地址级别去修改的，如果直接修改，f运行完了就完了
不会再把值返回，但是使用指针是直接从地址那个位置修改的。
因此：要用函数改变一个值，就要从地址处出发。
---------------
*/