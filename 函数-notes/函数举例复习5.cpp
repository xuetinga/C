/*
	2019年2月15日15:52:01
	功能：函数的理解
*/
#include <stdio.h>

int f(int i)//如果int为void是不对的
{
	return 10;//return 终止这个函数，并且向 谁调用的他 那个函数发送值10.
}
int main(void)
{
	int i =99;
	printf("%d\n",i);
	i = f(5);//这里5的作用是和上面的i对应的，让他有一个接受的值，
	printf("%d\n",i);

	return 0;
}
/*
在vc6++中的结果为：
------------------
99
10
Press any key to continue

------------------
*/