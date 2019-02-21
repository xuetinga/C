/*
	时间：2019年1月21日13.22
    功能：scanf的各种使用
*/
# include<stdio.h>

int main(void)
{
	int i;
	char ch;

	scanf ("%d",&i);
	printf("i=%d\n",i);
	scanf ("%c",&ch);
	printf("ch=%c\n",ch);

	return 0;
}
/*
在vc6++中的结果为：
12mk    因为仅仅定义了一个字符，所以不管输入几个都是会显示一个
i=12
ch=m
Press any key to continue
*/
