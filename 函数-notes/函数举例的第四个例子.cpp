/*
	2019��2��15��15:14:04
	���ܣ��ж�һ�����Ƿ��������ú����ж��Ƿ�������
*/

/*
#include <stdio.h>

int main (void)
{
	int val;
	int i;

	scanf("%d",&val);
	for(i=2;i<val;++i)
	{
		if(val%i == 0)
			break;//ֻҪ��һ�������������forѭ����ֹͣ�ˣ�ֻҪ������Ϊbreakֹͣ��ѭ����
				//���������val����
	}
	if (i == val)
		printf("yes��\n");
	else
		printf("no!\n");


}
	return 0;

*/
/*
��vc6++�еĽ��Ϊ��
--------------------
15
no!
Press any key to continue
--------------------
*/
#include <stdio.h>

bool IsPrime(int val)//��������û���β�����Ϊ���ý�������ȥ�ж�,������Ҫ��������ȥ�жϡ�
{
	
	int i;

	for (i=2;i<val;++i)
	{
		if (val % i == 0)
			break;
	}
	if (i == val)
		return true ;
	else
		return false;
}//ע��һ��Ҫ����main����ǰ�棬���ں���Ҫ��˵����

int main (void)
{
	int m;
	

	scanf ("%d",&m);

	if (IsPrime(m))//������ǶԺʹ���Ϊ�������ֻ���ضԺʹ������ǵ��ú���
		printf("yes\n");
	else
		printf("no\n");

}
/*
��vc6++�еĽ��Ϊ��
------------------------
15
no
Press any key to continue
���������˳�򣬴�main��ʼ��Ȼ��Ӽ���������һ��ֵ���ж��ĸ��������ޣ���m��ֵ����val���ڴ��뵽�Ǹ�������ȥ�жϽ����
--------------------------
*/


