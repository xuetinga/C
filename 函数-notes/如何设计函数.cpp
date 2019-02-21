/*
判断输入的数包括的所有素数

#include <stdio.h>
int main(void)
{
	int val;
	int i;
	int j;

	scanf("%d",&val);
	for (i=2;i<=val;++i)
	{
		//判断i是否是素数，是输出，不是不输出
		for (j=2;j<i;++J)
		{
			if (0 == i%j)
				break;
		}
		if (j==i)
			printf("%d\n",i);
	}

	return 0;
}
这个函数有局限性，代码也不容易理解。
*/

/*
	2019年2月16日09:17:25
	功能：用函数实现判断函数
*/
/*
	2019年2月16日09:47:48
	求素数
*/
#include <stdio.h>

bool IsPrime(int m)
{
	int i;
	for (i=2;i<m;++i)
	{
		if (0 == m%i)
			break;
	}//berak终止了这个循环，这个循环停了。然后再往下走，ture的时候就是素数。
	if (i==m)
		return true;
	else
		return false;
}


int main (void)

{
	int val;
	int i;

	scanf("%d",&val);
	for (i=2;i<=val;++i)
	{
		if (IsPrime(i))//他是真才会执行。
			printf("%d\n",i);
	}
	return 0;
}
/*
在vc6++中的结果为：
-------------------

7
2
3
5
7
Press any key to continue
这个比较容易理解，代码的可重用性高，缺点是可重用性不是特别高，
比如求1000个数字，他们每个数字从1到它本身的所有素数，就要写1000次那个。
-----------------
*/
