/*
	ʱ�䣺2019��1��22��10.31
	���ܣ�����if else ���÷�
	��ʽ
	if ��1��
		A;
	else if (2)
		B;
	else if (3)
		C;
	else
		D;
���ͣ�1����ִ��A �� 1������ 2����ִ��B; 1 2 ������ 3 ����ִ��C 123������ 4 ����ִ��D��

*/
# include <stdio.h>

int main(void)
{
	double delta = -1;

	if (delta>0)
		printf("�������⣡\n");
	//printf("nihao") �����ͻᱨ�� ��Ϊ�����elseû��if��ͷ һ��ifֻ�ܿ���һ����䣡��
	else if (delta == 0)
		printf("��һ���⣡\n");
	else
		printf("�޽��ͣ�\n");
	return 0;
}
/*

  ��vc++�е����н���ǣ�
  -----------------------
  �޽��ͣ�
Press any key to continue
  -----------------------
*/