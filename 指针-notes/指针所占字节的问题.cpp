/*
	2019年2月18日09:56:15
	功能：验证指针占几个字节
*/
# include <stdio.h>

int main (void)
{
	char ch = 'A';
	int i = 99;
	double x = 66.6;
	char *p = &ch;
	int * q = &i;
	double * r = &x;

	printf("%d %d %d\n",sizeof(p),sizeof(q),sizeof(i));
	printf("%d\n",q);

	return 0;
}
/*
在vc6++中的结果为：
---------------
4 4 4
Press any key to continue
都指向了每个内存单元中的一个字节所以都是4。
---------------

*/