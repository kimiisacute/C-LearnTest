#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//分支语句
//int main()
//{
//	int age = 10;
//	scanf("%d",&age);//scanf使用，后面需要取要输入的地址
//	if(age<18)
//		printf("未成年\n");
//	else
//		printf("成年\n");
//	return 0;
//}

//int main()
//{
//	int age = 100;
//	scanf("%d",&age);
//	if(age<18)
//		printf("未成年\n");
//	else if(age>18 && age<28)
//		printf("青年\n");
//	else if(age>28 && age<50)
//		printf("壮年\n");
//	else if(age>50 && age<90)
//		printf("老年\n");
//	else if(age>90)
//		printf("高龄活宝\n");
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 2;
//	if(a == 1)
//		if(b == 2)
//			printf("hehe\n");
//		else//else就近原则
//			printf("haha\n");
//	return 0;
//}

//int main()
//{
//	int num = 4;
//	if(num = 5)// = 和 == 不一样，‘=’是赋值，‘==’是判断数值是否相等
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

/*练习
	1、判断一个数是否为奇数
	2、输出1-100之间的奇数
	*/
//int main()
//{
//	int a = 10;
//	scanf("%d",&a);
//	if(a%2==0)
//		printf("偶数\n");
//	else
//		printf("奇数\n");
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	if(a>=0 && a<100)
//	{
//		a++;
//		if(a%2==1)
//			printf("%d\n",a);
//	}
//	else
//
//	return 0;
//}

//答案
//int main()
//{
//	int i = 1;
//	while(i<100)
//	{
//		if(i%2 ==1)
//			printf("%d\n",i);
//		i++;
//	}
//	return 0;
//}

//switch - case 语句
//实现多分支语句
//int main()
//{
//	int day = 0;
//	scanf("%d",&day);
//	switch(day)
//	{
//	case 1://整型常量表达式
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//		//break - 跳出语句
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d",&day);
//	switch(day)
//	{
//	case 1://整型常量表达式
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//		//break - 跳出语句
//	default:
//		printf("输入错误\n");
//		break;
//		//可有可无，default处理非法错误
//		//case和default没有输入顺序，随便放哪里都可以
//	}
//	return 0;
//}


//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch(n)//case1,case2,case4后都没有接break，所以语句要持续执行下去，直到出现break
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch(n)
//		{
//		case 1:n++;
//		case 2:m++;n++;
//			break;
//		}
//	case 4: m++;
//	default:
//		break;
//	}
//	printf("m= %d,n=%d\n",m,n);
//	return 0;
//}


//while循环
//条件为真（1），则执行语句，条件为假（0），停止执行语句
//int main()
//{
//	/*while(1)
//		printf("hehe\n");*/
//	int i = 1;
//	while(i<10)
//	{
//		if(i == 5)
//			continue;//终止循环中本次循环。continue后面的代码不再执行，直接跳转到while循环部分
//			//break;//到五结束
//		//break - 永久终止循环
//		printf("%d\n",i);
//		i++;
//	}
//	return 0;
//}


int main()
{
	int ch = 0;
	//Ctrl+z
	//EOF - end of file 值为-1
	while((ch=getchar())!=EOF)
	{
		putchar(ch);//在循环中，则可以输入多个字符
	}

	/*int ch = getchar();
	putchar(ch);
	printf("%c\n",ch);*/
	return 0;
}