/*
	2019年2月15日11:16:36
	功能：应用函数
*/
/*
#include <stdio.h>

int main(void)
{
	int a,b,c,d,e,f;

	a=1,b=2,c=3,d=4,e=5,f=6;//逗号表达式，最好写成一个后面有一个分号。

	if(a>b)
		printf("%d\n",a);
	else
		printf("%d\n",b);
	if(c>d)
		printf("%d\n",c);
	else
		printf("%d\n",d);
	if(e>f)
		printf("%d\n",e);
	else
		printf("%d\n",f);

	return 0
}
*/
//这个程序重复性太强，用另一种方法
#include <stdio.h>

void max(int i,int j)//第二步。void表示函数没有返回值，max是函数的名字，i，j是形式参数。
{
	if (i>j)
		printf("%d\n",i);
	else
		printf("%d\n",j);//这个语句执行完就执行max这个函数。
}
int main (void)//main是内函数，先执行内函数。
{
	int a,b,c,d,e,f;

	a=1,b=2,c=3,d=4,e=5,f=6;

	max(a, b);//第一步。把a的值给i，b的值给j。先检查有没有对应的函数，检查成功，认为语句就可以执行。
	max(c, d);//第三步。
	max(e, f);
}//会为ij分配空间，当从max跳到main就会释放空间。ab完了之后释放空间。每次分配的空间不一定是同一块。

/*
在vc6++中的结果为：
-----------------
2
4
6
Press any key to continue
-----------------
*/