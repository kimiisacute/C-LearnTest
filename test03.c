#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//�⣺���������Ľϴ�ֵ

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d",&a,&b);
//	if(a>b)
//		printf("�ϴ�ֵ��%d\n",a);
//	else if(a==b)
//		printf("ֵ�����%d\n",a);
//	else
//		printf("�ϴ�ֵ��%d\n",b);
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
//	printf("���ֵ=%d\n",c);
//	return 0;
//}


//������

//int main()
//{
//	int a = 10;
//	int arr[] = {1,2,3,4,5,6};
//	printf("%d\n",sizeof(a));
//	printf("%d\n",sizeof(arr));//���������С����λ���ֽ�
//	return 0;
//}

//int main()
//{
//	int a = 0;//4���ֽڣ�32bitλ
//	//0������λ��0000000000000000000000000000000
//	int b = ~a;//b���з��ŵ�����
//	// ~ -- ��λ��2���ƣ�ȡ��
//	//1������λ��1111111111111111111111111111111
//	//ԭ�롢���롢����
//	//�������ڴ��ش洢��ʱ�򣬴洢���Ƕ����ƵĲ���
//	//1������λ��1Ϊ����0Ϊ����1111111111111111111111111111111 -ԭ��
//	//1������λ��0000000000000000000000000000000 -���루����λ���䣬������λȡ����
//	//1������λ��0000000000000000000000000000001 -���루����+1��
//	printf("%d\n",b);//ʹ�õģ���ӡ�����������ԭ��
//	return 0;
//}
//


//������++��--

//int main()
//{
//	int a = 10;
//	//int b = a++;//����++���Ƚ�a��ֵ����b��a��++���õ��µ�a��ֵ
//	//int b = ++a;//ǰ��++��a��++���ٰ�a��ֵ����b
//	//int b = a--//;a=9,b=10
//	int b = --a;//a=9,b=9
//	printf("a = %d\n b = %d\n",a,b);//a = 11; b = 10 ������(2) a=11 b=11
//	return 0;	
//}


//��������ǿ������ת����

//int main()
//{
//	int a = (int)3.14;//ǿ������ת��
//	return 0;
//}


//int main()
//{
//	//�� - ��0
//	//�� - 0
//	//&& - �߼���
//	//|| - �߼���
//	int a = 0;
//	int b = 5;
//	//int c = a&&b;//----���Ϊ0
//	int c = a||b;//----���Ϊ1
//	printf("c=%d\n",c);
//	return 0;
//}


//exp1?exp2:exp3;��Ŀ������
//int main()
//{
//	int a = 30;
//	int b = 20;
//	int max = 0;
//	max =(a>b?a:b);//����1��a>b?��Ϊ�棬����Ϊa,��Ϊ�٣����Ϊb
//	printf("%d\n",max);
//	return 0;
//}



//int main()
//{
//	int a = 10;//�ֲ�����-Ҳ���Զ�����-��ǰ��ʡ����auto
//	return 0;
//}



//int main()
//{
// 	//register int a = 10;//�����a����ɼĴ�������
//	int a = 10;
//	a = -2;
//	//int����ı������з��ŵģ�����Ϊ��
//	//signed int;
//	//unsigned int num = 0;����Ϊ�޷�����
//	return 0;
//}


//int main()
//{
//	// typedef - ���Ͷ��� - �����ض���
//	typedef unsigned int u_int;//����unsigned int����̫���ˣ����¶���һ��������Ϊu_int
//	unsigned int num =20;
//	u_int num2 = 20;//�����num��num2�����Ͷ���ͬһ���͡����޷�����
//	return 0;
//}


//�ؼ���static
//1.static���ξֲ�����
//��static���ξֲ�����ʱ���ֲ��������������ڱ߳�
//void test()
//{
//	static int a = 1;//a��һ����̬�ľֲ�����
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

//2.static����ȫ�ֱ���
//�ı��˱����������� - �þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
//����Դ�ļ���û����ʹ����
//int main()
//{
//	//extern - �����ⲿ���ŵ�
//	extern int g_val;
//	printf("%d\n",g_val);
//	return 0;
//}

//3.static���κ���
//Ҳ�Ǹı��˺�����������-��׼ȷ
//static���κ����ı��˺�������������
//�ⲿ�������� -> �ڲ���������
//extern int Add(int,int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a,b);//Ҫ�������ⲿ����
//	printf("sum = %d\n",sum);
//	return 0;
//}


//#define �����ʶ������

//#define Max 100//����һ�����Ž�Max��Max��ֵΪ100
////δ��������ֻҪ����Max���ͻ��滻��100
//int main()
//{
//	int a = Max;
//	printf("%d\n",a);
//	return 0;
//}

//#define ���Զ����-������

//������ʵ��
//int Max(int x,int y)
//{
//	if(x>y)
//		return x;
//	else
//		return y;
//}
////��Ķ���
//#define MAX(X,Y)(X>Y?X:Y)
//int main()
//{
//	int a = 10;
//	int b =20;
//	int max = Max(a,b);
//	//�����ķ�ʽ
//	printf("max = %d\n",max);
//	//��ķ�ʽ
//	max = MAX(a,b);//max=(a>b?a:b);
//	printf("max = %d\n",max);
//	return 0;
//}




//ָ��

//int main()
//{
//	int a = 10;//���ڴ�����4���ֽ�
//	int* p = &a;//ȡ��a�ĵ�ַ
//	printf("%p\n",p);
//	//��һ�ֱ�����������ŵ�ַ�� - ָ�����
//	printf("%p\n",&a);//��ӡa�ĵ�ַ
//	*p = 20;//* - �����ò�����
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