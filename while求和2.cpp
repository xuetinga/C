/*
	2019年2月11日16:13:01
	功能：测试1到100的和用while
*/
#include <stdio.h>
int main (void)
{
	int i;
	int sum = 0;
	i = 1;
	while(i<=100);
	{
		sum = sum +i;
		i++;
	}

	printf("sum=%d\n",sum);

	return 0;
}
/*
在vc6++中的结果为：
-----------------------
sum=5050
-----------------------
*/
