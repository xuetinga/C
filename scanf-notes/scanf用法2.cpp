/*
	2019��1��20��19.16
	���ܣ�scanf���÷�2
*/
# include <stdio.h>

int main (void)
{
	int i;
	printf("������һ��ǰ���m�����֣�");
	scanf("m%d",&i);//&��һ����ȡ��ַ�ķ��ţ��Ǳ�ʾi�ĵ�ַ�������ֵ��ֵ�����i
	printf("i=%d\n",i);

	return 0;
}

/* 
��vc6++�еĽ��Ϊ��
-------------------
������һ��ǰ���m�����֣�m12
i=12
Press any key to continue
-------------------
*/