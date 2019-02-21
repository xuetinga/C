/*
	2019年2月19日16:17:31
	功能：用指针实现对学生的管理
*/
#include <stdio.h>
#include <malloc.h>
struct student
{
	int age;
	float score;
	char name[100];
};

int main(void)
{
	int len ;
	struct student *parr;
	int i;

	//动态构造一维数组
	printf("请输入学生的个数：\n");
	
	scanf("%d",&len);//注意这里是取地址len输入就要取地址啊不能忘了啊
	parr = (struct student *)malloc(len *sizeof(struct student));
	//表示parr就获取了这么长的字节的前四位,括号里面就是数据的类型

	for (i=0;i<len;++i)
	{
		printf ("请输入第%d个学生的信息是：\n",i+1);
		printf("age = ");
		scanf("%d",&parr[i].age);//把这个值就当做parr[i].age的内容。

		printf("name = ");
		scanf("%s",parr[i].name);//不用取地址因为本身已经是数组首元素的地址，name是数组名

		printf("score =");
		scanf("%f",&parr[i].score);
	}

	printf("\n\n学生的信息是：\n");

	//输出
	for(i=0;i<len;++i)
	{
		printf("第%d个学生的信息是：\n",i+1);
		printf("age = %d\n",parr[i].age);
		printf("name = %s\n",parr[i].name);
		printf("score = %f\n",parr[i].score);
	}
	return 0;
}
/*
在vc6++中的结果为：
-------------------
请输入学生的个数：
2
请输入第1个学生的信息是：
age = 18
name = 李四
score =80
请输入第2个学生的信息是：
age = 112
name = 张三
score =12


学生的信息是：
第1个学生的信息是：
age = 18
name = 李四
score = 80.000000
第2个学生的信息是：
age = 112
name = 张三
score = 12.000000
Press any key to continue
-------------------
*/

