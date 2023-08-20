#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//函数部分
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a,b);
//	printf("%d\n",sum);
//	return 0;
//	//可以查阅cplusplus.com
//}

//strcpy函数
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "############";
//	strcpy(arr2,arr1);//strcpy(目的地，源头);
//	//'\0'为结束标志，所以arr1[]存了四个元素，分别是：1.b 2.i 3.t 4.\0
//	//打印时遇到'\0'后，则不再打印后面的#####
//	printf("%s\n",arr2);
//	return 0;
//}

//memset - memory set(内存设置)
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr,'*',5);
//	printf("%s\n",arr);
//	//***** world
//	return 0;
//}


//自定义函数
//写一个函数，找出俩个函数对的较大值
//int getmax(int x ,int y)
//{
//	if(x>y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = getmax(a,b);
//	printf("max = %d\n",max);
//	max = getmax(200,210);
//	printf("max = %d\n",max);
//	return 0;
//}

//写一个函数可以交换两个整型变量的内容(需要用指针的方式Swap2)
//void Swap1(int x, int y)//viod表示没有返回值
//{
//	int tmp = 0;
//	tmp = x;
//	x = y; 
//	y = tmp;
//}
//x,y-形参-形式参数-形式上参数
//
/*当实参传给形参的时候
形参啊其实是实参的一份临时拷贝
对形参的修改是不会改变实参的
*/
//void Swap2(int* pa,int*pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
	/* 调用Swap1函数 - 传值调用 */
//	Swap1(a,b);//调试时按下F11进入函数
//	printf("a= %d b=%d\n",a,b);
	/* 调用Swap2函数 - 传址调用 */
//	Swap2(&a,&b);
//	printf("a= %d b=%d\n",a,b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa是指针变量
//	*pa = 20;//解引用操作
//	printf("%d\n",a);
//	return 0;
//}

//练习
/* 1.写一个函数可以判断一个数是不是素数 */
//int is_prime(int n)
//{
//	int j = 0;
//	for(j=2; j<n;j++)
//	{
//		if(n%j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for(i=100; i<=200; i++)
//	{
//		if(is_prime(i) == 1)
//			printf("%d ",i);
//	}
//	return 0;
//}

/* 2.判断一年是不是闰年 */
//int is_year(int x)
//{
//	if((x%4 == 0 || x%100!= 0) || (x%400 == 0))
//		return 1;
//}
//int main()
//{
//	int a = 0;
//	for(a = 1000;a <=2000; a++)
//	{
//		//判断是否为闰年
//		if(1 == is_year(a))
//		{
//			printf("%d\n",a);
//		}
//	}
//	return 0;
//}

/* 3.实现一个整型有序数组的二分查找 */

				 //本质上arr是一个指针
//int binary_search(int arr[], int k, int sz)
//{
//	//算法的实现
//	int left = 0;
//	int right = sz -1;
//
//	while(left<=right)
//	{
//		int mid = (left+right)/2;//中间元素下标
//		if(arr[mid]<k)
//		{
//			left = mid+1;
//		}
//		else if(arr[mid]>k)
//		{
//			right = mid-1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	//二分查找
//	//在一个有序数组中查找具体的某个数
//	//如果找到了返回这个数的下标，找不到的返回-1
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 8;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	          //传过去的是数组arr首元素的地址
//	int ret = binary_search(arr,k,sz);
//	if(ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n",ret);
//	}
//	return 0;
//}

/* 4.写一个函数，每调用一次这个函数，就会将num的值增加1 */
//void Add(int* p)
//{
//	(*p)++;// ++的优先级高于*p,所以要括起来
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n",num);
//	Add(&num);
//	printf("%d\n",num);
//	Add(&num);
//	printf("%d\n",num);
//	return 0;
//}

//函数的嵌套调用和链式访问

//int main()
//{
//	int len = 0;
//	//1.
//	len = strlen("abc");
//	printf("%d\n",len);
//	//2.
//	printf("%d\n",strlen("abc"));//链式访问
//	return 0;
//}

//int main()
//{
//	printf("%d",printf("%d",printf("%d",43)));//打印后返回字符个数 结果是4321
//	return 0;
//}
//函数声明
int Add(int x,int y);
int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	//函数调用
	sum = Add(a,b);
	printf("%d\n",sum);
	return 0;
}

//函数的定义
int Add(int x,int y)
{
	int z =x+y;
	return z;
}