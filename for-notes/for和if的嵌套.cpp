/* 
	2019��2��2��09:19:09
	���ܣ�ifѭ���Ĵ��������̡�
*/
#include <stdio.h>

int main (void)
{
	int i;
	int sum=0;

	for(i=3;i<=10;++i)
	{
		if (i%3 == 0)//���i��3����
			sum = sum +i;
		printf("sum=%d\n",sum);
	}
	//�����������ֻ��� sum=18
	return 0;




}
/*��vc6++�е�������Ϊ��
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
��Ϊ��ifֻ�ܿ���һ����䣬ifѭ����8�Σ����������8��sum����ʲô��
345��sum=3��
678��sum=9,
910��sum=18
*/