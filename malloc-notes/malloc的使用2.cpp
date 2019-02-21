/*
	2019年2月18日14:47:54
	功能：malloc用法的例子修改一个值，一个函数对另一个函数里面的值进行修改
*/
# include <stdio.h>
# include <malloc.h>


void f(int *q)//q存放的是四个字节的地址

{
	//*p=200
	//q = 200;
	*q = 200;
	//free(q);把q所指向的内存释放掉，本语句的必须释放掉，否则会导致输不出200


}
int main(void)
{
	int * p = (int *) malloc (4);

	*p = 10;

	printf("%d\n",*p);//10
	f(p);//p是int类型,把p的值发送给了q，q是p的一个拷贝。
	printf("%d\n",*p);//200

	return 0;
}
/*
在vc6++中的结果为：
-------------------
0
200
Press any key to continue
-------------------
*/