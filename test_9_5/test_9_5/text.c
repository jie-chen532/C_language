#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//int main()
//{
//	int arr[] = { 1, 2, (3, 4), 5 };
//	printf("%d", sizeof(arr));
//	return 0;
//}

//int main()
//{
//	char str[] = "hello bit";
//	printf("%d %d\n", sizeof(str), strlen(str));
//	return 0;
//}

//ð������
//void Bubble_sort(int arr[], int size)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < size - 1; i++)
//	{
//		for (j = 0; j < size - 1 - i; j++)
//		{
//			if (arr[j]<arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//void print(int arr[],int size)
//{
//	int i = 0;
//	for (i = 0; i < size - 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[7] = { 1,2,4,3,8,6 };  
//	int size = sizeof(arr) / sizeof(arr[0]);
//	print(arr, size);
//	Bubble_sort(arr,size);
//	print(arr, size);
//	return 0;
//}


//����һ���������飬��ɶ�����Ĳ���
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz ; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz ; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	print(arr, sz);
//	init(arr,sz);
//	print(arr, sz);
//	printf("\n");
//
//	int arr1[] = { 1, 2, 3, 4, 5, 6  };
//	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//
//	print(arr1, sz1);
//	reverse(arr1, sz1);
//	print(arr1, sz1);
//
//	return 0;
//}


//������A�е����ݺ�����B�е����ݽ��н�����������һ����
void Swap(int arr1[], int arr2[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
}
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6, 7 };
	int arr2[] = { 11, 12, 13, 14, 15, 16, 17 };

	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
	int sz2 = sizeof(arr2) / sizeof(arr2[0]);

	printf("arr1[]:");
	print(arr1, sz1);
	printf("arr2[]:");
	print(arr2, sz2);
	printf("\n");

	Swap(arr1, arr2, sz1);
	printf("arr1[]:");
	print(arr1, sz1);
	printf("arr2[]:");
	print(arr2, sz2);
	return 0;
}