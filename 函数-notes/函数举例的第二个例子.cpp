/*
	2019年2月15日14:12:10
	功能：函数举例子,不返回数据。
*/
#include <stdio.h>

int f(void)//括号中的void表示该函数不能接受数据，int表示函数返回值是int类的函数。
{
	return 10;//返回值是10，让主调函数返回值是10.
}//被调函数
int main (void)
{
	int j=88;
	
	j =f();
	printf("%d\n",j);

	return 0;
}//main是主调函数。
void g(void)//函数名前面的void表示该函数没有返回值
            //j = g()就是不对的，因为他没有返回值。

{
//	return 0;也是不对的因为没有返回值。
}
/*
在vc6++中的结果为：
----------------------------
10
Press any key to continue
----------------------------
*/