/*
	2019年2月19日10:53:27
	功能：结构体变量和结构体指针变量作为函数传递的例子，就是告诉你这么着弄特别快
*/
#include <stdio.h>
#include <string.h>

struct student
{
	int age ;
	char sex;
	char name[100];//因为名字很多个

};		//分配了105个字节


void Outputstudent (struct student ss)
{
	printf("age=%d sex= %c name = %s\n",ss.age,ss.sex,ss.name);
}

void Inputstudent(struct student *pstu)
{
	(*pstu).age =10;//在这里吧主函数的值修改了
	strcpy(pstu->name,"san");
	pstu->sex = 'f';
}

int main (void)
{
	struct student st;

	Inputstudent(&st);//对结构体变量输入 这里取地址因为要修改

	Outputstudent(st);//对结构体变量输出这里只是输出所以不用写指针
	printf("%d %c %s\n",st.age,st.sex,st.name);

	return 0;
}




/*
void inputstudent(struct student stu)
//这里的stu与主函数里面的st是一个变量，但在这里修改的是stu的值，与st没有关系
{
	stu.age = 10;
	strcpy(stu.name,"sna");//这里是对字符串拷贝在进行赋值,还得在上面调用函数<string.h>
	stu.sex = 'f';
	printf("%d %c %s\n",st.age,st.sex,st.name);
}
这是错误的
*/
/*
在vc6++中的结果为：
--------------------
age=10 sex= f name = san
10 f san
Press any key to continue
--------------------
*/
