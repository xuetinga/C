/*
	2019��2��12��16:24:33
	���ܣ�break��ֹswitch
*/
#include <stdio.h>

int main(void)
{
	int x=1;
	int y=0;
	int a=0;
	int b=0;
	switch(x)
	{
	case 1://��ΪxΪ1 ִ�������switch������Ϊ��break����ֹ����һ��switch��
		switch(y)
		{
		case 0:
			a++;
			break;
		case 1:
			b++;
			break;
		}
		break;//Ȼ���ܵ����������break����һ��switch��ֹ
	case 2:
		a++;
		b++;
		break;
	}//��һ��switch�����������������ͽ����ˡ�
	printf("a=%d b=%d\n",a,b);

	return 0;
}
/*
��vc6++�еĽ��Ϊ��
------------------
a=1 b=0
Press any key to continue
------------------
*/
