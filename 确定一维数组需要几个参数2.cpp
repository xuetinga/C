/*
	2019年2月17日17:47:03
	功能：重点理解指针和数组下标的关系，要明白parr[3]和a[3]是同一个变量，
	不能说他们两个指向的是同一个，而是parr3本身就代表了a3.
*/
#include <stdio.h>

void f(int *parr,int len)
{
	parr[3] = 88;//等价于*（parr+3)
}

int main (void)
{
	int a[6] = {1,2,3,4,5,6};

	printf("%d\n",a[3]);
	
	f(a,6);//a发送给了parr，a的地址就变成了parr的地址
	//a指a[0],parr也指向a[0]，parr是a的拷贝。
	printf("%d\n",a[3]);//等价于*(a+3）不能看成a[3]是第四个元素。

	return 0;
}
/*
在vc6++中的结果为：
-----------------
4
88
Press any key to continue
-----------------
*/