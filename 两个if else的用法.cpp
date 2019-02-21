/*
	时间：2019年1月22日10.31
	功能：两个if else 的用法
	格式
	if （1）
		A;
	else if (2)
		B;
	else if (3)
		C;
	else
		D;
解释：1成立执行A ； 1不成立 2成立执行B; 1 2 不成立 3 成立执行C 123不成立 4 成立执行D。

*/
# include <stdio.h>

int main(void)
{
	double delta = -1;

	if (delta>0)
		printf("有两个解！\n");
	//printf("nihao") 这样就会报错 因为下面的else没有if开头 一个if只能控制一个语句！！
	else if (delta == 0)
		printf("有一个解！\n");
	else
		printf("无解释！\n");
	return 0;
}
/*

  在vc++中的运行结果是：
  -----------------------
  无解释！
Press any key to continue
  -----------------------
*/