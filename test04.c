#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main()
//{
//	int a = 10;//向内存申请了4个字节的空间
//	//printf("%p\n",&a);
//	int* p =&a;//p是一个变量 - 指针变量  int*是一种类型 - *的意思告诉我们p是一个指针类型
//	//printf("%p\n",p);
//	*p = 200;//这里的*是一个解引用操作符 - 间接访问操作符
//	printf("%d\n",a);
//	return 0;
//}

//int main()
//{
//	double d =3.14;
//	double* pd =&d;
//	*pd = 2.13;
//	printf("%lf\n",*pd);//写*pd和d都可以
//	return 0;
//}

//结构体
// char int double..
//书 - 复杂对象
//人 - 名字+身高+年龄+身份证号码..
//书名+坐着+出版社+定价+书号..
//复杂对象 - 结构体 -我们自己创造出来一种的类型
//
//创建一个结构体类型
struct Book//struct - 结构体
{
	char name[20];//C语言程序设计
	short price;
};//分号不可缺少

int main()
{
	//利用结构体类型 - 创建一个该类型的结构体变量
	struct Book b1 = {"C语言程序设计",55};
	struct Book *pb = &b1;
	//利用pb打印出书名和价格
	// ‘.’结构体变量.成员
	// ‘->’结构体指针->成员
	printf("%s\n",pb->name);
	printf("%d\n",pb->price);
	/*printf("%s\n",(*pb).name);
	printf("%d\n",(*pb).price);*/

	/*printf("书名：%s\n",b1.name);
	printf("价格：%d\n",b1.price);*/
	return 0;
}