/*
	2019��2��18��09:56:15
	���ܣ���ָ֤��ռ�����ֽ�
*/
# include <stdio.h>

int main (void)
{
	char ch = 'A';
	int i = 99;
	double x = 66.6;
	char *p = &ch;
	int * q = &i;
	double * r = &x;

	printf("%d %d %d\n",sizeof(p),sizeof(q),sizeof(i));
	printf("%d\n",q);

	return 0;
}
/*
��vc6++�еĽ��Ϊ��
---------------
4 4 4
Press any key to continue
��ָ����ÿ���ڴ浥Ԫ�е�һ���ֽ����Զ���4��
---------------

*/