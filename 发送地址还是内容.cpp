/*
	2019年2月19日10:53:27
	功能：指针的优点：快速的传递数据，耗用内存小，执行速度快。
	就是发送地址但是不太安全，但是可以用const这个东西来修改即只读的意思。
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
}//这里占用了108个内存

void Inputstudent(struct student *pstu)
{
	(*pstu).age =10;//在这里吧主函数的值修改了
	strcpy(pstu->name,"san");
	pstu->sex = 'f';
}//这里占用了4个字节

int main (void)
{
	struct student st;
	printf("st占%d\n",sizeof(st));
	Inputstudent(&st);//对结构体变量输入 这里取地址因为要修改

	Outputstudent(st);//对结构体变量输出这里只是输出所以不用写指针
	printf("%d %c %s\n",st.age,st.sex,st.name);

	return 0;
}





/*
在vc6++中的结果为：
--------------------
st占108
age=10 sex= f name = san
10 f san
Press any key to continue
--------------------
*/
