#define _CRT_SECURE_NO_WARNINGS 1

//
//#include<stdio.h>
//int main()
//{
//	int N = 0;
//	int i = 0;
//	scanf("%d", &N);
//	for (i = 0; i < N; i++)
//	{
//		printf("Hello SUST!\n");
//	}
//}



//#include<stdio.h>
//int main()
//{
//	int N = 0;
//	int i = 0;
//	int j = 0;
//	do
//	{
//		scanf("%d", &N);
//		if (N == 1)
//		{
//			printf("*\n");
//		}
//		else
//		{
//			for (i = 0; i < N; i++)
//			{
//				for (j = 0; j < N - 1 - i; j++)
//				{
//					printf(" ");
//				}
//
//				for (j = 0; j < 2 * i + 1; j++)
//				{
//					printf("*");
//				}
//				printf("\n");
//			}
//		}
//	} while (N);
//}



//#include<stdio.h>
//int main()
//{
//	int T = 0;
//	int i = 0;
//	int arr[1000] = { 0 };
//
//
//	if (scanf("%d", &T) != EOF)
//	{
//		while (T--)
//		{
//			int num = 0;
//			int j = 0;
//			scanf("%d", &num);
//			for (j = 0; j < num; j++)
//			{
//				scanf("%d", &arr[j]);
//			}
//
//			int k = 0;
//			for (j = 0; j < num; j++)
//			{
//				for (k = 0; k < num - 1 - j; k++)
//				{
//					if (arr[k]>arr[k + 1])
//					{
//						int tmp = arr[k + 1];
//						arr[k + 1] = arr[k];
//						arr[k] = tmp;
//					}
//				}
//			}
//			if (arr[num / 2] % 2 == 0)
//			{
//				printf("Alice\n");
//			}
//			else
//				printf("Bob\n");
//		}
//	}
//	return 0;
//}



//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	char arr[1000][1000];
//
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++)
//	{
//			scanf("%s", arr[i]);
//			for (j = 0; j < i; j++)
//			{
//				if (strcmp(arr[j], arr[i]) == 0)
//				{
//					count++;
//				}
//			}
//	}
//	printf("%d", n-count);
//	return 0;
//}