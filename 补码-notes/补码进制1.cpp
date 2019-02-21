/*
	2019年2月20日10:55:27
	功能：补码中的十进制转换成其他进制。
*/
#include <stdio.h>

int main(void)
{
	int i =-5;
	printf("二进制是：%\n",i);//c语言中没有直接打印二进制的办法，要借助函数。
	printf("八进制是：%o\n",i);
	printf("十六进制是：%#x\n",i);
	int j =5;
	printf("二进制是：%\n",j);
	printf("八进制是：%o\n",j);
	printf("十六进制是：%#x\n",j);
	return 0;
}
/*
在vc6++中的结果为：
--------------------
二进制是：
八进制是：37777777773
十六进制是：0xfffffffb

  二进制是：
八进制是：5
十六进制是：0x5
Press any key to continue

进制转换的原理是：我们输入的是十进制数，但是计算机识别不了，只能识别二进制数，所以我们输入的
数要转换为二进制数，二进制数又有原码反码补码之分，而我们采用反码进行各种计算是最方便的，所以
在我们输入了一个十进制的负数之后，在计算机内部进行这样的运算，先求出他的原码，在转换为反码，
在转换为补码，根据补码都是01数字，每四位求一个数即是十六进制的数，若是八进制，则是三位一取。
当然还要看你定义的数据类型总共占多少个字节，正数的前面补零，负数的前面补一。
正数的原码反码补码都相同。

--------------------
*/