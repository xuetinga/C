/*
	2019年2月11日14:50:14
	功能：测试逗号表达式
*/
#include <stdio.h>

int main (void)
{
	int i ;
	int j = 2;

	i=(j++,++j,j=j+2,j-3);//如果这里是j+=2（j=j+2）的意思,结果为3.
	printf("%d\n",i);

	return 0;
}
/*
在vc6++中的运行结果为：
-----------------------
1
Press any key to continue
-----------------------
原理：虽然在第三个j等于6，那只是个临时值，不会赋予给后面，所以后面的j还是4，结果为1

*/