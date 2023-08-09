//包含一个交stdio.h的文件
//std-标准 standard input output
#include <stdio.h>

//int main()//主函数-程序的入口 -main函数有且只有一个
//{
	//（Fn+F10可以一步一步调试）
	//printf("hello world\n");
	//库函数-C语言本身给提供给我们使用的函数
	//别人的东西-打招呼
	//#include
	//system("pause");//加上这句话 程序不会一闪而过
	//选择项目test_01右击，选择属性-->链接器-->系统-->子系统 选择控制台，则不会一闪而过，也不需要加上面的system("pause");
	//return 0;//ctrl+F5运行 若是运行不成功则Fn+ctrl+F5
//}

//int是整型的意思
//main前面的int表示main函数调用返回一个整型值
//int main()
//{
	//这里完成任务
	//在屏幕上输出 hello world
	//函数 - print function - printf - 打印函数
	//return 0;//返回0
//}

//这种写法过失了
//void main()
//{

//}


//char - 字符类型
//%d - 打印整型 
//%c - 打印字符
//%f - 打印浮点数字 -打小数
//%p - 以地址的形式打印
//%x - 打印16进制数字
//int main()
//{
	//char ch='A';//向内存申请一块空间叫ch
	//printf("%c\n",ch);//%c -- 打印字符格式的数据，%d打印整型格式的数据,
	//若是打印%d的话，出来的则是65，A的ASCII编码

	//short int - 短整型
	//int -整型
	//int age =20;
	//printf("%d\n",age);//%d -- 打印整型十进制数据

	//long 长整型
	//long num=100;
	//printf("%d\n",num);

	//float f =5.212;
	//printf("%f\n",f);

	//double d =3.14;
	//printf("%lf\n",d);
	//return 0;
//}

//int main()
//{
	//short int age=2330;//2的16次方为65536 一个数字占一个字节，
	//不同的数据类型表示了占内存的多少，设置不同的数据类型是为了节省内存空间
	//printf("%d\n",age);
	//printf("%d\n",sizeof(char));//1字节 sizeof(char)计算char这种类型向内存申请空间能够申请多少
	//printf("%d\n",sizeof(short));//2字节
	//printf("%d\n",sizeof(int));//4字节
	//printf("%d\n",sizeof(long));//4字节
	//printf("%d\n",sizeof(long long));//8字节
	//printf("%d\n",sizeof(float));//4字节
	//printf("%d\n",sizeof(double));//8字节
	//字节 - 计算机中单位
	//bit - 最小单位 - 比特位
	//byte - 字节 - 1个字节是8个比特位  1byte = 8bit
	//kb - 1kb = 1024byte
	//mb - 1mb=1024kb
	//gb - 1gb=1024mb
	//tb - 1tb=1024gb
	//pb - 1pb=1024tb
	//return 0;
//}

//int main()
//{
	//年龄
	//20
	//short age = 20;//向内存申请2个字节=16bit位，用来存放20
	//double weight = 95.5f;//向内存申请4个字节，存放小数
	//printf("%d\n",age);
	//printf("%f\n",weight);//需要使用%f打印浮点类型
	//return 0;
//}



//变量部分


//int a=10;
//int main()
//{
//	{
//		int a=10; //依然是局部变量，但是不能在局部范围外使用，若是没有声明全局变量a，则运行失败
//	}
//	printf("%d\n",a);
//}

//int a =100;
//int main()
//{
//	int a = 10;
//	//局部变量和全局变量的名字建议不要相同，容易误会产生bug
//	//当局部变量和全局变量的名字相同的时候，局部变量优先
//	printf("%d\n",a);
//	return 0;
//}

//int num2=20;//全局变量 - 定义在代码块（{}）之外的变量
//int main()
//{
//	int num1 =10;//局部变量 - 定义在代码块（{}）内部的变量
//	return 0;
//}


//int main()
//{
//	//计算2个数的和
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//输入数据 - 使用输入函数scanf
//	scanf("%d%d",&num1,&num2);//& - 取地址符号
//	//int sum = 0;
//	//C语言语法规定，变量要定义在当前代码块的最前面
//	sum = num1 + num2;
//	printf("sum=%d\n",sum);
//	return 0;
//}


//局部变量作用域和全局变量的作用域

//int main()
//{
//	{
//		int num = 0;
//		printf("num = %d\n",num);
//		//局部作用域 - 变量所在的局部范围内
//	}
//	return 0;
//}
//
//int global = 2020;
//
//void test()//函数
//{
//	printf("test()--%d\n",global);
//}
//int main()
//{
//	printf("%d\n",global);
//	return 0;
////}


//int main()
//{
//	//未声明的标识符
//	//声明extern外部符号的
//	extern int g_val;//g_val全局变量在sum.c文件中
//	printf("g_val =%d\n",g_val);
//	return 0;
//}


//局部变量的生命周期
//int main()
//{
//	{
//		int a =10;
//		printf("a=%d\n",a);//ok
//	}
//	printf("a=%d\n",a);//error
//	return 0;
//}