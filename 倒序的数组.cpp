/*
	2019��2��14��15:02:03
	���ܣ����鵹����β���
*/
#include <stdio.h>

int main (void)
{
	int a [7] = {1,2,3,4,5,6,7};
	int i, j ;
	int t;
	i=0;
	j=6;

	while(i<j)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;

		i++;//û������ij��ֵ���䰡��
		--j;
	}

	for (i=0;i<7;++i)
		printf("%d\n",a[i]);
	return 0;
}
/*
��vc6++�еĽ��Ϊ��
----------------
7
6
5
4
3
2
1
Press any key to continue
----------------
*/