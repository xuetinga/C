/*
	2019��2��19��16:24:55
	  �����ݽ�������ð�ݷ�
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
	int i,j;
	struct student t;//��Ϊ����parr[i]���������

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
	//����
	for (i=0;i<len-1;++i)
	{
		for(j=0;j<len-1;++j)
		{
			if(parr[j].score>parr[i].score)//parr[j]�Ǹ��ṹ�岻�ܴ���С�ڵıȽϣ�Ҫ��������Ƚϵ�ֵ��
			{
				t = parr[j];
				parr[j]=parr[j+1];
				parr[j+1] =t;
			}
		}
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