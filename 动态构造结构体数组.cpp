/*
	2019��2��19��16:17:31
	���ܣ���ָ��ʵ�ֶ�ѧ���Ĺ���
*/
#include <stdio.h>
#include <malloc.h>
struct student
{
	int age;
	float score;
	char name[100];
};

int main(void)
{
	int len ;
	struct student *parr;
	int i;

	//��̬����һά����
	printf("������ѧ���ĸ�����\n");
	
	scanf("%d",&len);//ע��������ȡ��ַlen�����Ҫȡ��ַ���������˰�
	parr = (struct student *)malloc(len *sizeof(struct student));
	//��ʾparr�ͻ�ȡ����ô�����ֽڵ�ǰ��λ,��������������ݵ�����

	for (i=0;i<len;++i)
	{
		printf ("�������%d��ѧ������Ϣ�ǣ�\n",i+1);
		printf("age = ");
		scanf("%d",&parr[i].age);//�����ֵ�͵���parr[i].age�����ݡ�

		printf("name = ");
		scanf("%s",parr[i].name);//����ȡ��ַ��Ϊ�����Ѿ���������Ԫ�صĵ�ַ��name��������

		printf("score =");
		scanf("%f",&parr[i].score);
	}

	printf("\n\nѧ������Ϣ�ǣ�\n");

	//���
	for(i=0;i<len;++i)
	{
		printf("��%d��ѧ������Ϣ�ǣ�\n",i+1);
		printf("age = %d\n",parr[i].age);
		printf("name = %s\n",parr[i].name);
		printf("score = %f\n",parr[i].score);
	}
	return 0;
}
/*
��vc6++�еĽ��Ϊ��
-------------------
������ѧ���ĸ�����
2
�������1��ѧ������Ϣ�ǣ�
age = 18
name = ����
score =80
�������2��ѧ������Ϣ�ǣ�
age = 112
name = ����
score =12


ѧ������Ϣ�ǣ�
��1��ѧ������Ϣ�ǣ�
age = 18
name = ����
score = 80.000000
��2��ѧ������Ϣ�ǣ�
age = 112
name = ����
score = 12.000000
Press any key to continue
-------------------
*/

