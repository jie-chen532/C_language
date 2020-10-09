#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//喝汽水，1瓶汽水1元，两个空瓶可以换一瓶汽水，给20元，可以喝多少汽水
//20空瓶子-10瓶水   10空瓶子-5汽水   5空瓶子-1空瓶子+2汽水   3空瓶子-1空瓶子+1汽水   1汽水 
//int main()
//{
//	int money = 0;
//	int empty = 0;
//	int total = 0;
//	scanf("%d", &money);
//
//	total = total + money;//买的汽水 
//	empty = money;//买汽水的空瓶子
//
//	while (empty >= 2)
//	{
//		total = total + empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//
//	printf("总共可以喝%d汽水\n", total);
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
//	printf("总共可以喝%d汽水\n", total);
//	return 0;
//}


//int main()
//{
//	int arr1[] = { 1, 2, 3 };
//	int arr2[] = { 2, 3, 4 };
//	int arr3[] = { 3, 4, 5 };
//	//指针数组的使用
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
//	//char* p1 = "zhangsan";//字符串常量
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


//数组指针-指针-指向数组的指针
//int main()
//{
//	char arr[5];
//	char(*pa)[5] = &arr;
//
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//int* p=arr; 数组名是首元素的地址
//	//数组指针->数组的地址
//	//&数组名  拿到的是数组的地址
//
//	int(*p)[10] = &arr;
//	//p就是数组指针，该指针指向了一个数组，数组10个元素，每个类型都是int 
//	return 0;
//}


int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* p = arr;
	//p+1  //跳过4个字节

	char arr1[3] = { 0 };
	char* p1 = arr1;
	//arr1+1 //跳过1个字节

	//arr首元素的地址
	//&arr取出整个数组的地址

	printf("p=%p\n", p);
	printf("p+1=%p\n", p+1);//跳过一个元素-4个字节

	//数组指针
	int(*p2)[10] = &arr;
	printf("p2=%p\n", p2);
	printf("p2+1=%p\n", p2+1);//跳过一个数组 
	return 0;
}