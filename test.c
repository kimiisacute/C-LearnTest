//����һ����stdio.h���ļ�
//std-��׼ standard input output
#include <stdio.h>

//int main()//������-�������� -main��������ֻ��һ��
//{
	//��Fn+F10����һ��һ�����ԣ�
	//printf("hello world\n");
	//�⺯��-C���Ա�����ṩ������ʹ�õĺ���
	//���˵Ķ���-���к�
	//#include
	//system("pause");//������仰 ���򲻻�һ������
	//ѡ����Ŀtest_01�һ���ѡ������-->������-->ϵͳ-->��ϵͳ ѡ�����̨���򲻻�һ��������Ҳ����Ҫ�������system("pause");
	//return 0;//ctrl+F5���� �������в��ɹ���Fn+ctrl+F5
//}

//int�����͵���˼
//mainǰ���int��ʾmain�������÷���һ������ֵ
//int main()
//{
	//�����������
	//����Ļ����� hello world
	//���� - print function - printf - ��ӡ����
	//return 0;//����0
//}

//����д����ʧ��
//void main()
//{

//}


//char - �ַ�����
//%d - ��ӡ���� 
//%c - ��ӡ�ַ�
//%f - ��ӡ�������� -��С��
//%p - �Ե�ַ����ʽ��ӡ
//%x - ��ӡ16��������
//int main()
//{
	//char ch='A';//���ڴ�����һ��ռ��ch
	//printf("%c\n",ch);//%c -- ��ӡ�ַ���ʽ�����ݣ�%d��ӡ���͸�ʽ������,
	//���Ǵ�ӡ%d�Ļ�������������65��A��ASCII����

	//short int - ������
	//int -����
	//int age =20;
	//printf("%d\n",age);//%d -- ��ӡ����ʮ��������

	//long ������
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
	//short int age=2330;//2��16�η�Ϊ65536 һ������ռһ���ֽڣ�
	//��ͬ���������ͱ�ʾ��ռ�ڴ�Ķ��٣����ò�ͬ������������Ϊ�˽�ʡ�ڴ�ռ�
	//printf("%d\n",age);
	//printf("%d\n",sizeof(char));//1�ֽ� sizeof(char)����char�����������ڴ�����ռ��ܹ��������
	//printf("%d\n",sizeof(short));//2�ֽ�
	//printf("%d\n",sizeof(int));//4�ֽ�
	//printf("%d\n",sizeof(long));//4�ֽ�
	//printf("%d\n",sizeof(long long));//8�ֽ�
	//printf("%d\n",sizeof(float));//4�ֽ�
	//printf("%d\n",sizeof(double));//8�ֽ�
	//�ֽ� - ������е�λ
	//bit - ��С��λ - ����λ
	//byte - �ֽ� - 1���ֽ���8������λ  1byte = 8bit
	//kb - 1kb = 1024byte
	//mb - 1mb=1024kb
	//gb - 1gb=1024mb
	//tb - 1tb=1024gb
	//pb - 1pb=1024tb
	//return 0;
//}

//int main()
//{
	//����
	//20
	//short age = 20;//���ڴ�����2���ֽ�=16bitλ���������20
	//double weight = 95.5f;//���ڴ�����4���ֽڣ����С��
	//printf("%d\n",age);
	//printf("%f\n",weight);//��Ҫʹ��%f��ӡ��������
	//return 0;
//}



//��������


//int a=10;
//int main()
//{
//	{
//		int a=10; //��Ȼ�Ǿֲ����������ǲ����ھֲ���Χ��ʹ�ã�����û������ȫ�ֱ���a��������ʧ��
//	}
//	printf("%d\n",a);
//}

//int a =100;
//int main()
//{
//	int a = 10;
//	//�ֲ�������ȫ�ֱ��������ֽ��鲻Ҫ��ͬ������������bug
//	//���ֲ�������ȫ�ֱ�����������ͬ��ʱ�򣬾ֲ���������
//	printf("%d\n",a);
//	return 0;
//}

//int num2=20;//ȫ�ֱ��� - �����ڴ���飨{}��֮��ı���
//int main()
//{
//	int num1 =10;//�ֲ����� - �����ڴ���飨{}���ڲ��ı���
//	return 0;
//}


//int main()
//{
//	//����2�����ĺ�
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//�������� - ʹ�����뺯��scanf
//	scanf("%d%d",&num1,&num2);//& - ȡ��ַ����
//	//int sum = 0;
//	//C�����﷨�涨������Ҫ�����ڵ�ǰ��������ǰ��
//	sum = num1 + num2;
//	printf("sum=%d\n",sum);
//	return 0;
//}


//�ֲ������������ȫ�ֱ�����������

//int main()
//{
//	{
//		int num = 0;
//		printf("num = %d\n",num);
//		//�ֲ������� - �������ڵľֲ���Χ��
//	}
//	return 0;
//}
//
//int global = 2020;
//
//void test()//����
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
//	//δ�����ı�ʶ��
//	//����extern�ⲿ���ŵ�
//	extern int g_val;//g_valȫ�ֱ�����sum.c�ļ���
//	printf("g_val =%d\n",g_val);
//	return 0;
//}


//�ֲ���������������
//int main()
//{
//	{
//		int a =10;
//		printf("a=%d\n",a);//ok
//	}
//	printf("a=%d\n",a);//error
//	return 0;
//}