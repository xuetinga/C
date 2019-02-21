/*
	2019年2月19日10:07:23
	功能：输出结构体中的值，就直接输出就可以，但是有格式.
*/
#include <stdio.h>

struct student
{
	int age;
	float score;
	char sex;
};
int main (void)
{
	struct student st = {80,66.6f,'f'};
	
	struct student * pst= &st;//pst可以存放前面的地址,一定要是&st
/*
	pst->age = 88;//第二种方式pst所指向的变量是age
				  //pst->在计算机内部会被转换成（*pst）.age，这是->的含义，这是一种硬性规定，

	st.score = 66.6f;//第一种方式
*/
	printf("age = %d score = %f\n",pst->age ,st.score);

	return 0;
}
/*
在vc6++中的结果为：
----------------------
age = 80 score = 66.599998(浮点数存储不准确）
Press any key to continue
----------------------
*/