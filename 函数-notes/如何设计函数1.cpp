/*
	2019年2月16日10:28:17
	功能：用两个函数求素数
*/
#include <stdio.h>
//这个函数的功能是判断是否是素数，是返回true,不是返回false、 
bool IsPrime(int m)
{
	int i;
	for (i=2;i<m;++i)
	{
		if (0 == m%i)
			break;
	}
	if (i == m)
		return true;
	else 
		return false;
}


//本函数的功能是把1到n之间是不是素数，的所有的素数在显示器中输出

void TraverseVal (int n)
{
	int i;
	for (i=2;i<=n;++i)
	{
		if (IsPrime(i))
			printf("%d\n",i);
	}
}
int main(void)
{
	int val;

	scanf("%d",&val);
	TraverseVal(val);//有这个函数不用写for循环

	return 0;
}
/*
在vc6++中的结果为：
-------------------
15
2
3
5
7
11
13
Press any key to continue

-------------------
*/