/*
	2019��2��12��09:52:56
	���ܣ��������
*/

#include <stdio.h>
int main (void)
{
	int val;
	int m ;
	int sum = 0;

	printf("��������Ҫ�жϵ����֣�");
	scanf("%d",&val);

	m = val;//12321
	while (m)
	{
		sum = sum *10 + m%10;//mȡ��10 ���������һλ������1 2 3 2 1
		m/= 10 ;//m���ε��� 1232 123 12 1 0 
	}
	if (sum==val)
		printf("yes!\n");
	else
		printf("no!\n");


 	return 0;
}
/*
��vc6++�еĽ��Ϊ��
------------------------
��������Ҫ�жϵ����֣�12321
yes!
Press any key to continue

------------------------
*/