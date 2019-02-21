/* 
	2019年2月2日09:19:09
	功能：if循环的次数与流程。
*/
#include <stdio.h>

int main (void)
{
	int i;
	int sum=0;

	for(i=3;i<=10;++i)
	{
		if (i%3 == 0)//如果i被3整除
			sum = sum +i;
		printf("sum=%d\n",sum);
	}
	//如果输出在这里：只输出 sum=18
	return 0;




}
/*在vc6++中的输出结果为：
-----------------------
sum=3
sum=3
sum=3
sum=9
sum=9
sum=9
sum=18
sum=18
Press any key to continue
-------------------------
因为：if只能控制一个语句，if循环了8次，所以输出了8个sum等于什么，
345是sum=3，
678是sum=9,
910是sum=18
*/