/*
	2019��2��19��10:53:27
	���ܣ�ָ����ŵ㣺���ٵĴ������ݣ������ڴ�С��ִ���ٶȿ졣
	���Ƿ��͵�ַ���ǲ�̫��ȫ�����ǿ�����const����������޸ļ�ֻ������˼��
*/
#include <stdio.h>
#include <string.h>

struct student
{
	int age ;
	char sex;
	char name[100];//��Ϊ���ֺܶ��

};		//������105���ֽ�


void Outputstudent (struct student ss)
{
	printf("age=%d sex= %c name = %s\n",ss.age,ss.sex,ss.name);
}//����ռ����108���ڴ�

void Inputstudent(struct student *pstu)
{
	(*pstu).age =10;//���������������ֵ�޸���
	strcpy(pstu->name,"san");
	pstu->sex = 'f';
}//����ռ����4���ֽ�

int main (void)
{
	struct student st;
	printf("stռ%d\n",sizeof(st));
	Inputstudent(&st);//�Խṹ��������� ����ȡ��ַ��ΪҪ�޸�

	Outputstudent(st);//�Խṹ������������ֻ��������Բ���дָ��
	printf("%d %c %s\n",st.age,st.sex,st.name);

	return 0;
}





/*
��vc6++�еĽ��Ϊ��
--------------------
stռ108
age=10 sex= f name = san
10 f san
Press any key to continue
--------------------
*/
