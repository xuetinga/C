/*
	2019��2��12��15:34:11
	 ���ܣ�switch���÷�
*/
# include <stdio.h>

int main (void)
{
	int val;

	printf("��������Ҫ�����¥�㣺");
	scanf("%d",&val);
	
	switch(val)
	{
	case 1 :
		printf("1�㿪��\n");
		break;
	case 2 :
		
		printf("2�㿪!\n");
		break;
	case 3 :
		printf("3�㿪��\n");
		break;
	default:
		printf("û�иǵ���һ�㣡\n");
		break;

	}
}
/*
��vc6++�еĽ��Ϊ��
-------------------
��������Ҫ�����¥�㣺5
û�иǵ���һ�㣡
Press any key to continue
-------------------
ԭ���ҵ���������123��default�������¿�ʼִ�С�
û��break����᲻һ���ء�
*/
