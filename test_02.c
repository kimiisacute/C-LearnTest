#define _CRT_SECURE_NO_WARNINGS 1
//只要加上这句话，统统不再出现不安全警告（加在原文件的第一行）
//找到newc++file.cpp文件，加入上面那句话，之后新建项目都会有这句话

#include <stdio.h>
#include <string.h>

/*int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	scanf("%d%d",&num1,&num2);*///scanf是C语言提供的，scanf_s不是标准C语言提供的，是VS编译器提供的
	//所以最好使用scanf，若scanf_s的话其他编译器不能识别，不能跨平台使用。
	//scanf
	//strcpy
	//strlen
	//..
	//传统意义上都是不安全的
	//编译器提供：strcpy_s
	/*sum = num1+num2;
	printf("sum = %d\n",sum);
	return 0;
}*/


//常量

//int main()
//{
	//const - 常属性
	//const int n = 10;//n是变量，但是又有常属性，所以我们说n是常变量
	//int arr[n] = {0};
	//n = 20;
	//const修饰的常变量

	//const int num =4;
	//printf("%d\n",num);
	//num =8;
	//printf("%d\n",num);
	////字面常量
	//3;
	//3.14;

	//return 0;
//}



//#define定义的标识符常量
//#define MAX 10
//int main()
//{
//	int arr[MAX] = {0};
//	printf("%d\n",MAX);
//	return 0;
//}



//4.枚举常量
//枚举 - 一一列举
//
//性别：男，女，保密
//三原色：红、黄、蓝
//星期：1，2，3，4，5，6，7

//枚举关键字 - enum

//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};//分号不可缺少
////MALE,FEMALE,SECRET - 枚举常量
//int main()
//{
//	//enum Sex s =FEMALE;
//	printf("%d\n",MALE);
//	printf("%d\n",FEMALE);
//	printf("%d\n",SECRET);
//	//打印出来后是0，
//	return 0;
//}



//字符串+转义字符+注释
//int main()
//{
//	char arr1[] = "abc";//数组
//	//数组重"abc"所放 -- 'a','b','c','\0' -- '\0'字符串的结束标志
//	char arr2[] = {'a','b','c'};
//	//'a','b','c'之后没有给\0的话，没有结束标志，随机打印了字符。
//	//添加0或\0，自己添加结束标志，不会出现乱码
//	//char arr2[] = {'a','b','c',0};
//	printf("%s\n",arr1);//%s为打印字符串
//	printf("%s\n",arr2);//打印出来的结果：abc烫烫烫烫蘟bc
//	return 0;
//} 


//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = {'a','b','c'};
//	printf("%d\n",strlen(arr1));//3 strlen - string length - 计算字符串长度的
//	printf("%d\n",strlen(arr2));//15(随机值),因为没有结束标识符，所以到随机值有\0这个结束标识符后才会结束
//	//字符串的结束标志是一个\0的转义字符，在计算字符串长度的时候\0是结束标志，不算
//	return 0;
//}


//int main()
//{
//	printf("c:\\test\\32\\test.c");
//	//\t会转义成水平制表符，若是要打印"c:\test\32\test.c"，则要在\前再加一个\，用于表示一个反斜杠，防止它被解释称一个转义字符
//	return 0;
//}



//int main()
//{
//	printf("%d\n",strlen("c:\test\32\test.c"));
//	printf("%c\n",'\32');
//	//打印结果为13，转义字符算是一个字符，则\t,\32,\t，各算一个字符
//	//\32 -- 32是2个8进制的数字，21作为8进制代表的那个十进制数字，作为ASCII码值，对应的字符
//	//32 -- > 10进制 26 - >作为ASCII码值代表的字符
//	printf("%c\n",'\x61');
//	//\xdd，dd表示2个16进制的数字
//	return 0;
//}


//IF语句
//int main()
//{
//	int input = 0;
//	printf("加入\n");
//	printf("学习？(1/0)>:");
//	scanf("%d",&input);//判断1 or 0
//	if(input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//	return 0;
//}



//循环
//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//
//	while(line<=20000)//判断语句
//	{
//		printf("敲一行代码:%d\n",line);
//		line++;
//	}
//	if(line>=20000)
//		printf("好工作\n");
//	return 0;
//}




//函数
//int Add(int x, int y)//自定义函数
//{
//	int z = x+y;
//	return z;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 =20;
//	int sum = 0;
//	int a = 100;
//	int b =200;
//	//sum = num1 +num2;
//	sum = Add(num1,num2);//调用上面的Add函数
//	printf("sum=%d\n",sum);
//	//sum = a + b;
//	sum = Add(a,b);
//	printf("sum=%d\n",sum);
//	return 0;
//}


//数组:一组相同类型的数据的结合
//int main()
//{
//	//int a = 1;
//	//int b = 2;
//	//int c = 3;
//	//int d = 4;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//定义一个存放10个整数数字的数组
//				 //0,1,2,3,4,5,6,7,8,9 这为下标，下标从0开始
//	//printf("%d\n",arr[4]);
//	int i =0;
//	while(i<10)
//	{
//		printf("%d\n",arr[i]);
//		i++;
//	}
//	//arr[下标]
//	//char ch[20]; 存放20个字符的数组
//	return 0;
//}



//int main()
//{
//	int a = 5/2;//取商
//	int a = 5%2;//取模
//	printf("%d\n",a);
//	return 0;
//}


//移位
//int main()
//{
//	//移（2进制）位操作符
//	//<<左移
//	//>>右移
//	int a =1;
//	int z =10;
//	//整型1占4个字节-32bit位
//	//00000000000000000000000000000001
//	int b = a<<1;
//	//00000000000000000000000000000010
//	int c = z>>1;
//	printf("%d\n",b);
//	printf("%d\n",c);
//	return 0;
//}



//位操作
//int main()
//{
//	//（2进制）位操作
//	//& 按位与
//	//| 按位或
//	//^ 按位异或
//	int a =3;
//	int b =5;
//	int c= a&b;
//	int d= a|b;
//	int e= a^b;
//	/*异或的计算规律：
//	对应的二进制位相同，则为0
//	对应的二进制位相异，则为1
//	*/
//	//011
//	//101
//	//与的结果位001
//	//或的结果位111
//	//异或的结果位110
//	printf("%d\n",c);
//	printf("%d\n",d);
//	printf("%d\n",e);
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	a = 20;// =赋值 ==判断相等
//	a = a+10;
//	a = a-20;
//
//	return 0;
//}

int main()
{
	int a = 10;
	int arr[10] = {0};
	int sz = 0;
	//10*sizeof(int)=40
	printf("%d\n",sizeof(arr));
	//计算数组的元素个数
	//个数 = 数组总大小/每个元素的大小
	sz = sizeof(arr)/sizeof(arr[0]);
	printf("sz = %d\n",sz);
	//printf("%d\n",sizeof(a));
	return 0;
}