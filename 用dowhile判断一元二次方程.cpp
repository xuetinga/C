/*
	2019��2��12��10:54:23
	���ܣ���do whileʵ��һԪ���η��̵Ľ�
*/
#include <stdio.h>
#include <math.h>
int main (void)
{
	double a, b, c;
	double delta;
	double x1,x2;
	char ch;
	do
	{
		printf("������һԪ���η��̵�����ϵ����\n");
		printf("a=");
		scanf("%lf",&a);
		
		printf("b=");
		scanf("%lf",&b);
		
		printf("c=");
		scanf("%lf",&c);
		
		delta = b*b - 4*a*c;
		if (delta>0)
		{
			x1 = (-b + sqrt(delta))/(2+a);
			x2 = (+b - sqrt(delta))/(2+a);
			printf("�������⣬x1=%lf, x2=%lf\n",x1,x2);
		}
		else if ( 0 == delta)
		{
			x1=x2= (-b)/(2*a);
			printf("��һ���⣬x1=x2=%lf \n",x1,x2);
		}
		else
		{
			printf("û��ʵ����\n");
		}
		printf("���������(y / n)");
		scanf(" %c",&ch);//%cǰ����һ���ո�ԭ���顣
	}while ('y'==ch);//ֻҪ������y�ͻ��˳���

	return 0;
}
/*
��vc6++�еĽ��Ϊ��
--------------------
������һԪ���η��̵�����ϵ����
a=2
b=1
c=1
û��ʵ����
���������(y / n)y
������һԪ���η��̵�����ϵ����
a=2
b=4
c=2
��һ���⣬x1=x2=-1.000000
���������(y / n)n
Press any key to continue
--------------------
*/