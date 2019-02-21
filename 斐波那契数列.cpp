/*
	2019年2月12日10:10:03
	功能：斐波拉契数列
*/
#include <stdio.h>

int main (void)
{
	int i;
	int n ;
	int f1 ,f2, f3;
	
	f1 = 1;
	f2 = 2;
	printf("请输入你需要求得项的序列：");
	scanf("%d",&n);
	
	if (1 == n)
	{
		f3 = 1;
	}
	else if(2 == n )
	{
		f3 = 2 ;
	}
	else
	{
		for (i=3; i<=n ;++i)
		{
			f3 = f1+f2;
			f1 = f2;
			f2 = f3;
		}
		//在i等于4的时候已经循环了一次，f1=2，f2=3了。
		//当i等于6 的时候 他也会循环，直到不满足i<=n的时候

	}

	printf("%d\n",f3);
	return 0;
}
/*
在vc6++中的结果为：
--------------------------
请输入你需要求得项的序列：5
8
Press any key to continue
原理：
1> i=3 3<=5 
   f3=1+2=3 f1=f2=2 f2=f3=3 ++i i=4
2> i=4 4<=5
   f3=2+3=5 f1=f2=3 f2=f3=5 ++i i=5
3> i=5 5<=5
   f3=3+5=8 f1=f2=5 f2=f3=8 ++i i=6
   停止循环  输出f3等于8
--------------------------
*/