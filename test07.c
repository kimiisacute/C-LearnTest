#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

//�Ӵ�С�������ֵ
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d",&a,&b,&c);
//	//�㷨ʵ�֣�a�����ֵ��b��֮��c�з���Сֵ
//	if(a<b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if(a<c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if(b<c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d%d%d\n",a,b,c);
//	return 0;
//}

//��Ӧ3�ı���
//дһ�������ӡ1-100֮�����е�3�ı���������
//int main()
//{
//	int i =0;
//	for(i=1;i<100;i++)
//	{
//		if(i%3 == 0)
//			printf("%d\n",i);
//	}
//	return 0;
//}

//���������������������������Լ��
//int main()
//{
//	int m = 24;
//	int n = 18;
//	int r = 0;
//	scanf("%d%d",&m,&n);
//	while(m%n)
//	{
//		r =m%n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n",n);
//	return 0;
//}


//��ӡ1000�굽2000��֮�������
//int main()
//{
//	//�ܱ�4�������Ҳ��ܱ�100����������
//	//�ܱ�400����������
//	int i = 0;
//	int count = 0;
//	for(i=1000;i<2001;i++)
//	{
//		if(i%4 == 0 && i%100!=0)
//		{
//			printf("%d ",i);
//			count++;
//		}
//		else if(i%400 ==0)
//		{
//			printf("%d ",i);
//			count++;
//		}
//	}
//	printf("\ncoount = %d\n",count);
//	return 0;
//}


//дһ�����룺��ӡ100-200֮�������
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i=100;i<=200;i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//�����жϹ���
//		//1.�Գ���
//		//13 2-12�Գ� ���� 2->i-1
//		int j = 0;
//		for(j=2;j<i;j++)//for(j=2;j<=sqrt(i);j++)sqrt()��һ����ѧ�⺯�� - ��ƽ��
//		{
//			if(i%j == 0)
//			{
//				break;
//			}
//		}
//		if(j == i)//if(j>sqrt(i))
//		{
//			count++;
//			printf("%d ",i);
//		}
//	}
//	printf("\ncount = %d\n",count);
//	return 0;
//}


//��д������һ�� 1-100�����������г��ֶ��ٸ�����9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i=1;i<=100;i++)
//	{
//		if(i%10 == 9)//ģΪ9
//			count++;
//			printf("%d\n",i);
//		if(i/10 == 9)//��Ϊ9
//			count++;
//	}
//	printf("\ncount= %d\n",count);
//	return 0;
//}


//����1/1-1/2+1/3-1/4+1/5...+1/99-1/100��ֵ����ӡ�����
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for(i=1;i<=100;i++)
//	{
//		sum += flag*1.0/i;//c������+=�Ǵ�������������ӣ������𰸼�¼����ߵı����
//		flag = -flag;
//	}
//	printf("%lf\n",sum);
//	return 0;
//}


//��10�����������ֵ
//int main()
//{
//	int arr []={1,2,3,4,5,6,7,8,9,10,15};
//	int max = arr[0];//���ֵ
//	int i =0;
//	int sz =sizeof(arr)/sizeof(arr[0]);
//	for(i=0;i<sz;i++)
//	{
//		if(arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n",max);
//	return 0;
//}


//����Ļ�����9*9�˷��ھ���
//int main()
//{
//	int i = 0;
//	//ȷ����ӡ9��
//	for(i=1;i<=9;i++)
//	{
//		//��ӡһ��
//		int j =1;
//		for(j=1;j<=i;j++)
//		{
//			printf("%d*%d=%-2d ",i,j,i*j);//%2d���Ҷ��룬%-2d�������
//		}
//		printf("\n");
//	}
//	return 0;
//}


//��������Ϸ
//1.���Ի�����һ�������
//2.������

//void menu()
//{
//	printf("**********************************\n");
//	printf("*******  1.play    0.exit  *******\n");
//	printf("**********************************\n");
//}
//
//void game()
//{
//	//1.����һ�������
//	int ret = 0;
//	int guess = 0;
//	//ʱ��� - ��ǰ�������ʱ���ȥ���������ʼʱ�䣨1970.1.1.0:0:0��=��xxx����
//	//��ʱ����������������������ʼ��
//	//time_t time(time_t *timer)
//	//time_t
//	ret = rand()%100+1;//����1-100֮�������
//	//printf("%d\n",ret);
//	//2.������
//	while(1)
//	{
//		printf("�������:>");
//		scanf("%d",&guess);
//		if(guess>ret)
//		{
//			printf("�´���\n");
//		}
//		else if(guess<ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶��ˣ�\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//����һ�����������
//	do
//	{
//		menu();
//		printf("��ѡ��>:");
//		scanf("%d",&input);
//		switch(input)
//		{
//		case 1:
//			game();//��������Ϸ
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	}while(input);
//	return 0;
//}


//goto���
//int main()
//{
//again:
//	printf("hello bit \n");
//	goto again;
//	return 0;
//}

//�ػ�����
int main()
{
	char input[20] = {0};
	//shutdown -s -t 60 60���ڹػ�
	//system() - ִ��ϵͳ�����
	system("shutdown -s -t 60");
again:
	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n������>:");
	scanf("%s",input);
	if(strcmp(input,"������") == 0)//�Ƚ������ַ���
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}