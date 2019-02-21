/*
# include <stdio.h>

void huhuan-1 (int a,int b)
{
	int t;

	t=a;
	a=b;
	b=t;
	printf("a=%d,b=%d\n", a,b);
	return ;
}
这里的函数换的是形参ab的值，并不是下面主函数的值，所以下面的ab值不会变。
当函数互换完毕之后，上面形参ab的值就会被释放，接着跳到下面的主函数去运行，
但是下面主函数的ab值没有被释放，因为那个程序还没有运行完毕。
	return ;

int main (void)
{
	int a =3;//此处的a是局部变量，只能在此函数中使用
	int b =5;

	huhuan-1 (a,b);
	
	return 0;
}这个函数没有什么意义，因为我想让函数运行之后在输出那个值。
*/



/*
   2019年2月17日11:24:30
   功能：用指针实现两个数互换*/
/*
# include <stdio.h>

void huhuan-2 (int *p,int * q)
{
	int t;//注意t是int * 型的,当互换*P和*q的时候，t要定义成int，不能定义成int *，
	因为这里的t是对应的a和b。

	t=*p;
	*p=*q;
	*q=t;//p是int*，*p是int a
}//这里互换的不能说是ab的地址，因为地址是不变的。只是把pq换了，ab的值没有变。

int main (void)
{
	int a =3;//此处的a是局部变量，只能在此函数中使用
	int b =5;

	//huhuan-2 (a,b);是错误的因为这是一个数
	//huhuan-2(*p,*q);也是错误的因为，这不是地址，要类型正确才可以。

	huhuan-2(&a,&b); 
	printf("a=%d,b=%d\n", a,b);
	return 0;
}
*/

#include <stdio.h>

void huhuan3(int *p,int *q)
{
	int t;

	t = *p;
	*p = *q;
	*q = t;
}
int main(void)
{
	int a =3;
	int b =5;

	huhuan3(&a,&b);
	printf("a=%d,b=%d\n",a,b);

	return 0;
}
/*
在vc6++中的结果为：
-------------------
a=5,b=3
Press any key to continue
-------------------
*/