/*
	2019��2��19��10:07:23
	���ܣ�����ṹ���е�ֵ����ֱ������Ϳ��ԣ������и�ʽ.
*/
#include <stdio.h>

struct student
{
	int age;
	float score;
	char sex;
};
int main (void)
{
	struct student st = {80,66.6f,'f'};
	
	struct student * pst= &st;//pst���Դ��ǰ��ĵ�ַ,һ��Ҫ��&st
/*
	pst->age = 88;//�ڶ��ַ�ʽpst��ָ��ı�����age
				  //pst->�ڼ�����ڲ��ᱻת���ɣ�*pst��.age������->�ĺ��壬����һ��Ӳ�Թ涨��

	st.score = 66.6f;//��һ�ַ�ʽ
*/
	printf("age = %d score = %f\n",pst->age ,st.score);

	return 0;
}
/*
��vc6++�еĽ��Ϊ��
----------------------
age = 80 score = 66.599998(�������洢��׼ȷ��
Press any key to continue
----------------------
*/