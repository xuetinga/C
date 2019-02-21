/*
	2019年1月22日12:05:41
	 功能：if的例子
*/
# include <stdio.h>

int main (void)
{
	float score;//分数
	 
	printf("请输入您的分数");
	scanf("%f",&score);

	if (score>100)
		printf("这是做梦！");
	else if (score>=90 &&score<=100)
		printf("优秀\n");
		//90<=score<=100是不对的因为 90<=score是个逻辑式子 结果不是1就是0 恒成立。
	else if (score>=80 && score<=90)
		printf("良好");
	else if (score>=60 && score<=80)
		printf("及格\n");
	else if (score>=0 && score<=60)
		printf("不及格，继续努力。\n");
	else 
		printf("输入的分数过低，不要如此自卑！\n");
	return 0;
}
/*
在vc6++中的输出结果为：
------------------------
请输入您的分数-12
输入的分数过低，不要如此自卑！
Press any key to continue

------------------------
*/
 
