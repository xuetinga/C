/*
	2019年2月19日18:05:58
	功能：枚举与switch搭配
*/
#include <stdio.h>

enum weekday
{
	monday,tuesday,wednesday,thursday,Friday,stdurday
};
void f(enum weekday i)//只需要几个值 所以用枚举。还可以避免失误
{
	switch(i)
	{
	case 0:
		printf("monday!\n");
		break;
	case 1:
		printf("tuesday!\n");
	case 2:
		printf("wednesday!\n");
	case 3:
		printf("thursday!\n");
	case 4:
		printf("Friday!\n");
	case 5:
		printf("stdurday!\n");
	}
}
int main (void)
{
	f(monday);
	return 0;
}
/*
在vc6++中的结果为：
-------------
monday!
Press any key to continue
-------------
*/