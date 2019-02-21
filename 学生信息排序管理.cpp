/*
	2019年2月19日16:24:55
	  对数据进行排序冒泡法并且可以重复使用
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
	int i,j;
	struct student t;//因为互换parr[i]是这个类型

	//动态构造一维数组
	printf("请输入学生的个数：\n");
	
	scanf("%d",&len);//注意这里是取地址len输入就要取地址啊不能忘了啊
	parr = (struct student *)malloc(len *sizeof(struct student));
	//表示parr就获取了这么长的字节的前四位,括号里面就是数据的类型

	//输入
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
	//排序
	for (i=0;i<len-1;++i)
	{
		for(j=0;j<len-1;++j)
		{
			if(parr[j].score>parr[i].score)//parr[j]是个结构体不能大于小于的比较，要给出具体比较的值。
			{
				t = parr[j];
				parr[j]=parr[j+1];
				parr[j+1] =t;
			}
		}
	}

	printf("\n\n学生的信息是：\n");

	//输出
	for(i=0;i<len;++i)
	{
		printf("第%d个学生的信息是：\n",i+1);
		printf("age = %d\n",parr[i].age);
		printf("name = %s\n",parr[i].name);
		printf("score = %f\n",parr[i].score);
		printf("\n");
	}
	return 0;
}
/*
在vc6++中的结果为：
-----------------------
4
请输入第1个学生的信息是：
age = 2
name = 2
score =2
请输入第2个学生的信息是：
age = 3
name = 3
score =3
请输入第3个学生的信息是：
age = 5
name = 5
score =5
请输入第4个学生的信息是：
age = 1
name = 1
score =1


学生的信息是：
第1个学生的信息是：
age = 5
name = 5
score = 5.000000

第2个学生的信息是：
age = 1
name = 1
score = 1.000000

第3个学生的信息是：
age = 2
name = 2
score = 2.000000

第4个学生的信息是：
age = 3
name = 3
score = 3.000000

Press any key to continue
-----------------------
*/