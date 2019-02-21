/*
	2019年2月12日16:24:33
	功能：break终止switch
*/
#include <stdio.h>

int main(void)
{
	int x=1;
	int y=0;
	int a=0;
	int b=0;
	switch(x)
	{
	case 1://因为x为1 执行下面的switch，又因为有break。终止了这一个switch。
		switch(y)
		{
		case 0:
			a++;
			break;
		case 1:
			b++;
			break;
		}
		break;//然后跑到了这里，又有break将第一个switch终止
	case 2:
		a++;
		b++;
		break;
	}//第一个switch到这里，所以整个程序就结束了。
	printf("a=%d b=%d\n",a,b);

	return 0;
}
/*
在vc6++中的结果为：
------------------
a=1 b=0
Press any key to continue
------------------
*/
