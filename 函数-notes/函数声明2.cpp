/*
	2019��2��15��16:23:30
	���ܣ�һ��Ҫ���׸ó�����Ϊʲô�����
*/

# include<stdio.h>

void f(void);//Ҫ�����������������ȷ
void g(void)
{
	f();//��Ϊ����f�Ķ�������˵���f���ĺ��棬�����﷨�������
}
void f (void)
{
	printf("���ʺ�\n");
}

int main (void)
{
	return 0;
}
/*
��vc6++�еĽ��Ϊ��
----------------
Press any key to continue

----------------
*/