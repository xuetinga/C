/*
	2019��2��15��15:12:29
	���ܣ����ֺ����ıȽ�
*/
#include <stdio.h>

void max1(int i,int j)
{
	if (i>j)
		printf("%d\n",i);
	else
		printf("%d\n",j);
}//�����ֱ�Ӵ�ӡ���,���������ֵ�Ͷ����ֵ���д���

int main (void)
{
	int a,b,c,d,e,f;
	a=1,b=2,c=3,d=4,e=5,f=6;

	max(a, b);
	max(c, d);
	max(e, f);
}


int  max2(int i, int j)
{
	if (i<j)
		return i;
	else
		return j;
}//����ǵȴ�������������������д�max2 �Ϳ��ԡ������������ֵ������ʽ������main������

int main (void)
{
	int a,b,c,d,e,f;
	a =1,b=2,c=3,d=4,e=5,f=6;
	printf("%d\n",max2(a,b));
	printf("%d\n",max2(c,d));
	printf("%d\n",max2(e,f));
	return 0;
}

/*
��vc6++�еĽ��Ϊ��
-----------------
2
4
6
Press any key to continue

-----------------
*/