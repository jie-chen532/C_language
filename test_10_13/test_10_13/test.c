#define _CRT_SECURE_NO_WARNINGS 1


//#include<stdio.h>
//int main()
//{
//	int month = 0;
//	int total = 0;
//
//	while (1)
//	{
//		scanf("%d", &month);
//		int rself = 1;
//		int rbirth = 1;
//		if (month <= 2)
//		{
//			printf("%d", rbirth); 
//		}
//		else
//		{
//			int i = 0;
//			month = month-2;
//			while (month)
//			{
//				total = rself + rbirth;
//				rself = rbirth;
//				rbirth = total;
//				month--;
//			}
//			printf("%d\n", rbirth);
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[1000][10] = { 0 };
//	int line = 0;
//	int i = 0;//ÐÐ
//	int j = 0;//ÁÐ
//	int sum = 0;
//	while (1)
//	{
//		scanf("%d", &line);
//		for (i = 0; i < line; i++)
//		{
//			for (j = 0; j < 2 * i + 1; j++)
//			{
//				arr[i][0] = 1;
//				arr[1][1] = 1;
//				arr[1][2] = 1;
//				if (i >= 2)
//				{
//					int k = 0;
//					sum = 0;
//					for (k = j - 2; k <= j; k++)
//					{
//						sum = sum + arr[i - 1][k];
//					}
//					arr[i][j] = sum;
//				}
//			}
//		}
//
//		for (j = 0; j < 2*line-1; j++)
//		{
//			if (arr[line-1][j] % 2 == 0)
//			{
//				printf("%d\n", j+1);
//				break;
//			}
//		}
//
//		if (j == 2 * line - 1)
//		{
//			printf("%d\n", -1);
//		}
//	}
//
//	return 0;
//}


//#include<stdio.h>   
//
//int count(int n)
//{
//	int i = 0;
//	int sum = 0;
//	int count = 0;
//	int j = 0;
//	if (n > 0 && n <= 500000)
//	{
//		for (i = 1; i <= n; i++)
//		{
//			sum = 0;
//			for (j = 1; j < i; j++)
//			{
//				if (i%j == 0)
//				{
//					sum = sum + j;
//				}
//			}
//			if (sum == i)
//			{
//				count++;
//			}
//		}
//	}
//	else
//		return -1;
//	return count;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret=count(n);
//	printf("%d\n", ret);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//void spin_string(char arr[], int k,int sz)
//{
//	int i = 0;
//	int j = 0;
//	char tmp = 0;
//	for (i = 0; i < k; i++)
//	{
//		tmp = arr[0];
//		for (j = 1; j < sz; j++)
//		{
//			arr[j-1] = arr[j];
//		}
//		arr[j-1] = tmp;
//	}
//}
//
//int main()
//{
//	char arr[20] = "";
//	scanf("%s", arr);
//	int k = 0;
//	scanf("%d", &k);
//	spin_string(arr, k, strlen(arr));
//	printf("%s\n", arr);
//	return 0;
//}


#include<stdio.h>
int count_bin(int n)
{
	int count = 0;
	while (n)
	{
		count++;
		n = n&(n - 1);
	}
	return count;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = count_bin(n);
	printf("%d\n", ret);
	return 0;
}
