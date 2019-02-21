/*
	2019年2月18日17:35:12
	功能：多级指针举例子
*/
#include <stdio.h>
 
int main (void)
{
	int i=10;
	int *p = &i;//p存放的是i的地址，p的类型是int* 类型
	int ** q =&p;//q存放的是 p的地址，所以q的类型是int**类型。
	int *** r = &q;//r存放的是q的地址，所以r的类型是int ***类型。

	//r = &p;是错误的，因为r是int类型，r只能存放int**类型变量的地址。
	printf("i = %d\n",***r);//***r可以换成*p **q 
	printf("p = %d\n",**r);//**r可以换成*q 
	printf("q = %d\n",*r);//*r可以换成q
	printf("r = %d\n",r);
	return 0;
}

/*
在vc6++中的结果为：
-----------------
i = 10
p = 1703740
q = 1703736
r = 1703732
Press any key to continue
-------------------
*/