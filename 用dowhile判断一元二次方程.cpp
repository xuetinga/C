/*
	2019年2月12日10:54:23
	功能：用do while实现一元二次方程的解
*/
#include <stdio.h>
#include <math.h>
int main (void)
{
	double a, b, c;
	double delta;
	double x1,x2;
	char ch;
	do
	{
		printf("请输入一元二次方程的三个系数：\n");
		printf("a=");
		scanf("%lf",&a);
		
		printf("b=");
		scanf("%lf",&b);
		
		printf("c=");
		scanf("%lf",&c);
		
		delta = b*b - 4*a*c;
		if (delta>0)
		{
			x1 = (-b + sqrt(delta))/(2+a);
			x2 = (+b - sqrt(delta))/(2+a);
			printf("有两个解，x1=%lf, x2=%lf\n",x1,x2);
		}
		else if ( 0 == delta)
		{
			x1=x2= (-b)/(2*a);
			printf("有一个解，x1=x2=%lf \n",x1,x2);
		}
		else
		{
			printf("没有实数解\n");
		}
		printf("您想继续吗？(y / n)");
		scanf(" %c",&ch);//%c前面有一个空格，原因看书。
	}while ('y'==ch);//只要是输入y就会退出。

	return 0;
}
/*
在vc6++中的结果为：
--------------------
请输入一元二次方程的三个系数：
a=2
b=1
c=1
没有实数解
您想继续吗？(y / n)y
请输入一元二次方程的三个系数：
a=2
b=4
c=2
有一个解，x1=x2=-1.000000
您想继续吗？(y / n)n
Press any key to continue
--------------------
*/