/*
	2019年2月19日14:55:36
	功能：冒泡排序用指针实现
*/
#include <stdio.h>

void sort(int * a,int len)
{
	int i,j,t;
	
	for (i=0;i<len-1;++i)//整体需要比较的次数
	{
		for (j=0;j<len-1-i;++j)//每比较一次内部就要少比较一次，所以减去了i，因为是i次
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
在vc6++中的结果为：
----------------------
3 5 6 11 54 92
Press any key to continue
----------------------
*/

