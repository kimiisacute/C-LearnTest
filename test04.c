#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main()
//{
//	int a = 10;//���ڴ�������4���ֽڵĿռ�
//	//printf("%p\n",&a);
//	int* p =&a;//p��һ������ - ָ�����  int*��һ������ - *����˼��������p��һ��ָ������
//	//printf("%p\n",p);
//	*p = 200;//�����*��һ�������ò����� - ��ӷ��ʲ�����
//	printf("%d\n",a);
//	return 0;
//}

//int main()
//{
//	double d =3.14;
//	double* pd =&d;
//	*pd = 2.13;
//	printf("%lf\n",*pd);//д*pd��d������
//	return 0;
//}

//�ṹ��
// char int double..
//�� - ���Ӷ���
//�� - ����+���+����+���֤����..
//����+����+������+����+���..
//���Ӷ��� - �ṹ�� -�����Լ��������һ�ֵ�����
//
//����һ���ṹ������
struct Book//struct - �ṹ��
{
	char name[20];//C���Գ������
	short price;
};//�ֺŲ���ȱ��

int main()
{
	//���ýṹ������ - ����һ�������͵Ľṹ�����
	struct Book b1 = {"C���Գ������",55};
	struct Book *pb = &b1;
	//����pb��ӡ�������ͼ۸�
	// ��.���ṹ�����.��Ա
	// ��->���ṹ��ָ��->��Ա
	printf("%s\n",pb->name);
	printf("%d\n",pb->price);
	/*printf("%s\n",(*pb).name);
	printf("%d\n",(*pb).price);*/

	/*printf("������%s\n",b1.name);
	printf("�۸�%d\n",b1.price);*/
	return 0;
}