#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//����ˮ��1ƿ��ˮ1Ԫ��������ƿ���Ի�һƿ��ˮ����20Ԫ�����Ժȶ�����ˮ
//20��ƿ��-10ƿˮ   10��ƿ��-5��ˮ   5��ƿ��-1��ƿ��+2��ˮ   3��ƿ��-1��ƿ��+1��ˮ   1��ˮ 
//int main()
//{
//	int money = 0;
//	int empty = 0;
//	int total = 0;
//	scanf("%d", &money);
//
//	total = total + money;//�����ˮ 
//	empty = money;//����ˮ�Ŀ�ƿ��
//
//	while (empty >= 2)
//	{
//		total = total + empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//
//	printf("�ܹ����Ժ�%d��ˮ\n", total);
//	return 0;
//}


//int main()
//{
//	int money = 0;
//	int total = 0;
//	scanf("%d", &money);
//	if (money == 0)
//	{
//		total = 0;
//	}
//	else
//	{
//		total = 2 * money - 1;
//	}
//	printf("�ܹ����Ժ�%d��ˮ\n", total);
//	return 0;
//}


//int main()
//{
//	int arr1[] = { 1, 2, 3 };
//	int arr2[] = { 2, 3, 4 };
//	int arr3[] = { 3, 4, 5 };
//	//ָ�������ʹ��
//	int* arr[3] = { arr1, arr2, arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", arr[i][j]);
//			// 1 2 3
//			// 2 3 4
//			// 3 4 5
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	//char* p1 = "zhangsan";//�ַ�������
//	//char* p2 = "lisi";
//	//char* p3 = "wangwu";
//	//char* arr[] = { p1, p2, p3 };
//
//	char* arr[] = { "zhangsan", "lisi", "wangwu" };
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//	return 0;
//}


//����ָ��-ָ��-ָ�������ָ��
//int main()
//{
//	char arr[5];
//	char(*pa)[5] = &arr;
//
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//int* p=arr; ����������Ԫ�صĵ�ַ
//	//����ָ��->����ĵ�ַ
//	//&������  �õ���������ĵ�ַ
//
//	int(*p)[10] = &arr;
//	//p��������ָ�룬��ָ��ָ����һ�����飬����10��Ԫ�أ�ÿ�����Ͷ���int 
//	return 0;
//}


int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* p = arr;
	//p+1  //����4���ֽ�

	char arr1[3] = { 0 };
	char* p1 = arr1;
	//arr1+1 //����1���ֽ�

	//arr��Ԫ�صĵ�ַ
	//&arrȡ����������ĵ�ַ

	printf("p=%p\n", p);
	printf("p+1=%p\n", p+1);//����һ��Ԫ��-4���ֽ�

	//����ָ��
	int(*p2)[10] = &arr;
	printf("p2=%p\n", p2);
	printf("p2+1=%p\n", p2+1);//����һ������ 
	return 0;
}