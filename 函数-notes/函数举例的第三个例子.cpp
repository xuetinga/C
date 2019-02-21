/*
	2019年2月15日15:12:29
	功能：两种函数的比较
*/
#include <stdio.h>

void max1(int i,int j)
{
	if (i>j)
		printf("%d\n",i);
	else
		printf("%d\n",j);
}//这个是直接打印输出,功能找最大值和对最大值进行处理。

int main (void)
{
	int a,b,c,d,e,f;
	a=1,b=2,c=3,d=4,e=5,f=6;

	max(a, b);
	max(c, d);
	max(e, f);
}


int  max2(int i, int j)
{
	if (i<j)
		return i;
	else
		return j;
}//这个是等待处理，在主函数中输出中带max2 就可以。功能是找最大值，处理方式交给了main函数。

int main (void)
{
	int a,b,c,d,e,f;
	a =1,b=2,c=3,d=4,e=5,f=6;
	printf("%d\n",max2(a,b));
	printf("%d\n",max2(c,d));
	printf("%d\n",max2(e,f));
	return 0;
}

/*
在vc6++中的结果为：
-----------------
2
4
6
Press any key to continue

-----------------
*/