#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
//void print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		//printf("%d ", arr[i]);
//		printf("%d ", *(arr + i));
//	}
//}
//int main()
//{
//	int arr[6] = { 1, 2, 3, 4, 5, 6 };
//	print(arr, 6);
//	return 0;
//}

//����ָ���ʹ�ã�һ�㳣���ڶ�ά����
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}

//void print2(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", (*(p + i))[j]);
//		}
//		printf("\n");
//	}
//}

//void print3(int(*p)[3][5],int x,int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", (*p)[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
//	//print1(arr, 3, 5);
//	//print2(arr, 3, 5);
//	print3(&arr,3,5);
//	return 0;
//}


//���Դ�ַ��test1�����
//void test1(int* p)
//{
//
//}
//
//int main()
//{
//	int a = 10;
//	int arr[10] = { 0 };
//	int* pa = &a;
//	test1(&a);
//	test1(pa);
//	test1(arr);
//	return 0;
//}

//���Դ�ַ��test2�����
//void test2(char* p)
//{
//
//}
//
//int main()
//{
//	char x= 'z';
//	char* px = &x;
//	char arr[10];
//	test2(&x);
//	test2(px);
//	test2(arr);
//	return 0;
//}


//���Դ�ַ��test3�����
//void test3(int **p)
//{
//
//}
//
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	int **p2 = &p1;
//	int *arr[5];
//	test3(&p1);
//	test3(p2);
//	test3(arr);
//	return 0;
//}


//����ָ��
//ָ������ָ��-��ź����ĵ�ַ
int Add(int x, int y)
{
	return x + y;
}

int my_strlen(const char* p)
{
	return 0;
}

int main()
{
	//����ָ��
	//int(*p)(int, int) = &Add;
	int(*p)(int, int) = Add;//  Add��&Addһ�� 
	
	//printf("%p\n", &Add);
	//printf("%p\n", Add);
	//�������Ǻ����ĵ�ַ
	//&������Ҳ�Ǻ����ĵ�ַ

	//pǰ����*������*����ǰ����*Ч����һ����
	//*pֻ��Ϊ�˸��õ����
	int sum = (*p)(3, 2);
	//int sum=(****p)(3,2);
	printf("%d\n", sum);

	//p=Add
	sum = p(3, 2);
	printf("%d\n", sum);

	int(*p)(const char*) = my_strlen;
	int(*p)(const char*)=&my_strlen;

	return 0;
}