/*
	2019��2��19��10:53:27
	���ܣ��ṹ������ͽṹ��ָ�������Ϊ�������ݵ����ӣ����Ǹ�������ô��Ū�ر��
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
}

void Inputstudent(struct student *pstu)
{
	(*pstu).age =10;//���������������ֵ�޸���
	strcpy(pstu->name,"san");
	pstu->sex = 'f';
}

int main (void)
{
	struct student st;

	Inputstudent(&st);//�Խṹ��������� ����ȡ��ַ��ΪҪ�޸�

	Outputstudent(st);//�Խṹ������������ֻ��������Բ���дָ��
	printf("%d %c %s\n",st.age,st.sex,st.name);

	return 0;
}




/*
void inputstudent(struct student stu)
//�����stu�������������st��һ�����������������޸ĵ���stu��ֵ����stû�й�ϵ
{
	stu.age = 10;
	strcpy(stu.name,"sna");//�����Ƕ��ַ��������ڽ��и�ֵ,������������ú���<string.h>
	stu.sex = 'f';
	printf("%d %c %s\n",st.age,st.sex,st.name);
}
���Ǵ����
*/
/*
��vc6++�еĽ��Ϊ��
--------------------
age=10 sex= f name = san
10 f san
Press any key to continue
--------------------
*/
