/*
	2019��2��19��09:18:33
	���ܣ�ͨ��������˵��Ϊ����Ҫ�ṹ���Լ���ζ���ṹ��
*/
# include <stdio.h>
//��һ�ַ�ʽ
struct student
{
	int age ;
	float score;
	char sex;
};
//������ һ���������Ͳ��Ƕ����˱���,���ɻ����������������һ��ġ�


//�ڶ��ַ�ʽ,ֻ��ʹ��һ�Ρ�
/*
struct student2
{
	int age;
	float score;
	char sex;
} st2;

//�����ַ�ʽ,��֪��������ʲô����
struct 
{
	int age;
	float score;
	char sex;
}st3;
*/
int main(void)
{
	struct student st = {80,66.6,'f'};//������һ��st�ı�����
	printf("%d %f %s\n",st.age,st.score,st.sex);
	return 0;

}
/*
��vc6++�еĽ��Ϊ��
-------------------

-------------------
*/