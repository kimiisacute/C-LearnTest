#define _CRT_SECURE_NO_WARNINGS 1
//ֻҪ������仰��ͳͳ���ٳ��ֲ���ȫ���棨����ԭ�ļ��ĵ�һ�У�
//�ҵ�newc++file.cpp�ļ������������Ǿ仰��֮���½���Ŀ��������仰

#include <stdio.h>
#include <string.h>

/*int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	scanf("%d%d",&num1,&num2);*///scanf��C�����ṩ�ģ�scanf_s���Ǳ�׼C�����ṩ�ģ���VS�������ṩ��
	//�������ʹ��scanf����scanf_s�Ļ���������������ʶ�𣬲��ܿ�ƽ̨ʹ�á�
	//scanf
	//strcpy
	//strlen
	//..
	//��ͳ�����϶��ǲ���ȫ��
	//�������ṩ��strcpy_s
	/*sum = num1+num2;
	printf("sum = %d\n",sum);
	return 0;
}*/


//����

//int main()
//{
	//const - ������
	//const int n = 10;//n�Ǳ������������г����ԣ���������˵n�ǳ�����
	//int arr[n] = {0};
	//n = 20;
	//const���εĳ�����

	//const int num =4;
	//printf("%d\n",num);
	//num =8;
	//printf("%d\n",num);
	////���泣��
	//3;
	//3.14;

	//return 0;
//}



//#define����ı�ʶ������
//#define MAX 10
//int main()
//{
//	int arr[MAX] = {0};
//	printf("%d\n",MAX);
//	return 0;
//}



//4.ö�ٳ���
//ö�� - һһ�о�
//
//�Ա��У�Ů������
//��ԭɫ���졢�ơ���
//���ڣ�1��2��3��4��5��6��7

//ö�ٹؼ��� - enum

//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};//�ֺŲ���ȱ��
////MALE,FEMALE,SECRET - ö�ٳ���
//int main()
//{
//	//enum Sex s =FEMALE;
//	printf("%d\n",MALE);
//	printf("%d\n",FEMALE);
//	printf("%d\n",SECRET);
//	//��ӡ��������0��
//	return 0;
//}



//�ַ���+ת���ַ�+ע��
//int main()
//{
//	char arr1[] = "abc";//����
//	//������"abc"���� -- 'a','b','c','\0' -- '\0'�ַ����Ľ�����־
//	char arr2[] = {'a','b','c'};
//	//'a','b','c'֮��û�и�\0�Ļ���û�н�����־�������ӡ���ַ���
//	//���0��\0���Լ���ӽ�����־�������������
//	//char arr2[] = {'a','b','c',0};
//	printf("%s\n",arr1);//%sΪ��ӡ�ַ���
//	printf("%s\n",arr2);//��ӡ�����Ľ����abc���������abc
//	return 0;
//} 


//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = {'a','b','c'};
//	printf("%d\n",strlen(arr1));//3 strlen - string length - �����ַ������ȵ�
//	printf("%d\n",strlen(arr2));//15(���ֵ),��Ϊû�н�����ʶ�������Ե����ֵ��\0���������ʶ����Ż����
//	//�ַ����Ľ�����־��һ��\0��ת���ַ����ڼ����ַ������ȵ�ʱ��\0�ǽ�����־������
//	return 0;
//}


//int main()
//{
//	printf("c:\\test\\32\\test.c");
//	//\t��ת���ˮƽ�Ʊ��������Ҫ��ӡ"c:\test\32\test.c"����Ҫ��\ǰ�ټ�һ��\�����ڱ�ʾһ����б�ܣ���ֹ�������ͳ�һ��ת���ַ�
//	return 0;
//}



//int main()
//{
//	printf("%d\n",strlen("c:\test\32\test.c"));
//	printf("%c\n",'\32');
//	//��ӡ���Ϊ13��ת���ַ�����һ���ַ�����\t,\32,\t������һ���ַ�
//	//\32 -- 32��2��8���Ƶ����֣�21��Ϊ8���ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ����Ӧ���ַ�
//	//32 -- > 10���� 26 - >��ΪASCII��ֵ������ַ�
//	printf("%c\n",'\x61');
//	//\xdd��dd��ʾ2��16���Ƶ�����
//	return 0;
//}


//IF���
//int main()
//{
//	int input = 0;
//	printf("����\n");
//	printf("ѧϰ��(1/0)>:");
//	scanf("%d",&input);//�ж�1 or 0
//	if(input == 1)
//		printf("��offer\n");
//	else
//		printf("������\n");
//	return 0;
//}



//ѭ��
//int main()
//{
//	int line = 0;
//	printf("�������\n");
//
//	while(line<=20000)//�ж����
//	{
//		printf("��һ�д���:%d\n",line);
//		line++;
//	}
//	if(line>=20000)
//		printf("�ù���\n");
//	return 0;
//}




//����
//int Add(int x, int y)//�Զ��庯��
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
//	sum = Add(num1,num2);//���������Add����
//	printf("sum=%d\n",sum);
//	//sum = a + b;
//	sum = Add(a,b);
//	printf("sum=%d\n",sum);
//	return 0;
//}


//����:һ����ͬ���͵����ݵĽ��
//int main()
//{
//	//int a = 1;
//	//int b = 2;
//	//int c = 3;
//	//int d = 4;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//����һ�����10���������ֵ�����
//				 //0,1,2,3,4,5,6,7,8,9 ��Ϊ�±꣬�±��0��ʼ
//	//printf("%d\n",arr[4]);
//	int i =0;
//	while(i<10)
//	{
//		printf("%d\n",arr[i]);
//		i++;
//	}
//	//arr[�±�]
//	//char ch[20]; ���20���ַ�������
//	return 0;
//}



//int main()
//{
//	int a = 5/2;//ȡ��
//	int a = 5%2;//ȡģ
//	printf("%d\n",a);
//	return 0;
//}


//��λ
//int main()
//{
//	//�ƣ�2���ƣ�λ������
//	//<<����
//	//>>����
//	int a =1;
//	int z =10;
//	//����1ռ4���ֽ�-32bitλ
//	//00000000000000000000000000000001
//	int b = a<<1;
//	//00000000000000000000000000000010
//	int c = z>>1;
//	printf("%d\n",b);
//	printf("%d\n",c);
//	return 0;
//}



//λ����
//int main()
//{
//	//��2���ƣ�λ����
//	//& ��λ��
//	//| ��λ��
//	//^ ��λ���
//	int a =3;
//	int b =5;
//	int c= a&b;
//	int d= a|b;
//	int e= a^b;
//	/*���ļ�����ɣ�
//	��Ӧ�Ķ�����λ��ͬ����Ϊ0
//	��Ӧ�Ķ�����λ���죬��Ϊ1
//	*/
//	//011
//	//101
//	//��Ľ��λ001
//	//��Ľ��λ111
//	//���Ľ��λ110
//	printf("%d\n",c);
//	printf("%d\n",d);
//	printf("%d\n",e);
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	a = 20;// =��ֵ ==�ж����
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
	//���������Ԫ�ظ���
	//���� = �����ܴ�С/ÿ��Ԫ�صĴ�С
	sz = sizeof(arr)/sizeof(arr[0]);
	printf("sz = %d\n",sz);
	//printf("%d\n",sizeof(a));
	return 0;
}