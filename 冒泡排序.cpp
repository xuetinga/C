/*
	2019��2��19��14:55:36
	���ܣ�ð��������ָ��ʵ��
*/
#include <stdio.h>

void sort(int * a,int len)
{
	int i,j,t;
	
	for (i=0;i<len-1;++i)//������Ҫ�ȽϵĴ���
	{
		for (j=0;j<len-1-i;++j)//ÿ�Ƚ�һ���ڲ���Ҫ�ٱȽ�һ�Σ����Լ�ȥ��i����Ϊ��i��
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	


}
int main (void)
{
	int a[6] = {11,92,3,54,5,6};
	int i = 0;
	sort (a,6);

	for (i =0;i<6;++i)
	{
		printf("%d ",a[i]);
	}

	printf("\n");

	return 0;
}
/*
��vc6++�еĽ��Ϊ��
----------------------
3 5 6 11 54 92
Press any key to continue
----------------------
*/

