/*
	2019��2��19��18:05:58
	���ܣ�ö����switch����
*/
#include <stdio.h>

enum weekday
{
	monday,tuesday,wednesday,thursday,Friday,stdurday
};
void f(enum weekday i)//ֻ��Ҫ����ֵ ������ö�١������Ա���ʧ��
{
	switch(i)
	{
	case 0:
		printf("monday!\n");
		break;
	case 1:
		printf("tuesday!\n");
	case 2:
		printf("wednesday!\n");
	case 3:
		printf("thursday!\n");
	case 4:
		printf("Friday!\n");
	case 5:
		printf("stdurday!\n");
	}
}
int main (void)
{
	f(monday);
	return 0;
}
/*
��vc6++�еĽ��Ϊ��
-------------
monday!
Press any key to continue
-------------
*/