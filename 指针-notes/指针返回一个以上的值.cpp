/*
	2019��2��17��16:08:56
	���ܣ����������޸�ʵ�ε�ֵ
*/
#include <stdio.h>

void g(int * p,int *q)
{
	* p=1;
	* q=2;
}

int main (void)
{
	int a = 3,b = 5;
	g(&a,&b);//a��p����һ��������
	printf("%d %d\n",a,b);
	return 0;
}
/*
��vc6++�еĽ��Ϊ��
------------------
1 2
Press any key to continue
------------------
*/
