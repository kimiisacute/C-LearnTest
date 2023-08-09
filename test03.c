#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//题：求两个数的较大值

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d",&a,&b);
//	if(a>b)
//		printf("较大值是%d\n",a);
//	else if(a==b)
//		printf("值相等是%d\n",a);
//	else
//		printf("较大值是%d\n",b);
//	return 0;
//}

//int Max(int x ,int y)
//{
//	if(x>y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d",&a,&b);
//	c = Max(a,b);
//	printf("最大值=%d\n",c);
//	return 0;
//}


//新内容

//int main()
//{
//	int a = 10;
//	int arr[] = {1,2,3,4,5,6};
//	printf("%d\n",sizeof(a));
//	printf("%d\n",sizeof(arr));//计算数组大小，单位是字节
//	return 0;
//}

//int main()
//{
//	int a = 0;//4个字节，32bit位
//	//0（符号位）0000000000000000000000000000000
//	int b = ~a;//b是有符号的整型
//	// ~ -- 按位（2进制）取反
//	//1（符号位）1111111111111111111111111111111
//	//原码、反码、补码
//	//负数在内存重存储的时候，存储的是二进制的补码
//	//1（符号位，1为负，0为正）1111111111111111111111111111111 -原码
//	//1（符号位）0000000000000000000000000000000 -反码（符号位不变，其他按位取反）
//	//1（符号位）0000000000000000000000000000001 -补码（反码+1）
//	printf("%d\n",b);//使用的，打印的是这个数的原码
//	return 0;
//}
//


//操作符++和--

//int main()
//{
//	int a = 10;
//	//int b = a++;//后置++，先将a的值赋给b，a再++，得到新的a的值
//	//int b = ++a;//前置++，a先++，再把a的值赋给b
//	//int b = a--//;a=9,b=10
//	int b = --a;//a=9,b=9
//	printf("a = %d\n b = %d\n",a,b);//a = 11; b = 10 ———(2) a=11 b=11
//	return 0;	
//}


//操作符（强制类型转换）

//int main()
//{
//	int a = (int)3.14;//强制类型转换
//	return 0;
//}


//int main()
//{
//	//真 - 非0
//	//假 - 0
//	//&& - 逻辑与
//	//|| - 逻辑或
//	int a = 0;
//	int b = 5;
//	//int c = a&&b;//----结果为0
//	int c = a||b;//----结果为1
//	printf("c=%d\n",c);
//	return 0;
//}


//exp1?exp2:exp3;三目操作符
//int main()
//{
//	int a = 30;
//	int b = 20;
//	int max = 0;
//	max =(a>b?a:b);//条件1：a>b?若为真，则结果为a,若为假，结果为b
//	printf("%d\n",max);
//	return 0;
//}



//int main()
//{
//	int a = 10;//局部变量-也叫自动变量-在前面省略了auto
//	return 0;
//}



//int main()
//{
// 	//register int a = 10;//建议把a定义成寄存器变量
//	int a = 10;
//	a = -2;
//	//int定义的变量是有符号的，完整为：
//	//signed int;
//	//unsigned int num = 0;定义为无符号数
//	return 0;
//}


//int main()
//{
//	// typedef - 类型定义 - 类型重定义
//	typedef unsigned int u_int;//觉得unsigned int名字太长了，重新定义一个新名字为u_int
//	unsigned int num =20;
//	u_int num2 = 20;//上面的num和num2的类型都是同一类型——无符号数
//	return 0;
//}


//关键词static
//1.static修饰局部变量
//当static修饰局部变量时，局部变量的生命周期边长
//void test()
//{
//	static int a = 1;//a是一个静态的局部变量
//	a++;
//	printf("a=%d\n",a);
//}
//int main()
//{
//	int i = 0;
//	while(i<5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//2.static修饰全局变量
//改变了变量的作用域 - 让静态的全局变量只能在自己所在的源文件内部使用
//出了源文件就没法再使用了
//int main()
//{
//	//extern - 声明外部符号的
//	extern int g_val;
//	printf("%d\n",g_val);
//	return 0;
//}

//3.static修饰函数
//也是改变了函数的作用域-不准确
//static修饰函数改变了函数的链接属性
//外部链接属性 -> 内部链接属性
//extern int Add(int,int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a,b);//要先声明外部函数
//	printf("sum = %d\n",sum);
//	return 0;
//}


//#define 定义标识符常量

//#define Max 100//定义一个符号叫Max，Max的值为100
////未来编译器只要遇到Max，就会替换成100
//int main()
//{
//	int a = Max;
//	printf("%d\n",a);
//	return 0;
//}

//#define 可以定义宏-带参数

//函数的实现
//int Max(int x,int y)
//{
//	if(x>y)
//		return x;
//	else
//		return y;
//}
////宏的定义
//#define MAX(X,Y)(X>Y?X:Y)
//int main()
//{
//	int a = 10;
//	int b =20;
//	int max = Max(a,b);
//	//函数的方式
//	printf("max = %d\n",max);
//	//宏的方式
//	max = MAX(a,b);//max=(a>b?a:b);
//	printf("max = %d\n",max);
//	return 0;
//}




//指针

//int main()
//{
//	int a = 10;//向内存申请4个字节
//	int* p = &a;//取出a的地址
//	printf("%p\n",p);
//	//有一种变量是用来存放地址的 - 指针变量
//	printf("%p\n",&a);//打印a的地址
//	*p = 20;//* - 解引用操作符
//	printf("%d\n",a);
//	return 0;
//}

int main()
{
	char ch = 'w';
	char* pc= &ch;
	printf("%d\n",sizeof(pc));
	//*pc = 'a';
	//printf("%c\n",ch);
	return 0;
}