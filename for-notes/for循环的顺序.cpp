/*
	2019��1��27��10:18:36
	���ܣ�forѭ����˳��
*/

#include <stdio.h>

int main (void)
{
	int i;
	int sum = 0;

	for (i=1;i<=4;++i)
		//��ִ��i=1����ִ��i<=4����ִ��sum����һ������ִ��++i��
		//ע��һ��ѭ��������ʱ����ִ��i+1֮�󡣵�I<=4������֮�󣬾�ִ��printf
		sum = sum + i;
	printf("sum = %d\n",sum);

	return 0;


}
/*
��vc6++�е����н��Ϊ��
-----------------------
sum = 10
Press any key to continue
------------------------
*/