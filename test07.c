#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

//从大到小输出三个值
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d",&a,&b,&c);
//	//算法实现：a方最大值，b次之，c中放最小值
//	if(a<b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if(a<c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if(b<c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d%d%d\n",a,b,c);
//	return 0;
//}

//答应3的倍数
//写一个代码打印1-100之间所有的3的倍数的数字
//int main()
//{
//	int i =0;
//	for(i=1;i<100;i++)
//	{
//		if(i%3 == 0)
//			printf("%d\n",i);
//	}
//	return 0;
//}

//给定两个数，求着两个数的最大公约数
//int main()
//{
//	int m = 24;
//	int n = 18;
//	int r = 0;
//	scanf("%d%d",&m,&n);
//	while(m%n)
//	{
//		r =m%n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n",n);
//	return 0;
//}


//打印1000年到2000年之间的闰年
//int main()
//{
//	//能被4整除并且不能被100整除是闰年
//	//能被400整除是闰年
//	int i = 0;
//	int count = 0;
//	for(i=1000;i<2001;i++)
//	{
//		if(i%4 == 0 && i%100!=0)
//		{
//			printf("%d ",i);
//			count++;
//		}
//		else if(i%400 ==0)
//		{
//			printf("%d ",i);
//			count++;
//		}
//	}
//	printf("\ncoount = %d\n",count);
//	return 0;
//}


//写一个代码：打印100-200之间的素数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i=100;i<=200;i++)
//	{
//		//判断i是否为素数
//		//素数判断规则：
//		//1.试除法
//		//13 2-12试除 产生 2->i-1
//		int j = 0;
//		for(j=2;j<i;j++)//for(j=2;j<=sqrt(i);j++)sqrt()是一个数学库函数 - 开平方
//		{
//			if(i%j == 0)
//			{
//				break;
//			}
//		}
//		if(j == i)//if(j>sqrt(i))
//		{
//			count++;
//			printf("%d ",i);
//		}
//	}
//	printf("\ncount = %d\n",count);
//	return 0;
//}


//编写程序数一下 1-100的所有整数中出现多少个数字9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i=1;i<=100;i++)
//	{
//		if(i%10 == 9)//模为9
//			count++;
//			printf("%d\n",i);
//		if(i/10 == 9)//商为9
//			count++;
//	}
//	printf("\ncount= %d\n",count);
//	return 0;
//}


//计算1/1-1/2+1/3-1/4+1/5...+1/99-1/100的值，打印出结果
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for(i=1;i<=100;i++)
//	{
//		sum += flag*1.0/i;//c语言中+=是代表两个变量相加，并将答案记录在左边的变量里。
//		flag = -flag;
//	}
//	printf("%lf\n",sum);
//	return 0;
//}


//求10个整数中最大值
//int main()
//{
//	int arr []={1,2,3,4,5,6,7,8,9,10,15};
//	int max = arr[0];//最大值
//	int i =0;
//	int sz =sizeof(arr)/sizeof(arr[0]);
//	for(i=0;i<sz;i++)
//	{
//		if(arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n",max);
//	return 0;
//}


//在屏幕上输出9*9乘法口诀表
//int main()
//{
//	int i = 0;
//	//确定打印9行
//	for(i=1;i<=9;i++)
//	{
//		//打印一行
//		int j =1;
//		for(j=1;j<=i;j++)
//		{
//			printf("%d*%d=%-2d ",i,j,i*j);//%2d是右对齐，%-2d是左对齐
//		}
//		printf("\n");
//	}
//	return 0;
//}


//猜数字游戏
//1.电脑会生成一个随机数
//2.猜数字

//void menu()
//{
//	printf("**********************************\n");
//	printf("*******  1.play    0.exit  *******\n");
//	printf("**********************************\n");
//}
//
//void game()
//{
//	//1.生成一个随机数
//	int ret = 0;
//	int guess = 0;
//	//时间戳 - 当前计算机的时间减去计算机的起始时间（1970.1.1.0:0:0）=（xxx）秒
//	//拿时间戳来设置随机数的生成起始点
//	//time_t time(time_t *timer)
//	//time_t
//	ret = rand()%100+1;//生成1-100之间随机数
//	//printf("%d\n",ret);
//	//2.猜数字
//	while(1)
//	{
//		printf("请猜数字:>");
//		scanf("%d",&guess);
//		if(guess>ret)
//		{
//			printf("猜大了\n");
//		}
//		else if(guess<ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了！\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//调用一次生成随机数
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d",&input);
//		switch(input)
//		{
//		case 1:
//			game();//猜数字游戏
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	}while(input);
//	return 0;
//}


//goto语句
//int main()
//{
//again:
//	printf("hello bit \n");
//	goto again;
//	return 0;
//}

//关机程序
int main()
{
	char input[20] = {0};
	//shutdown -s -t 60 60秒内关机
	//system() - 执行系统命令的
	system("shutdown -s -t 60");
again:
	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n请输入>:");
	scanf("%s",input);
	if(strcmp(input,"我是猪") == 0)//比较两个字符串
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}