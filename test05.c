#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//��֧���
//int main()
//{
//	int age = 10;
//	scanf("%d",&age);//scanfʹ�ã�������ҪȡҪ����ĵ�ַ
//	if(age<18)
//		printf("δ����\n");
//	else
//		printf("����\n");
//	return 0;
//}

//int main()
//{
//	int age = 100;
//	scanf("%d",&age);
//	if(age<18)
//		printf("δ����\n");
//	else if(age>18 && age<28)
//		printf("����\n");
//	else if(age>28 && age<50)
//		printf("׳��\n");
//	else if(age>50 && age<90)
//		printf("����\n");
//	else if(age>90)
//		printf("����\n");
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 2;
//	if(a == 1)
//		if(b == 2)
//			printf("hehe\n");
//		else//else�ͽ�ԭ��
//			printf("haha\n");
//	return 0;
//}

//int main()
//{
//	int num = 4;
//	if(num = 5)// = �� == ��һ������=���Ǹ�ֵ����==�����ж���ֵ�Ƿ����
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

/*��ϰ
	1���ж�һ�����Ƿ�Ϊ����
	2�����1-100֮�������
	*/
//int main()
//{
//	int a = 10;
//	scanf("%d",&a);
//	if(a%2==0)
//		printf("ż��\n");
//	else
//		printf("����\n");
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	if(a>=0 && a<100)
//	{
//		a++;
//		if(a%2==1)
//			printf("%d\n",a);
//	}
//	else
//
//	return 0;
//}

//��
//int main()
//{
//	int i = 1;
//	while(i<100)
//	{
//		if(i%2 ==1)
//			printf("%d\n",i);
//		i++;
//	}
//	return 0;
//}

//switch - case ���
//ʵ�ֶ��֧���
//int main()
//{
//	int day = 0;
//	scanf("%d",&day);
//	switch(day)
//	{
//	case 1://���ͳ������ʽ
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//		//break - �������
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d",&day);
//	switch(day)
//	{
//	case 1://���ͳ������ʽ
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//		//break - �������
//	default:
//		printf("�������\n");
//		break;
//		//���п��ޣ�default����Ƿ�����
//		//case��defaultû������˳���������ﶼ����
//	}
//	return 0;
//}


//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch(n)//case1,case2,case4��û�н�break���������Ҫ����ִ����ȥ��ֱ������break
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch(n)
//		{
//		case 1:n++;
//		case 2:m++;n++;
//			break;
//		}
//	case 4: m++;
//	default:
//		break;
//	}
//	printf("m= %d,n=%d\n",m,n);
//	return 0;
//}


//whileѭ��
//����Ϊ�棨1������ִ����䣬����Ϊ�٣�0����ִֹͣ�����
//int main()
//{
//	/*while(1)
//		printf("hehe\n");*/
//	int i = 1;
//	while(i<10)
//	{
//		if(i == 5)
//			continue;//��ֹѭ���б���ѭ����continue����Ĵ��벻��ִ�У�ֱ����ת��whileѭ������
//			//break;//�������
//		//break - ������ֹѭ��
//		printf("%d\n",i);
//		i++;
//	}
//	return 0;
//}


int main()
{
	int ch = 0;
	//Ctrl+z
	//EOF - end of file ֵΪ-1
	while((ch=getchar())!=EOF)
	{
		putchar(ch);//��ѭ���У�������������ַ�
	}

	/*int ch = getchar();
	putchar(ch);
	printf("%c\n",ch);*/
	return 0;
}