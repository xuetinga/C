/*
	2019��2��19��09:49:43
	���ܣ���ΰѽ��ŷ�嶨��ı������
*/
# include <stdio.h>

struct student
{
	int age;
	float score;
	char sex;
};

int main (void)
{
	struct student st = {80,66.6,'f'};//��ʼ�� �����ͬʱ��ֵ
	struct student st2;//��ʼ��
	st2.age = 10;
	st2.score = 88;
	st2.sex = 'f';//��ֵ
	
	printf("%d %f %c\n",st.age,st.score,st.sex);
	printf("%d %f %c\n",st2.age,st2.score,st2.sex);
	
	return 0;
}
/*
��vc6++�еĽ��Ϊ��
------------------------
80 66.599998 f
10 88.000000 f
Press any key to continue
------------------------
*/