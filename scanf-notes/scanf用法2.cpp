/*
	2019年1月20日19.16
	功能：scanf的用法2
*/
# include <stdio.h>

int main (void)
{
	int i;
	printf("请输入一个前面带m的数字：");
	scanf("m%d",&i);//&是一个获取地址的符号，是表示i的地址。输入的值把值赋予给i
	printf("i=%d\n",i);

	return 0;
}

/* 
在vc6++中的结果为：
-------------------
请输入一个前面带m的数字：m12
i=12
Press any key to continue
-------------------
*/