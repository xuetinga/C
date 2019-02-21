/*
	2019年2月2日09:43:15
	功能：1到100之间的奇数的个数

#include<stdio.h>

int main (void)
{
	int i;
	int sum=0;
	for(i=1;i<=100;i=i+1)
		if (i%2==1)
			sum =sum+1;
	
		printf("sum=%d\n",sum);



	return 0;
}
在vc6++中的输出结果为：
---------------------
sum=50
---------------------
*/

/*
	2019年2月2日10:00:38
	 功能：求平均值

#include <stdio.h>
int main(void)
{
	int i;
	int sum =0;
	for (i=1;i<=100;i++)
	{	
		if(i%2==1)
		{
			sum=sum+i;
			printf("sum%d\n",sum);
			
		}
		
	}
	sum=sum/50;
	printf("sum=%d\n",sum);


	return 0;
}
*/

#include<stdio.h>
int main()
{
    int i,average,n = 0,sum = 0;
    for(i=1;i<=100;i++)
    {
        if(i%2!=0)  // 判断奇数
        {
            ++n;    // 统计个数
            sum+=i; // 求和
        }
    }
    average = sum/n;// 求平均值
    printf("1-100之间的奇数和=%d,奇数个数=%d,奇数平均值=%d。\n",sum,n,average);

	return 0;
	
}
/*
在vc6++中的结果为：
-------------------
1-100之间的奇数和=2500,奇数个数=50,奇数平均值=50。
Press any key to continue

-------------------
*/