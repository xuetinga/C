/*
	2019��2��16��10:28:17
	���ܣ�����������������
*/
#include <stdio.h>
//��������Ĺ������ж��Ƿ����������Ƿ���true,���Ƿ���false�� 
bool IsPrime(int m)
{
	int i;
	for (i=2;i<m;++i)
	{
		if (0 == m%i)
			break;
	}
	if (i == m)
		return true;
	else 
		return false;
}


//�������Ĺ����ǰ�1��n֮���ǲ��������������е���������ʾ�������

void TraverseVal (int n)
{
	int i;
	for (i=2;i<=n;++i)
	{
		if (IsPrime(i))
			printf("%d\n",i);
	}
}
int main(void)
{
	int val;

	scanf("%d",&val);
	TraverseVal(val);//�������������дforѭ��

	return 0;
}
/*
��vc6++�еĽ��Ϊ��
-------------------
15
2
3
5
7
11
13
Press any key to continue

-------------------
*/