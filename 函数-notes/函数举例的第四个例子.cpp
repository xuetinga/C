/*
	2019年2月15日15:14:04
	功能：判断一个数是否素数，用函数判断是否是素数
*/

/*
#include <stdio.h>

int main (void)
{
	int val;
	int i;

	scanf("%d",&val);
	for(i=2;i<val;++i)
	{
		if(val%i == 0)
			break;//只要有一个能整除，这个for循环就停止了；只要不是因为break停止的循环，
				//这个数就是val本身。
	}
	if (i == val)
		printf("yes！\n");
	else
		printf("no!\n");


}
	return 0;

*/
/*
在vc6++中的结果为：
--------------------
15
no!
Press any key to continue
--------------------
*/
#include <stdio.h>

bool IsPrime(int val)//括号里面没有形参是因为不用接受数据去判断,这里需要接受数据去判断。
{
	
	int i;

	for (i=2;i<val;++i)
	{
		if (val % i == 0)
			break;
	}
	if (i == val)
		return true ;
	else
		return false;
}//注意一定要放在main函数前面，放在后面要有说明。

int main (void)
{
	int m;
	

	scanf ("%d",&m);

	if (IsPrime(m))//结果就是对和错，因为这个函数只返回对和错。这里是调用函数
		printf("yes\n");
	else
		printf("no\n");

}
/*
在vc6++中的结果为：
------------------------
15
no
Press any key to continue
整个程序的顺序，从main开始，然后从键盘输入了一个值，判断哪个函数有无，把m的值赋给val。在代入到那个函数中去判断结果。
--------------------------
*/


