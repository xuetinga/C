/*
	2019年1月20日19.16
	功能：scanf的用法
*/
# include <stdio.h>

int main (void)
{
	int i;
	scanf("%d",&i);//&是一个获取地址的符号，是表示i的地址。输入的值把值赋予给i
	printf("i=%d\n",i);

	return 0;
}

/* 
在vc6++中的结果为：
------------------
1256221
i=1256221
Press any key to continue
------------------

*/