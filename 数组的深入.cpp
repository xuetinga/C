/*
	2019年2月17日16:37:56
	功能：数组的含义
*/
# include <stdio.h>

int main (void)

{
	int a[5];
	int b[5];
	printf("%#X\n",&a[0]);
	printf("%#X\n",a);

	return 0;
}
/*
在vc6++中的结果为：
------------------
0X19FF2C
0X19FF2C
Press any key to continue
------------------
总结：一维数组名是存放的一维数组第一个元素的地址。
*/