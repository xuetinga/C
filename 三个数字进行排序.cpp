/*
	时间：2019年1月22日
	功能：三个数字从小到大排列，方法就是在定义一个t。
*/
# include <stdio.h>

int main (void)
{
	int a,b,c;
	int t;

	printf("请输入三个整数：");
	scanf("%d %d %d",&a,&b,&c);
	//编写代码完成a是最大值 b是中间值 c是最小值

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
在vc6++中的运行结果为：
-----------------------
请输入三个整数：0 2 0
2 0 0
Press any key to continue
-----------------------
*/