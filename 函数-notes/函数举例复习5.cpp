/*
	2019��2��15��15:52:01
	���ܣ����������
*/
#include <stdio.h>

int f(int i)//���intΪvoid�ǲ��Ե�
{
	return 10;//return ��ֹ��������������� ˭���õ��� �Ǹ���������ֵ10.
}
int main(void)
{
	int i =99;
	printf("%d\n",i);
	i = f(5);//����5�������Ǻ������i��Ӧ�ģ�������һ�����ܵ�ֵ��
	printf("%d\n",i);

	return 0;
}
/*
��vc6++�еĽ��Ϊ��
------------------
99
10
Press any key to continue

------------------
*/