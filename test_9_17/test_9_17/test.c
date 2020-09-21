#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include<string.h>
#include<math.h>

//写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//void print(int* p,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//
//int main()
//{
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	print(arr,sz);
//	return 0;
//}


//写一个函数，可以逆序一个字符串的内容。
//void reserve(char arr[], int sz)
//{
//	char* p = arr;
//	char* pz = &arr[sz - 1];
//	while (p <= pz)
//	{
//		char tmp = *p;
//		*p = *pz;
//		*pz = tmp;
//		p++;
//		pz--;
//	}
//}
//
//int main()
//{
//	char arr[] = "hello";
//
//	reserve(arr, strlen(arr));
//
//	printf("%s\n", arr);
//	return 0;
//}


//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字
//int sum(int a, int n)
//{
//	int i = 0;
//	int sum = 0;
//	int tmp = a;
//	while (i<n)
//	{
//		sum = sum + a;
//		i++;
//		a = a * 10 + tmp;
//	}
//	return sum;
//}
//
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);//a是数；n是加前几项
//
//	int ret = sum(a, n);
//
//	printf("%d\n", ret);
//	return 0;
//}

//求出0～100000之间的所有“水仙花数”并输出。
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int tmp = i;
//		int sum = 0;
//
//		//计算i的位数
//		int count = 1;
//		while (tmp > 9)
//		{
//			count++;
//			tmp = tmp / 10;
//		}
//	
//
//		tmp = i;
//		while (tmp)
//		{
//			sum = sum + pow((tmp % 10), count);
//			tmp = tmp / 10;
//		}
//
//		//判断是否是水仙花数
//		if (sum == i)
//		{
//			printf("%d ", sum);
//		}
//	}
//	return 0;
//}


//打印菱形
//int main()
//{
//	int n = 0;//打印几行菱形
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	int k = 0;
//
//	//上半部分
//	for (i = 0; i < n; i++)//行 7
//	{
//		//打印空白
//		for (j = 0; j < n-i-1; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (k = 0; k < 2*i + 1; k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	//下半部分
//	for (i = 0; i < n-1 ; i++)
//	{
//		//打印空白
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (k = 0; k < 2 * (n-1-i) - 1; k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
//1元-1瓶  2元-3瓶  3元-5瓶  4元-7瓶
int main()
{
	int money = 0;
	int bottle = 0;

	scanf("%d", &money);

	if (money == 0)
	{
		bottle = 0;
	}
	else
	{
		bottle = 2 * money - 1;
	}
	printf("%d\n", bottle);
	return 0;
}