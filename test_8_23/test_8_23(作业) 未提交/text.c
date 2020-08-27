#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>

//函数判断素数

//int is_prime(int a)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(a); j++)
//	{
//		if (a%j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}


//函数判断闰年
//int is_leap_year(int a)
//{
//	return (((a % 4 == 0) && (a % 100 != 0)) || (a % 400 == 0));
//}
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}


//实现一个函数来交换两个整数的内容

//void swap(int* px, int* py)
//{
//	int temp = *px;
//	*px = *py;
//	*py = temp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("Before:a = %d b = %d\n", a, b);
//	swap(&a, &b);
//	printf("After:a = %d b = %d\n", a, b);
//	return 0;
//}


//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定

void nine_nine(int a)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= a; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d * %d = %d  ", j, i, i*j);
		}
		printf("\n");
	}
}

int main()
{
	int i = 0;
	scanf("%d", &i);
	nine_nine(i);
	return 0;
}