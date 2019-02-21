/*
	2019年2月12日15:56:51
	功能：break的各种用法
*/

	/*switch (2)
	{
	case 2:
		printf("哈哈！\n");
		break;
	}这一个是可以的。
	*/


/*
int main (void)
{
	int i;
	for (i = 0;i<3;++i)
	{
		if (3>2)
			break;//break虽然是if内部的语句，但是用来终止for循环的。这个语句永远不会输出。
		printf("嘿嘿\n");
	}
	return 0;
}
*/

/*
#include <stdio.h>

int main (void)
{
	int i , j;

	for (i=0;i<3;++i)
	{
		for(j=1;j<4;++j)
			break;//break在多层循环中只能终止距离她近的循环。
		printf("同志们好！\n");
	}
	return 0;
}*/