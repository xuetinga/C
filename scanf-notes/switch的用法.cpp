/*
	2019年2月12日15:34:11
	 功能：switch的用法
*/
# include <stdio.h>

int main (void)
{
	int val;

	printf("请输入您要进入的楼层：");
	scanf("%d",&val);
	
	switch(val)
	{
	case 1 :
		printf("1层开！\n");
		break;
	case 2 :
		
		printf("2层开!\n");
		break;
	case 3 :
		printf("3层开！\n");
		break;
	default:
		printf("没有盖到这一层！\n");
		break;

	}
}
/*
在vc6++中的结果为：
-------------------
请输入您要进入的楼层：5
没有盖到这一层！
Press any key to continue
-------------------
原理：找到程序的入口123和default从上往下开始执行。
没有break结果会不一样呢。
*/
