/*
	2019��2��2��09:43:15
	���ܣ�1��100֮��������ĸ���

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
��vc6++�е�������Ϊ��
---------------------
sum=50
---------------------
*/

/*
	2019��2��2��10:00:38
	 ���ܣ���ƽ��ֵ

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
        if(i%2!=0)  // �ж�����
        {
            ++n;    // ͳ�Ƹ���
            sum+=i; // ���
        }
    }
    average = sum/n;// ��ƽ��ֵ
    printf("1-100֮���������=%d,��������=%d,����ƽ��ֵ=%d��\n",sum,n,average);

	return 0;
	
}
/*
��vc6++�еĽ��Ϊ��
-------------------
1-100֮���������=2500,��������=50,����ƽ��ֵ=50��
Press any key to continue

-------------------
*/