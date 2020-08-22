#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>

//写一个函数判断一年是不是闰年
//int is_leap_year(int a)
//{
//	//if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
//	//{
//	//	return 1;
//	//}
//	//	return 0;
//
//	return ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0));
//}
//
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}


//100-200素数判断(flag判断)
//i=a*b   就说：a或b是小于等于开平方i的
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	int flag = 1;//判断是素数
//	//for (i = 100; i <= 200; i++)
//	for (i = 101; i <= 200;i+=2)    //偶数都不是素数（除了2），所以跳过偶数，直接判断奇数
//	{
//		flag = 1;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}


// string copy
//strcpy函数
//char * strcpy ( char * destination, const char * source );
#include<string.h>
//
//int main()
//{
//	char arr1[] = "welcome to party";
//	char arr2[20] = { 0 };
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}


//memset函数
//void * memset ( void * ptr, int value, size_t num );
//int main()
//{
//	char arr[] = "hello";
//	memset(arr, '*', 3);
//	printf("%s\n", arr);
//	return 0;
//}


//当实参传给形参的时候，形参是实参的一份临时拷贝
//对形参的修改不会影响实参
//交换两个数（用函数）

//void Swap(int* px, int* py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("Before:a = %d b = %d\n", a, b);
//	Swap(&a, &b);
//	printf("After:a = %d b = %d\n", a, b);
//	return 0;
//}


//实参可以是常量、变量、表达式、函数等。
//int get_max(int a, int b)
//{
//	int z = 0;
//	if (a > b)
//	{
//		z = a;
//	}
//	else 
//		z = b;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int max = get_max(1, 2);
//	int max = get_max(a, 2);
//	int max = get_max(1 + 2, 3);
//	int max = get_max(1, get_max(2, 5));
//	printf("max = %d\n", max);
//	return 0;
//}


//写一个函数是否为素数

int is_prime(int a)
{
	int j = 0;
	for (j = 2; j <= sqrt(a); j++)
	{
		if (a%j == 0)
			return 0;
	}
	return 1;
}

int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		if (is_prime(i) == 1)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}