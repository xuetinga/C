/*
	2019��2��15��11:16:36
	���ܣ�Ӧ�ú���
*/
/*
#include <stdio.h>

int main(void)
{
	int a,b,c,d,e,f;

	a=1,b=2,c=3,d=4,e=5,f=6;//���ű��ʽ�����д��һ��������һ���ֺš�

	if(a>b)
		printf("%d\n",a);
	else
		printf("%d\n",b);
	if(c>d)
		printf("%d\n",c);
	else
		printf("%d\n",d);
	if(e>f)
		printf("%d\n",e);
	else
		printf("%d\n",f);

	return 0
}
*/
//��������ظ���̫ǿ������һ�ַ���
#include <stdio.h>

void max(int i,int j)//�ڶ�����void��ʾ����û�з���ֵ��max�Ǻ��������֣�i��j����ʽ������
{
	if (i>j)
		printf("%d\n",i);
	else
		printf("%d\n",j);//������ִ�����ִ��max���������
}
int main (void)//main���ں�������ִ���ں�����
{
	int a,b,c,d,e,f;

	a=1,b=2,c=3,d=4,e=5,f=6;

	max(a, b);//��һ������a��ֵ��i��b��ֵ��j���ȼ����û�ж�Ӧ�ĺ��������ɹ�����Ϊ���Ϳ���ִ�С�
	max(c, d);//��������
	max(e, f);
}//��Ϊij����ռ䣬����max����main�ͻ��ͷſռ䡣ab����֮���ͷſռ䡣ÿ�η���Ŀռ䲻һ����ͬһ�顣

/*
��vc6++�еĽ��Ϊ��
-----------------
2
4
6
Press any key to continue
-----------------
*/