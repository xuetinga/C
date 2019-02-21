/*
	2019年2月12日09:52:56
	功能：求回文数
*/

#include <stdio.h>
int main (void)
{
	int val;
	int m ;
	int sum = 0;

	printf("请输入您要判断的数字：");
	scanf("%d",&val);

	m = val;//12321
	while (m)
	{
		sum = sum *10 + m%10;//m取余10 出来了最后一位依次是1 2 3 2 1
		m/= 10 ;//m依次等于 1232 123 12 1 0 
	}
	if (sum==val)
		printf("yes!\n");
	else
		printf("no!\n");


 	return 0;
}
/*
在vc6++中的结果为：
------------------------
请输入您要判断的数字：12321
yes!
Press any key to continue

------------------------
*/