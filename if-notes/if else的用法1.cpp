/*
	时间：2019年1月21日19.45
	  功能：if else的用法。
*/
# include<stdio.h>
int main(void)
{
	int i,j;
	scanf("%d %d",&i ,&j);

	if (i>j)
		printf("i大于j\n");
	else
		printf("i小于j\n");
		printf("nihao \n");
	return 0;
}
/*
在vc6++中的运行结果为：
------------------------
1 2
i小于j
nihao(原理：跟if一个样，只控制一个。)
Press any key to continue
-------------------------
*/