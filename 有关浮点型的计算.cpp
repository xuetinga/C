/*
	2019��2��3��12:48:39
	���ܣ��йظ���ļ���
*/

#include <stdio.h>
int main(void)
{
	int i;
	float sum = 0;

	for (i=1;i<=100;++i)
	{
		sum = sum + 1.0/i;//������д��1/(float)(i)������ǿ��ת����������
	}
	printf("sum=%f\n",sum);
	return 0;
}
/*
��vc6++�е�������Ϊ��
------------------
sum=5.187378
Press any key to continue
------------------
*/