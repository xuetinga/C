/*
	2019年2月18日09:12:38
	功能：指针变量的减法
*/
#include <stdio.h>

int main (void)
{
	/*
	int i =10;
	int j =4;
	int *p = &i;
	int *q = &j;//这里的含义是让pq不是野指针
	为什么怎样修改ij的值，pq的值都不变?
	因为pq是取得ij的地址，地址是一直不会变的
	*/
	
	int *p = NULL;
	int *q = NULL;
	//p=1703720 q=1703732
	//pq为空指针的时候与不是空指针的时候的值不一个样
	//因为分配的内存不一个样，有重叠的地方是因为a数组并没有改变。
	
	int a[5];
	p = &a[1];
	q = &a[4];
	printf("p=%d  q=%d\n",p,q);
	printf("p和q所指向的单元相隔%d个单元\n",q-p);

	//p-q没有实际意义。
	return 0;
}
/*
在vc6++中的结果为：
-------------------
p=1703712  q=1703724

p和q所指向的单元相隔3个单元
Press any key to continue
-------------------
*/