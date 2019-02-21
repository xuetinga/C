/*
	2019年2月17日16:08:56
	功能：被调函数修改实参的值
*/
#include <stdio.h>

void g(int * p,int *q)
{
	* p=1;
	* q=2;
}

int main (void)
{
	int a = 3,b = 5;
	g(&a,&b);//a和p不是一个变量。
	printf("%d %d\n",a,b);
	return 0;
}
/*
在vc6++中的结果为：
------------------
1 2
Press any key to continue
------------------
*/
