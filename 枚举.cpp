/*
	2019年2月19日17:53:43
	功能：简单举例
*/
#include <stdio.h>

enum weekday//enum就是枚举的意思
{
	monday=12,tuesday,wednesday,thursday,friday,saturday,sunday

};
//monday默认为0；

int main (void)
{
	
	//int day;定义成int不合适。
	enum weekday day = wednesday;
	printf("%d\n",day);//结果是2 而且不能随便被修改。但是上面不可以写成2.

	return 0;
}
/*
在vc6++中的结果为：
------------------------
14
Press any key to continue
------------------------
*/