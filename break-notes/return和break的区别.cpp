/*
	2019年2月15日14:42:56
	功能：return和break的区别
*/
#include <stdio.h>

void f(void)//括号里面的void表示里面没有数据。
{
	int i;

	for (i=0;i<5;++i)
	{
		printf("大家辛苦了\n");
		//break;结果是大家们辛苦了，同志们好！
		return ;//结果只有大家辛苦了，所以return是用来终止函数的。
	}
	printf("同志们好!\n");
}

int main (void)
{
	f();
	return 0;
}
/*
在vc6++中的结果为：
--------------------
大家辛苦了
Press any key to continue
--------------------
*/