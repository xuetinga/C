/*
	2019年2月20日11:22:00
	功能：补码在其他进制转换为二进制中的应用
*/
# include <stdio.h>

int main (void)
{
	int i =037777777773;//注意前面是0；
	int j =0xfffffffb;//注意前面必须要标出数据类型
	printf("八进制转二进制的结果是是%d\n",i);
	printf("十六进制转二进制的结果是%d\n",j);
	return 0;
}
/*
在vc6++中的结果为：
-----------------
八进制转二进制的结果是是-5
十六进制转二进制的结果是-5
Press any key to continue
原理：在计算机内部，将输入的八进制和十六进制的负数，先自动转换为二进制，这时的二进制
会自动求出他们的补码，他们的补码的补码就是这个十进制数的原码，然后在转换就输出了。
注意：计算机内部是以补码进行运算的。
当输入八进制十六进制的时候，要根据定义的数据类型补全字节数。
-----------------
*/
