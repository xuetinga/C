/*
# include <stdio.h>

void huhuan-1 (int a,int b)
{
	int t;

	t=a;
	a=b;
	b=t;
	printf("a=%d,b=%d\n", a,b);
	return ;
}
����ĺ����������β�ab��ֵ��������������������ֵ�����������abֵ����䡣
�������������֮�������β�ab��ֵ�ͻᱻ�ͷţ��������������������ȥ���У�
����������������abֵû�б��ͷţ���Ϊ�Ǹ�����û��������ϡ�
	return ;

int main (void)
{
	int a =3;//�˴���a�Ǿֲ�������ֻ���ڴ˺�����ʹ��
	int b =5;

	huhuan-1 (a,b);
	
	return 0;
}�������û��ʲô���壬��Ϊ�����ú�������֮��������Ǹ�ֵ��
*/



/*
   2019��2��17��11:24:30
   ���ܣ���ָ��ʵ������������*/
/*
# include <stdio.h>

void huhuan-2 (int *p,int * q)
{
	int t;//ע��t��int * �͵�,������*P��*q��ʱ��tҪ�����int�����ܶ����int *��
	��Ϊ�����t�Ƕ�Ӧ��a��b��

	t=*p;
	*p=*q;
	*q=t;//p��int*��*p��int a
}//���ﻥ���Ĳ���˵��ab�ĵ�ַ����Ϊ��ַ�ǲ���ġ�ֻ�ǰ�pq���ˣ�ab��ֵû�б䡣

int main (void)
{
	int a =3;//�˴���a�Ǿֲ�������ֻ���ڴ˺�����ʹ��
	int b =5;

	//huhuan-2 (a,b);�Ǵ������Ϊ����һ����
	//huhuan-2(*p,*q);Ҳ�Ǵ������Ϊ���ⲻ�ǵ�ַ��Ҫ������ȷ�ſ��ԡ�

	huhuan-2(&a,&b); 
	printf("a=%d,b=%d\n", a,b);
	return 0;
}
*/

#include <stdio.h>

void huhuan3(int *p,int *q)
{
	int t;

	t = *p;
	*p = *q;
	*q = t;
}
int main(void)
{
	int a =3;
	int b =5;

	huhuan3(&a,&b);
	printf("a=%d,b=%d\n",a,b);

	return 0;
}
/*
��vc6++�еĽ��Ϊ��
-------------------
a=5,b=3
Press any key to continue
-------------------
*/