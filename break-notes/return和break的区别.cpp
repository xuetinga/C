/*
	2019��2��15��14:42:56
	���ܣ�return��break������
*/
#include <stdio.h>

void f(void)//���������void��ʾ����û�����ݡ�
{
	int i;

	for (i=0;i<5;++i)
	{
		printf("���������\n");
		//break;����Ǵ���������ˣ�ͬ־�Ǻã�
		return ;//���ֻ�д�������ˣ�����return��������ֹ�����ġ�
	}
	printf("ͬ־�Ǻ�!\n");
}

int main (void)
{
	f();
	return 0;
}
/*
��vc6++�еĽ��Ϊ��
--------------------
���������
Press any key to continue
--------------------
*/