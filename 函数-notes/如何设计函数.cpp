/*
�ж����������������������

#include <stdio.h>
int main(void)
{
	int val;
	int i;
	int j;

	scanf("%d",&val);
	for (i=2;i<=val;++i)
	{
		//�ж�i�Ƿ�������������������ǲ����
		for (j=2;j<i;++J)
		{
			if (0 == i%j)
				break;
		}
		if (j==i)
			printf("%d\n",i);
	}

	return 0;
}
��������о����ԣ�����Ҳ��������⡣
*/

/*
	2019��2��16��09:17:25
	���ܣ��ú���ʵ���жϺ���
*/
/*
	2019��2��16��09:47:48
	������
*/
#include <stdio.h>

bool IsPrime(int m)
{
	int i;
	for (i=2;i<m;++i)
	{
		if (0 == m%i)
			break;
	}//berak��ֹ�����ѭ�������ѭ��ͣ�ˡ�Ȼ���������ߣ�ture��ʱ�����������
	if (i==m)
		return true;
	else
		return false;
}


int main (void)

{
	int val;
	int i;

	scanf("%d",&val);
	for (i=2;i<=val;++i)
	{
		if (IsPrime(i))//������Ż�ִ�С�
			printf("%d\n",i);
	}
	return 0;
}
/*
��vc6++�еĽ��Ϊ��
-------------------

7
2
3
5
7
Press any key to continue
����Ƚ�������⣬����Ŀ������Ըߣ�ȱ���ǿ������Բ����ر�ߣ�
������1000�����֣�����ÿ�����ִ�1���������������������Ҫд1000���Ǹ���
-----------------
*/
