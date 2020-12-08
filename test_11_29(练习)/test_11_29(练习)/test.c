#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		printf("%c", (char)n);
//	}
//	return 0;
//


//
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double a = 0.0;
//	double b = 0.0;
//	double c = 0.0;
//	while (scanf("%lf%lf%lf", &a, &b, &c) != EOF)
//	{
//		if (a == 0.0)
//		{
//			printf("Not quadratic equation\n");
//		}
//		else
//		{
//			double tmp = pow(b, 2) - 4 * a * c;
//			if (tmp == 0.0)
//			{
//				double ret = (-1.0*b) / (2 * a);
//				printf("x1=x2=%.2lf\n", ret);
//			}
//			else if (tmp > 0.0)
//			{
//				double ret1 = (-1.0*b - sqrt(tmp)) / (2 * a);
//				double ret2 = (-1.0*b + sqrt(tmp)) / (2 * a);
//				printf("x1=%.2lf;x2=%.2lf\n",ret1 ,ret2);
//
//			}
//			else
//			{
//				double ret1 = (-1.0*b) / (2 * a);
//				double ret2 = sqrt(-1.0*tmp) / (2 * a);
//				printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lfi\n", ret1, ret2, ret1, ret2);
//			}
//		}
//	}
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int line = 0;
//	while (scanf("%d", &line) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < line; i++)
//		{
//			int j = 0;
//			for (j = 0; j < 2 * (line - i - 1); j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j < i+1; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int line = 0;
//	while (scanf("%d", &line) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < line; i++)
//		{
//			int j = 0;
//			for (j = 0; j < i; j++)
//			{
//				printf(" ");
//			}
//			printf("*");
//			printf("\n");
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	double gra[5][5] = { 0 };
//	double gra_sum[5] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			scanf("%lf", &gra[i][j]);
//		}
//	}
//
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			gra_sum[i] = gra[i][j] + gra_sum[i];
//		}
//	}
//
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%.1lf ", gra[i][j]);
//		}
//		printf("%.1lf\n", gra_sum[i]);
//	}
//	return 0;
//}


//int removeDuplicates(int* nums, int numsSize){
//	int i = 0;
//	int j = 0;
//	int index = 0;
//	nums[index++] = nums[i++];
//	while (i < numsSize)
//	{
//		if (nums[i] == nums[j])
//		{
//			i++;
//		}
//		else
//		{
//			nums[index++] = nums[i];
//			j = i;
//			i++;
//		}
//	}
//	return index;
//}
//
//int main()
//{
//	int arr[] = { 0, 0, 1, 1, 2, 2, 2, 3,3,4, 4 };
//	int ret = removeDuplicates(arr, 11);
//	int i = 0;
//	for (i = 0; i < ret; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//    return 0;
//}



//void rotate(int* nums, int numsSize, int k)
//{
//	k = k % numsSize;
//	while (k--)
//	{
//		int tmp = nums[numsSize - 1];
//		int i = numsSize - 1;
//		while (i > 0)
//		{
//			nums[i] = nums[i - 1];
//			i--;
//		}
//		nums[0] = tmp;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	rotate(arr, 10, 3);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

