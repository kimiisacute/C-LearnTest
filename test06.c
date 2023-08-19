#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>

//while循环

//int main()
//{
//	int i = 0;//初始化
//	while(i<10)//判断
//	{
//		//... ...
//		i++;//调整
//	}
//	return 0;
//}


//int main()
//{
//	/*
//	int ch = 0;
//	//EOF - end of file 文件结束标志
//	while((ch = getchar())!=EOF)
//	{
//		putchar(ch);
//	}*/
//	int ret = 0;
//	int ch = 0;
//	char password[20] = {0};
//	printf("请输入密码:>");
//	scanf("%s",password);//输入密码，并存放在password数组中
//	//缓冲区还剩余一个‘\n’
//	//读取一下'\n'
//	//getchar();//读走了缓冲区的‘\n’,接下来缓冲区为空，接下来继续读
//	while((ch= getchar())!='\n')//判断是否为\n，直到一个\n放到ch里面去
//	{
//		;//空语句
//	}
//	printf("请确认(Y/N):>");
//	ret = getchar();//Y/N
//	if(ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//
//	//printf("%d\n",'\n');
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while((ch=getchar())!=EOF)
//	{
//		if(ch<'0'||ch>'9')
//		{
//			continue;//若满足条件，则跳过下面部分代码，直接进入循环
//			putchar(ch);
//		}
//	}
//	return 0;
//}



//for循环
//for(表达式1；表达式2；表达式3) 
//表达式1为初始化部分，用于初始化循环变量的。
//表达式2为条件判断部分，用于判断循环时终止
//表达式3为调整部分，用于循环条件的调整
//循环语句

//int main()
//{
//	//使用for循环在屏幕上打印1-10的数字
//	int i = 0;
//	//初始化 判断 调整 集中在一起
//	for(i=1;i<=10;i++)
//	{
//		printf("%d\n",i);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for(i=1;i<=10;i++)
//	{
//		if(i == 5)
//			continue;
//		printf("%d\n",i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for(i=1;i<10;i++)
//	{
//		if(i = 5)//在此处i被赋值为5
//			printf("haha\n");
//		printf("hehe\n");
//	}
//	return 0;
//}

//变种1
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for(;i<10;i++)
//	{
//		for(;j<10;j++)//i=0时，j++到10不等于j<10，所以i=1时，j被存储为10，不再输出hehe
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}

//变种2
//int main()
//{
//	int x,y;
//	for(x = 0, y = 0; x<2 && y<5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for(i=0,k=0;k=0;i++,k++)//判断k=0为假，循环不进行（则这个代码循环0次）
//		k++;
//	return 0;
//}


//do...while()循环

//int main()
//{
//	//打印1-10 限制用do..while循环
//	int i =1;
//	do
//	{
//		if(i == 5)
//			continue;
//		printf("%d\n",i);
//		i++;
//	}
//	while(i<=10);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	while(i<=50)
//	{
//		if(i%2!=0)
//		{
//			i++;
//			continue;
//		}
//		printf("输出的数值为：%d\n",i);
//		i++;
//	}
//	return 0;
//}

//练习
//1.计算n的阶乘（1*2*3*...*n）
//2.计算1！+2！+3！+...+10！
//3.在一个有序数组中查找具体的某个数字n。编写int binsearch（int x，int v[]，int n）;

//1.1*2*3*..*n
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for(i=1,j=1;i<4;i++)
//	{
//		j = i-1;
//		k = j*i;
//		printf("值为 %d\n",k);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n",ret);
//	return 0;
//}

//2.
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum =0;
//	for(n=1;n<=4;n++)
//	{
//		//ret = 1;//初始化
//		for(i=1;i<=n;i++)
//		{
//			ret = ret * i;//i=1,运行后再i=2相乘再i=3相成
//		}
//		//n的阶乘
//		sum = sum +ret;
//	}
//	printf("%d\n",sum);
//	return 0;
//}

//优化
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum =0;
//	for(n=1;n<=3;n++)
//	{
//		ret = ret *n;
//		//n的阶乘
//		sum = sum +ret;
//	}
//	printf("%d\n",sum);
//	return 0;
//}

/*3、在一个有序数组中查找具体的某个数字n，编写int binsearch(int x,int v[],int n);
功能：在v[0]<=v[1]<=v[2]<=..<=v[n-1]的数组中查找x
*/

//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	//写一个代码，在arr数组（有序）中找到7
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);//求数组arr的长度,也就是元素个数
//	//sizeof (arr) 就是这个数组所占的内存总量也就是字节总数, sizeof(arr[0]) 就是单个数组所占的内存.
//	for(i=0;i<sz;i++)
//	{
//		if(k == arr[i])
//		{
//			printf("找到了，下标是：%d\n",i);
//			break;
//		}
//	}
//	if(i == sz)
//		printf("找不到\n");
//	return 0;
//}



//折半（二分）查找算法
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k =8;
//
//	int sz = sizeof(arr)/sizeof(arr[0]);//计算元素个数
//	int left = 0;//左下标
//	int right = sz-1;//右下标
//	while(left<=right)//只有这种情况下才有中间元素可以查找
//	{
//		int mid = (left+right)/2;//通过左右下标锁定中间元素下标，在进行元素比较
//		if(arr[mid] > k)
//		{
//			right = mid-1;
//		}
//		else if(arr[mid]<k)
//		{
//			left = mid+1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n",mid);
//			break;
//		}
//	}
//	if(left>right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//4、编写代码，演示多个字符从两端移动，向中间汇聚
//int main()
//{
//	//welcom to bit!!!!!
//	//##################
//	//w################!
//	//we##############!!
//	//wel############!!!
//	//...
//	//welecom to bit!!!!
//	//char arr[]="abc"
//	//[a b c \0]
//	char arr1[] = "welcom to bit!!!!!";
//	char arr2[] = "##################";
//	int left = 0;
//	//int right = sizeof(arr1)/sizeof(arr1[0])-2;//-2才是'!'的下标
//	int right = strlen(arr1)-1;//strlen不包含\0的下标个数
//	while(left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n",arr2);
//		Sleep(1000);//休息一秒
//		system("cls");//执行系统命令的一个函数 - cls - 清空屏幕
//		left++;
//		right--;
//	}
//	return 0;
//}

/*5、编写代码实现，模拟用户登录情景，并且只能登录三次。
（只允许输入三次密码，如果密码正确则提示登陆完成，如果三次均输入错误，则退出程序。）*/
int main()
{
	int i = 0;
	char password[20]={0};//字符数
	for(i=0;i<3;i++)
	{
		printf("请输入密码:>");
		scanf("%s",password);
		if(strcmp(password,"123456")==0)// == 不能用来比较两个字符串是否相等，应该使用一个库函数 - strcmp
		//这个strcmp函数规定左边大于右边返回正数，左边等于右边返回0，左边小于右边返回负数
		{
			printf("登陆成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
	if(i == 3)
		printf("三次输入密码均错误，请退出\n");
	return 0;
}