#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
//union Un
//{
//	int i;//4  4
//	char c[5];//1*5 = 5
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));//8
//
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//
//	return 0;
//}

//共用体的应用
//判断当前计算机的大小端存储
//union un
//{
//	int i;
//	char c;
//};
////int i和char c使用同一块空间
//
//int is_check()
//{
//	union un u;
//	u.i = 1;
//	return u.c;
//}
//
//int main()
//{
//	int ret=is_check();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}



//题目名称：
//杨氏矩阵
//题目内容：
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，
//请编写程序在这样的矩阵中查找某个数字是否存在。

//要求：时间复杂度小于O(N);

//1 2 3
//4 5 6
//7 8 9

//每次都以最右上角为基准
//若大于基准,去掉一行
//若小于基准，去掉一列
#define COL 3
#define ROW 3

//int find_num(int arr[ROW][COL], int row, int col, int key)
//{
//	int i = 0;
//	int j = col-1;
//	while (i<row && j>=0)
//	{
//		if (key > arr[i][j])
//		{
//			i++;
//		}
//		else if (key < arr[i][j])
//		{
//			j--;
//		}
//		else
//		{
//			return 1;
//		}
//
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int arr[ROW][COL] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
//
//	int key = 0;
//	scanf("%d", &key);
//
//	int ret = find_num(arr,ROW,COL,key);
//
//	if (ret)
//	{
//		printf("找到了\n");
//	}
//	else
//	{
//		printf("没找到\n");
//	}
//	return 0;
//}




//想要把找到的下标也返回
//把地址传进去
int find_num(int arr[ROW][COL], int *pr, int *pc, int key)
{
	int i = 0; 
	int j = *pc - 1;
	while (i<*pr && j >= 0)
	{
		if (key > arr[i][j])
		{
			i++;
		}
		else if (key < arr[i][j])
		{
			j--;
		}
		else
		{
			*pr = i;
			*pc = j;
			return 1;
		}

	}
	return 0;
}


int main()
{
	int arr[ROW][COL] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };

	int i = ROW;
	int j = COL;

	int key = 0;
	scanf("%d", &key);

	int ret = find_num(arr, &i, &j, key);

	if (ret)
	{
		printf("找到了,下标为%d行，%d列\n",i+1,j+1);
	}
	else
	{
		printf("没找到\n");
	}
	return 0;
}