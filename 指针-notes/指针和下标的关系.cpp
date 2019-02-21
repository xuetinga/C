/*
	2019年2月17日16:49:34
	功能：探索指针和下标的关系
*/

#include <stdio.h>

int main (void)
{
	int a[5]={1,2,3,4,5};
	printf("%d\n",&a[0]);
	printf("%d\n",&a[1]);


	return 0;
}
/*
在vc6++中的结果为：
------------------
1703724
1703728
Press any key to continue
原理应该是一个是四个字节。
------------------
*/