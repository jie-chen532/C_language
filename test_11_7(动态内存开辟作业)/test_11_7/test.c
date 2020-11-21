#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>
#include<ctype.h>
//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
//编写一个函数找出这两个只出现一次的数字。

//void find_single(int arr[],int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int flag = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (i == j)
//			{
//				j++;
//			}
//			if (arr[i] == arr[j])
//			{
//				flag = 1;
//				break;
//			}
//		}
//		if (0 == flag)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 1, 1, 2, 3, 4, 5, 6,2, 6, 5, 7 ,3};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	find_single(arr, sz);
//	return 0;
//}



//模拟实现atoi
//int atoi(const char *string);

//
//int my_atoi(const char *str)
//{
//	assert(str != NULL);
//	int flag = 1;
//	int sum = 0;
//	
//	//空白字符
//	while (isspace(*str))
//	{
//		str++;
//	}
//
//
//	//+ -
//	if (*str == '+')
//	{
//		flag = 1;
//		str++;
//	}
//	else if (*str == '-')
//	{
//		flag = -1;
//		str++;
//	}
//
//	while (*str)
//	{
//		if (!isdigit(*str))
//		{
//			return 0;
//		}
//		else
//		{
//			sum = sum *10+(*str - '0');
//		}
//		str++;
//	}
//	
//	return sum*flag;
//}
//
//int main()
//{
//	char arr[] = "  -11284";
//	int ret = my_atoi(arr);
//	printf("%d\n", ret);
//	return 0;
//}


#include<stdio.h>

int main()
{
	int n = 0;
	int arr[1000] = { 0 };
	scanf("%d", &n);
	int j = 0;
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				if (i != j)
				{
					if (i == n - 1 || j == n - 1)
					{
						n = n - 1;
					}
					else
					{
						int k = 0;
						int ret = i > j ? i : j;
						for (k = ret + 1; k < n; k++)
						{
							arr[k - 1] = arr[k];
						}
						n = n - 1;
					}
				}
			}
		}
	}


	for (i = 0; i < n ; i++)
	{
		printf("%d ", arr[i]);
	}


	return 0;
}