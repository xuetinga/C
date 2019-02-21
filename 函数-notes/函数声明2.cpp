/*
	2019年2月15日16:23:30
	功能：一定要明白该程序是为什么错误的
*/

# include<stdio.h>

void f(void);//要有这个函数声明才正确
void g(void)
{
	f();//因为函数f的定义放在了调用f语句的后面，所有语法都会出错，
}
void f (void)
{
	printf("很适合\n");
}

int main (void)
{
	return 0;
}
/*
在vc6++中的结果为：
----------------
Press any key to continue

----------------
*/