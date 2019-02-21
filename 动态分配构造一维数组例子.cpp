/*
	2019年2月18日15:44:13
	功能：比较静态和动态构造数组，能够体现动态内存的3个优点，没有体现那个可以跨函数使用
*/
#include <stdio.h>
#include <malloc.h>

int main (void)
{
//	int a[5];//静态构造数组
	//如果int占四个字节的话，则本数组共有20个字节，每四个字节被当做了一个int变量来使用
	int len ;
	int *parr;
	int i;

	printf("请输入您要存放的元素的个数：");
	scanf("%d",&len);
	parr = (int*)malloc(4 * len);
		/*动态构造一维数组名字是parr，长度是len，每个元素是int类型。
		  parr存放的第一个字节的地址，但是指向的是前四个字节。
		  找的了20个字节的内存空间分配给了此程序。
		  类似于这样写 int parr[len];
		*/

	//对动态一维数组进行赋值
	for (i=0;i<=len;++i)
		scanf("%d",&parr[i]);
	
	//对动态一维数组进行输出
	printf("一维数组的内容是：");
	for (i=0;i<len;++i)
		printf("%d\n",parr[i]);
//	free(parr);//释放掉分配的内存空间,会被显示报错。


	return 0;
}
/*
在vc6++中的结果为：
-------------------------
请输入您要存放的元素的个数：5
2 3 5
2 5 6 3 2
一维数组的内容是：2
3
5
2
5
Press any key to continue
-------------------------
*/