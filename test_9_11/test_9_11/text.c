#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//���������������в�ͬλ�ĸ���
//int dif_count(int a, int b)
//{
//	int count = 0;
//	int n = a^b;
//	while (n)
//	{
//		count++;
//		n = n&(n - 1);  //ȥ�����ұߵ�1
//		//����3�Ķ��������м���1
//		//0011  --n
//		//0010  
//		//0010  --n
//		//0001
//		//0000
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int ret = 0;
//	scanf("%d%d", &a, &b);
//
//	ret = dif_count(a, b);
//	printf("%d\n", ret);
//	return 0;
//}


//��ӡ���������Ƶ�����λ��ż��λ
void print_bin(int a)
{
	int i = 0;
	for (i = 31; i >= 1;i -= 2)
	{
		printf("%d", (a >> i) & 1);
	}
	printf("\n");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d", (a >> i) & 1);
	}
	printf("\n");
}

int main()
{
	int a = 0;
	scanf("%d", &a);

	print_bin(a);
	return 0;
}


//ͳ�ƶ�������1�ĸ���
//int count_bin(int a)
//{
//	int count = 0;
//	while (a)
//	{
//		a = a&(a - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret=count_bin(a);
//
//	printf("%d\n", ret);
//	return 0;
//}

//���ޣ����ܼ��㸺����
//int count_bin(int a)
//{
//	int count = 0;
//	while (a)
//	{
//		if (a % 2 == 1)
//		{
//			count++;
//		}
//		a = a / 2;
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret=count_bin(a);
//	
//	printf("%d\n", ret);
//	return 0;
//}

//ȱ�㣺������ʲô���ݣ���Ҫִ��32��
//int count_bin(int a)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) == 1)
//		���磺4 00000000 00000000 00000000 00000100
//		    &   00000000 00000000 00000000 00000001
//		        00000000 00000000 00000000 00000000
//		�����һλ����Ϊ1�������һλΪ1������Ϊ0 
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret=count_bin(a);
//	
//	printf("%d\n", ret);
//	return 0;
//}


//����������������������ʱ������

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("%d %d\n", a, b);
//	return 0;
//}
