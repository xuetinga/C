/*
	2019��2��19��16:24:55
	  �����ݽ�������ð�ݷ����ҿ����ظ�ʹ��
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

	//����
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
		printf("\n");
	}
	return 0;
}
/*
��vc6++�еĽ��Ϊ��
-----------------------
4
�������1��ѧ������Ϣ�ǣ�
age = 2
name = 2
score =2
�������2��ѧ������Ϣ�ǣ�
age = 3
name = 3
score =3
�������3��ѧ������Ϣ�ǣ�
age = 5
name = 5
score =5
�������4��ѧ������Ϣ�ǣ�
age = 1
name = 1
score =1


ѧ������Ϣ�ǣ�
��1��ѧ������Ϣ�ǣ�
age = 5
name = 5
score = 5.000000

��2��ѧ������Ϣ�ǣ�
age = 1
name = 1
score = 1.000000

��3��ѧ������Ϣ�ǣ�
age = 2
name = 2
score = 2.000000

��4��ѧ������Ϣ�ǣ�
age = 3
name = 3
score = 3.000000

Press any key to continue
-----------------------
*/