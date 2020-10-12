#define _CRT_SECURE_NO_WARNINGS 1


//#include<stdio.h>
//int main()
//{
//	float a = 0.0;
//	scanf("%f", &a);
//	float b = a - (int)a;
//	if (b >= 0.5)
//	{
//		printf("%d\n", (int)a + 1);
//	}
//	else
//	{
//		printf("%d\n", (int)a);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((a >> i) & 1)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int i = 0;
//	int count = 1;
//	int arr[1000] = { 0 };
//	scanf("%d", &a);
//	int tmp = a;
//	while (tmp / 10)
//	{
//		tmp = tmp / 10;
//		count++;
//	}
//	for (i = 0; i < count; i++)
//	{
//		arr[i] = a % 10;
//		a = a / 10;
//	}
//	for (i = 0; i < count; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[100] = { 0 };
//	scanf("%s", arr);
//	int left = 0;
//	int right = strlen(arr) - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		right--;
//		left++;
//	}
//	puts(arr);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int empty[100] = {0};
//	int total[100] = {0};
//	int i = 0;
//	int count = 0;
//
//	for (i = 0; i < 100; i++)
//	{
//		scanf("%d", &empty[i]);
//		if (empty[i] == 0)
//		{
//			break;
//		}
//		count++;
//	}
//
//
//	for (i = 0; i<count; i++)
//	{
//		while (empty[i] > 1)
//		{
//			total[i] = total[i] + empty[i] / 3;
//			empty[i] = empty[i] / 3 + empty[i] % 3;
//			if (empty[i] == 2)
//			{
//				empty[i] = empty[i] + 1;
//			}
//		}
//		printf("%d\n", total[i]);
//	}
//
//	return 0;
//}


#include<stdio.h>
int main()
{
	int empty[100] = {0};
	int i = 0;
	int count = 0;
	for (i = 0; i < 100; i++)
	{
		scanf("%d", &empty[i]);
		if (empty[i] == 0)
		{
			break;
		}
			count++;
		}
	for (i = 0; i < count; i++)
	{
		printf("%d\n", empty[i] / 2);
	}
	return 0;
}