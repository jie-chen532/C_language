#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//分数求和：计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值
//int main()
//{
//	int i = 0;
//	int flag = 1;
//	double sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
        //不能改变i的值
//		sum = sum + 1.0 / i*flag;
//		flag = -flag;
//	}
//	printf("%.2lf\n", sum);
//	return 0;
//}




//求10个整数中最大值
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("最大值:%d\n", max);
//	return 0;
//}


//乘法口诀表(9*9)
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %2d   ", j, i, i*j);   //%2d右对齐
//			//printf("%d * %d = %-2d   ", j, i, i*j);  //%-2d左对齐
//		}
//		printf("\n");
//	}
//	return 0;
//}


//猜数字游戏
#include<stdlib.h>
#include<time.h>
//
//void menu() //菜单
//{
//	printf("****** 1.玩游戏   ******\n");
//	printf("****** 0.退出游戏 ******\n");
//}
//
//void game()  //玩游戏
//{
//	int  ret = rand()%100+1;//1-100的随机数
//	int n = 0;
//	while (1)
//	{
//		printf("请输入你猜测的数字:");
//		scanf("%d", &n);
//		if (ret > n)
//		{
//			printf("猜小了\n");
//		}
//		else if (ret < n)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("猜中了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int m = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu(); 
//		printf("请做出选择:");
//		scanf("%d", &m);
//		switch (m)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，请重新输入:");
//			break;
//		}
//	} while (m);
//	return 0;
//}


//二分查找
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int mid = 0;
	int left = 0;
	int n = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	printf("请输入要查找的数:");
	scanf("%d", &n);
	while (left<=right)
	{
		mid = (left + right) / 2;
		if (arr[mid]>n)
		{
			right = mid - 1;
		}
		else if (arr[mid] < n)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了，下标为%d\n", mid);
			break;
		}
	}
	if (left>right)
	{
		printf("找不到\n");
	}
	return 0;
}