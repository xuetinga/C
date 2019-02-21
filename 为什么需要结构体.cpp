/*
	2019年2月19日09:18:33
	功能：通过例子来说明为甚需要结构体以及如何定义结构体
*/
# include <stdio.h>
//第一种方式
struct student
{
	int age ;
	float score;
	char sex;
};
//定义了 一个数据类型不是定义了变量,是由基本数据类型组合在一起的。


//第二种方式,只能使用一次。
/*
struct student2
{
	int age;
	float score;
	char sex;
} st2;

//第三种方式,不知道变量是什么类型
struct 
{
	int age;
	float score;
	char sex;
}st3;
*/
int main(void)
{
	struct student st = {80,66.6,'f'};//定义了一个st的变量。
	printf("%d %f %s\n",st.age,st.score,st.sex);
	return 0;

}
/*
在vc6++中的结果为：
-------------------

-------------------
*/