/*
	2019��1��22��12:05:41
	 ���ܣ�if������
*/
# include <stdio.h>

int main (void)
{
	float score;//����
	 
	printf("���������ķ���");
	scanf("%f",&score);

	if (score>100)
		printf("�������Σ�");
	else if (score>=90 &&score<=100)
		printf("����\n");
		//90<=score<=100�ǲ��Ե���Ϊ 90<=score�Ǹ��߼�ʽ�� �������1����0 �������
	else if (score>=80 && score<=90)
		printf("����");
	else if (score>=60 && score<=80)
		printf("����\n");
	else if (score>=0 && score<=60)
		printf("�����񣬼���Ŭ����\n");
	else 
		printf("����ķ������ͣ���Ҫ����Ա���\n");
	return 0;
}
/*
��vc6++�е�������Ϊ��
------------------------
���������ķ���-12
����ķ������ͣ���Ҫ����Ա���
Press any key to continue

------------------------
*/
 
