#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//��������
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
//	//���Բ���cplusplus.com
//}

//strcpy����
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "############";
//	strcpy(arr2,arr1);//strcpy(Ŀ�ĵأ�Դͷ);
//	//'\0'Ϊ������־������arr1[]�����ĸ�Ԫ�أ��ֱ��ǣ�1.b 2.i 3.t 4.\0
//	//��ӡʱ����'\0'�����ٴ�ӡ�����#####
//	printf("%s\n",arr2);
//	return 0;
//}

//memset - memory set(�ڴ�����)
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr,'*',5);
//	printf("%s\n",arr);
//	//***** world
//	return 0;
//}


//�Զ��庯��
//дһ���������ҳ����������ԵĽϴ�ֵ
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

//дһ���������Խ����������ͱ���������(��Ҫ��ָ��ķ�ʽSwap2)
//void Swap1(int x, int y)//viod��ʾû�з���ֵ
//{
//	int tmp = 0;
//	tmp = x;
//	x = y; 
//	y = tmp;
//}
//x,y-�β�-��ʽ����-��ʽ�ϲ���
//
/*��ʵ�δ����βε�ʱ��
�βΰ���ʵ��ʵ�ε�һ����ʱ����
���βε��޸��ǲ���ı�ʵ�ε�
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
	/* ����Swap1���� - ��ֵ���� */
//	Swap1(a,b);//����ʱ����F11���뺯��
//	printf("a= %d b=%d\n",a,b);
	/* ����Swap2���� - ��ַ���� */
//	Swap2(&a,&b);
//	printf("a= %d b=%d\n",a,b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa��ָ�����
//	*pa = 20;//�����ò���
//	printf("%d\n",a);
//	return 0;
//}

//��ϰ
/* 1.дһ�����������ж�һ�����ǲ������� */
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

/* 2.�ж�һ���ǲ������� */
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
//		//�ж��Ƿ�Ϊ����
//		if(1 == is_year(a))
//		{
//			printf("%d\n",a);
//		}
//	}
//	return 0;
//}

/* 3.ʵ��һ��������������Ķ��ֲ��� */

				 //������arr��һ��ָ��
//int binary_search(int arr[], int k, int sz)
//{
//	//�㷨��ʵ��
//	int left = 0;
//	int right = sz -1;
//
//	while(left<=right)
//	{
//		int mid = (left+right)/2;//�м�Ԫ���±�
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
//	//���ֲ���
//	//��һ�����������в��Ҿ����ĳ����
//	//����ҵ��˷�����������±꣬�Ҳ����ķ���-1
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 8;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	          //����ȥ��������arr��Ԫ�صĵ�ַ
//	int ret = binary_search(arr,k,sz);
//	if(ret == -1)
//	{
//		printf("�Ҳ���ָ��������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n",ret);
//	}
//	return 0;
//}

/* 4.дһ��������ÿ����һ������������ͻὫnum��ֵ����1 */
//void Add(int* p)
//{
//	(*p)++;// ++�����ȼ�����*p,����Ҫ������
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

//������Ƕ�׵��ú���ʽ����

//int main()
//{
//	int len = 0;
//	//1.
//	len = strlen("abc");
//	printf("%d\n",len);
//	//2.
//	printf("%d\n",strlen("abc"));//��ʽ����
//	return 0;
//}

//int main()
//{
//	printf("%d",printf("%d",printf("%d",43)));//��ӡ�󷵻��ַ����� �����4321
//	return 0;
//}
//��������
int Add(int x,int y);
int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	//��������
	sum = Add(a,b);
	printf("%d\n",sum);
	return 0;
}

//�����Ķ���
int Add(int x,int y)
{
	int z =x+y;
	return z;
}