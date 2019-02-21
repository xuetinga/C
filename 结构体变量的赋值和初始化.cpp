/*
	2019年2月19日09:49:43
	功能：如何把结果欧体定义的变量输出
*/
# include <stdio.h>

struct student
{
	int age;
	float score;
	char sex;
};

int main (void)
{
	struct student st = {80,66.6,'f'};//初始化 定义的同时赋值
	struct student st2;//初始化
	st2.age = 10;
	st2.score = 88;
	st2.sex = 'f';//赋值
	
	printf("%d %f %c\n",st.age,st.score,st.sex);
	printf("%d %f %c\n",st2.age,st2.score,st2.sex);
	
	return 0;
}
/*
在vc6++中的结果为：
------------------------
80 66.599998 f
10 88.000000 f
Press any key to continue
------------------------
*/