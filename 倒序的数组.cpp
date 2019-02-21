/*
	2019年2月14日15:02:03
	功能：数组倒序如何操作
*/
#include <stdio.h>

int main (void)
{
	int a [7] = {1,2,3,4,5,6,7};
	int i, j ;
	int t;
	i=0;
	j=6;

	while(i<j)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;

		i++;//没有他们ij的值不变啊。
		--j;
	}

	for (i=0;i<7;++i)
		printf("%d\n",a[i]);
	return 0;
}
/*
在vc6++中的结果为：
----------------
7
6
5
4
3
2
1
Press any key to continue
----------------
*/