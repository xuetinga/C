/*
	2019��2��18��21:54:45
	���ܣ���̬�ڴ�纯��ʹ��
*/

#include <stdio.h>
#include <malloc.h>
void f(int ** q)
{
	*q = (int *)malloc(sizeof(int));
		//�ȼ���p = (int *)malloc(sizeof(int));��̬�����ĸ��ֽڵĿռ�
	//q = 5;�Ǵ��
	//*q = 5;�Ǵ��
	**q =5;//�ǶԵ�
}
int main (void)
{
	int *p;
	f(&p);
	printf("%d\n",*p);
	return 0;
}
/*
��vc6++�еĽ��Ϊ��
------------------------
5
Press any key to continue
------------------------
*/