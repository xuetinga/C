/*
	2019��2��19��17:53:43
	���ܣ��򵥾���
*/
#include <stdio.h>

enum weekday//enum����ö�ٵ���˼
{
	monday=12,tuesday,wednesday,thursday,friday,saturday,sunday

};
//mondayĬ��Ϊ0��

int main (void)
{
	
	//int day;�����int�����ʡ�
	enum weekday day = wednesday;
	printf("%d\n",day);//�����2 ���Ҳ�����㱻�޸ġ��������治����д��2.

	return 0;
}
/*
��vc6++�еĽ��Ϊ��
------------------------
14
Press any key to continue
------------------------
*/