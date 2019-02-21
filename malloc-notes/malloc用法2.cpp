/*
	2019年2月18日14:47:54
	功能：malloc用法的例子修改一个值
*/
# include <stdio.h>

void f(int *q)//q存放的是四个字节的地址

{
	//*p=200
	//q = 200;
	*q = 200;


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

-------------------
*/