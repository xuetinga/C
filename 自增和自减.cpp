/*
	2019年2月11日09:49:22
	 功能：测试自增和自减
*/
#include <stdio.h>

int main (void)
{
	int i;
	int j;
	int k;
	int m;

	i = j = 3;
	k = i++;
	m = ++j;

	printf("i=%d,j=%d,k=%d,m=%d\n",i,j,k,m);

	return 0;
}
/*
在vc6++中的运行结果是：
-----------------------
i=4,j=4,k=3,m=4
Press any key to continue

-----------------------


*/
