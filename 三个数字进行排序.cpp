/*
	ʱ�䣺2019��1��22��
	���ܣ��������ִ�С�������У����������ڶ���һ��t��
*/
# include <stdio.h>

int main (void)
{
	int a,b,c;
	int t;

	printf("����������������");
	scanf("%d %d %d",&a,&b,&c);
	//��д�������a�����ֵ b���м�ֵ c����Сֵ

	if(a<b)
	{
		t=a;
		a=b;
		b=t;
	}
	if (a<c)
	{
		t=a;
		a=c;
		c=t;
	}
	if (b<c)
	{
		t=b;
		b=c;
		c=t;
	}
	printf("%d %d %d\n",a ,b, c);
	return 0;
}
/*
��vc6++�е����н��Ϊ��
-----------------------
����������������0 2 0
2 0 0
Press any key to continue
-----------------------
*/