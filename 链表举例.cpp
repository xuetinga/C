/*
	2019年2月21日10:30:58
	功能：位运算符的例子,就是转换为补码进行运算的


*/
#include <stdio.h>

int main(void)
{
	int i =5;
	int j =7;
	int k1,k2,k3,k4,k5,k6,k7,k8;
	
	k1= i&j;//按位与
	printf("按位与结果是：%d\n",k1);

	k2=i&&j;//K的值只是1或者0，因为&&是逻辑运算符结果只是0或者1
	printf("逻辑与结果是：%d\n",k2);

	k3 = i|j;//按位或
	printf("按位或结果是：%d\n",k3);

	k4 = i||j;//逻辑或
	printf("逻辑或结果是：%d\n",k4);

	k5 = ~i;//按位取反
	printf("按位取反的结果是：%d\n",k5);

	k6 = j^i;
	printf("按位异或的结果是：%d\n",k6);

	k7 = i>>2;
	printf("右移两位的结果是：%d\n",k7);

	k8 = i<<2;
	printf("左移两位的结果是：%d\n",k8);




	return 0;

}
/*
在vc6++中的结果为：
-------------------

-------------------
*/