#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>

//whileѭ��

//int main()
//{
//	int i = 0;//��ʼ��
//	while(i<10)//�ж�
//	{
//		//... ...
//		i++;//����
//	}
//	return 0;
//}


//int main()
//{
//	/*
//	int ch = 0;
//	//EOF - end of file �ļ�������־
//	while((ch = getchar())!=EOF)
//	{
//		putchar(ch);
//	}*/
//	int ret = 0;
//	int ch = 0;
//	char password[20] = {0};
//	printf("����������:>");
//	scanf("%s",password);//�������룬�������password������
//	//��������ʣ��һ����\n��
//	//��ȡһ��'\n'
//	//getchar();//�����˻������ġ�\n��,������������Ϊ�գ�������������
//	while((ch= getchar())!='\n')//�ж��Ƿ�Ϊ\n��ֱ��һ��\n�ŵ�ch����ȥ
//	{
//		;//�����
//	}
//	printf("��ȷ��(Y/N):>");
//	ret = getchar();//Y/N
//	if(ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
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
//			continue;//���������������������沿�ִ��룬ֱ�ӽ���ѭ��
//			putchar(ch);
//		}
//	}
//	return 0;
//}



//forѭ��
//for(���ʽ1�����ʽ2�����ʽ3) 
//���ʽ1Ϊ��ʼ�����֣����ڳ�ʼ��ѭ�������ġ�
//���ʽ2Ϊ�����жϲ��֣������ж�ѭ��ʱ��ֹ
//���ʽ3Ϊ�������֣�����ѭ�������ĵ���
//ѭ�����

//int main()
//{
//	//ʹ��forѭ������Ļ�ϴ�ӡ1-10������
//	int i = 0;
//	//��ʼ�� �ж� ���� ������һ��
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
//		if(i = 5)//�ڴ˴�i����ֵΪ5
//			printf("haha\n");
//		printf("hehe\n");
//	}
//	return 0;
//}

//����1
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for(;i<10;i++)
//	{
//		for(;j<10;j++)//i=0ʱ��j++��10������j<10������i=1ʱ��j���洢Ϊ10���������hehe
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}

//����2
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
//	for(i=0,k=0;k=0;i++,k++)//�ж�k=0Ϊ�٣�ѭ�������У����������ѭ��0�Σ�
//		k++;
//	return 0;
//}


//do...while()ѭ��

//int main()
//{
//	//��ӡ1-10 ������do..whileѭ��
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
//		printf("�������ֵΪ��%d\n",i);
//		i++;
//	}
//	return 0;
//}

//��ϰ
//1.����n�Ľ׳ˣ�1*2*3*...*n��
//2.����1��+2��+3��+...+10��
//3.��һ�����������в��Ҿ����ĳ������n����дint binsearch��int x��int v[]��int n��;

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
//		printf("ֵΪ %d\n",k);
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
//		//ret = 1;//��ʼ��
//		for(i=1;i<=n;i++)
//		{
//			ret = ret * i;//i=1,���к���i=2�����i=3���
//		}
//		//n�Ľ׳�
//		sum = sum +ret;
//	}
//	printf("%d\n",sum);
//	return 0;
//}

//�Ż�
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum =0;
//	for(n=1;n<=3;n++)
//	{
//		ret = ret *n;
//		//n�Ľ׳�
//		sum = sum +ret;
//	}
//	printf("%d\n",sum);
//	return 0;
//}

/*3����һ�����������в��Ҿ����ĳ������n����дint binsearch(int x,int v[],int n);
���ܣ���v[0]<=v[1]<=v[2]<=..<=v[n-1]�������в���x
*/

//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	//дһ�����룬��arr���飨�������ҵ�7
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);//������arr�ĳ���,Ҳ����Ԫ�ظ���
//	//sizeof (arr) �������������ռ���ڴ�����Ҳ�����ֽ�����, sizeof(arr[0]) ���ǵ���������ռ���ڴ�.
//	for(i=0;i<sz;i++)
//	{
//		if(k == arr[i])
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n",i);
//			break;
//		}
//	}
//	if(i == sz)
//		printf("�Ҳ���\n");
//	return 0;
//}



//�۰루���֣������㷨
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k =8;
//
//	int sz = sizeof(arr)/sizeof(arr[0]);//����Ԫ�ظ���
//	int left = 0;//���±�
//	int right = sz-1;//���±�
//	while(left<=right)//ֻ����������²����м�Ԫ�ؿ��Բ���
//	{
//		int mid = (left+right)/2;//ͨ�������±������м�Ԫ���±꣬�ڽ���Ԫ�رȽ�
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
//			printf("�ҵ��ˣ��±��ǣ�%d\n",mid);
//			break;
//		}
//	}
//	if(left>right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}

//4����д���룬��ʾ����ַ��������ƶ������м���
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
//	//int right = sizeof(arr1)/sizeof(arr1[0])-2;//-2����'!'���±�
//	int right = strlen(arr1)-1;//strlen������\0���±����
//	while(left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n",arr2);
//		Sleep(1000);//��Ϣһ��
//		system("cls");//ִ��ϵͳ�����һ������ - cls - �����Ļ
//		left++;
//		right--;
//	}
//	return 0;
//}

/*5����д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ�
��ֻ���������������룬���������ȷ����ʾ��½��ɣ�������ξ�����������˳����򡣣�*/
int main()
{
	int i = 0;
	char password[20]={0};//�ַ���
	for(i=0;i<3;i++)
	{
		printf("����������:>");
		scanf("%s",password);
		if(strcmp(password,"123456")==0)// == ���������Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯�� - strcmp
		//���strcmp�����涨��ߴ����ұ߷�����������ߵ����ұ߷���0�����С���ұ߷��ظ���
		{
			printf("��½�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if(i == 3)
		printf("��������������������˳�\n");
	return 0;
}