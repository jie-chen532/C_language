#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>


//void qsort( void *base, 
//            size_t num, 
//            size_t width, 
//            int (__cdecl *compare )(const void *elem1, const void *elem2 ) )


//
//int cmp_int(const void *elem1, const void *elem2)
//{
//	return  *((int*)elem1) - *((int*)elem2);
//}
//
//void print(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n"); 
//}
//
////qsort排序整形
//void test1()
//{
//	int arr[] = { 10, 9, 34, 7, 23, 5, 4, 11, 2, 71, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	qsort(arr, sz, 4, cmp_int);
//	print(arr, sz);
//}
//
//
//
////qsort结构体排序
//struct s
//{
//	char name[20];
//	int age;
//};
//
////用年龄
//int cpm_age(const void *elem1, const void *elem2)
//{
//	return (((struct s*)elem1)->age) - (((struct s*)elem2)->age);
//}
//
////用名字
//int cpm_name(const void *elem1, const void *elem2)
//{
//	return strcmp(((struct s*)elem1)->name, ((struct s*)elem2)->name);
//}
//
//void print_s(struct s arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s %d\n", arr[i].name,arr[i].age);
//	}
//	printf("\n");
//}
//
//void test2()
//{
//	struct s arr[] = { { "zhangsan",50 }, { "lisi",76 }, { "wangwu", 43 } };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_s(arr, sz);
//	//qsort(arr, sz, sizeof(arr[0]), cpm_age);
//	qsort(arr, sz, sizeof(arr[0]), cpm_name);
//	print_s(arr, sz);
//}
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}



//用bbule_sort实现qsort的功能


//void* 的指针是无具体类型的指针
//可以接收任意数据类型的地址
//void* 的指针不能直接+- 整数的操作
//void* 的指针不能直接解引用操作


//int cmp_int(const void *elem1, const void *elem2)
//{
//	return  *((int*)elem1) - *((int*)elem2);
//}
//
//void Swap(void* elem1, void* elem2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *((char*)elem1 + i);
//		*((char*)elem1 + i) = *((char*)elem2 + i);
//		*((char*)elem2 + i) = tmp;
//	}
//}
//
//void bubble_sort(void *base,
//	             int num,
//	             int width,
//	             int(*cmp)(const void *elem1, const void *elem2))
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < num - 1; i++)
//	{
//		for (j = 0; j < num - 1 - i; j++)
//		{
//			if (cmp((char*)base+width*j,(char*)base+width*(j+1))>0)
//			{
//				//交换两个数，若两个数都有20个字节，那么把这20个字节都交换，就把这两个数交换
//				Swap((char*)base + width*j, (char*)base + width*(j + 1),width);
//			}
//		}
//	}
//}
//
//
//int main()
//{
//	int arr[] = { 32, 9, 7, 6, 34, 90, 54, 21, 45 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	bubble_sort(arr, sz, 4, cmp_int);
//	print(arr, sz);
//	return 0;
//}



//#include<stdio.h>
//#include<string.h>
//int judge_spin(char setArr[], char getArr[],int diff)
//{
//	int i = 0;
//	int setSz = strlen(setArr);
//	//左旋
//	if (diff == 1)
//	{
//		for (i = 1; i < setSz; i++)
//		{
//			char tmp = setArr[0];
//			int j = 0;
//			for (j = 1; j < setSz; j++)
//			{
//				setArr[j - 1] = setArr[j];
//			}
//			setArr[j - 1] = tmp;
//
//			if (strcmp(setArr, getArr) == 0)
//			{
//				printf("左旋:");
//				return i;//左旋i个
//			}
//		}
//	}
//	//右旋
//	if (diff == 0)
//	{
//		for (i = 1; i < setSz; i++)
//		{
//			char tmp = setArr[setSz - 1];
//			int k = 0;
//			for (k = setSz - 1; k >0; k--)
//			{
//				setArr[k] = setArr[k - 1];
//			}
//			setArr[k] = tmp;
//
//			if (strcmp(setArr, getArr) == 0)
//			{
//				printf("右旋:");
//				return i;//右旋i个
//			}
//		}
//	}
//
//	return 0;
//	 
//}

//int main()
//{
//	char setArr[20] = {0};//需要判断的字符
//	char getArr[20] = {0};//对比字符
//	gets(setArr);
//	gets(getArr);
//	int ret = judge_spin(setArr, getArr, 0);//传进1为左旋，0为右旋
//	if (ret)
//	{
//		printf("%d\n", ret);
//	}
//	else
//	{
//		printf("没有旋转\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int judge_spin(char setArr[], char getArr[])
//{
//	int i = 0;
//	int setSz = strlen(setArr);
//	for (i = 1; i < setSz; i++)
//	{
//		char tmp = setArr[0];
//		int j = 0;
//		for (j = 1; j < setSz; j++)
//		{
//			setArr[j - 1] = setArr[j];
//		}
//		setArr[j - 1] = tmp;
//
//		if (strcmp(setArr, getArr) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	char setArr[20] = { 0 };//需要判断的字符
//	char getArr[20] = { 0 };//对比字符
//	gets(setArr);
//	gets(getArr);
//	int ret = judge_spin(setArr, getArr);
//	if (ret)
//	{
//		printf("旋转了\n");
//	}
//	else
//	{
//		printf("没有旋转\n");
//	}
//	return 0;
//}


#include<stdio.h>
#include<string.h>
#include<assert.h>
//左旋转字符串
//abcde  左旋转两个字符
//ab逆置  cde逆置 
//ba  edc - 整个数组逆置
//cdeab

//void reverse(char* left, char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void spin_arr(char arr[], int k)
//{
//	int len = strlen(arr);
//	assert(k < len);
//	reverse(arr, arr + k-1);//左旋转前k个字符
//	reverse(arr + k, arr + len - 1);//左旋转k后面字符
//	reverse(arr, arr + len - 1);//左旋转整个字符串
//}
//
//int main()
//{
//	char arr[200] = "abcdef"; 
//	int k = 0;
//	scanf("%d", &k);
//	printf("%s\n", arr);
//	spin_arr(arr, k);
//	printf("%s\n", arr);
//}


//杨氏矩阵
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，
//请编写程序在这样的矩阵中查找某个数字是否存在。

#include<stdio.h>
#define ROW 3
#define COL 3
int Find(int arr[ROW][COL], int k)
{
	int i = 0;
	int j = 0;
	if (k<arr[0][0] || k>arr[ROW][COL])
	{
		return 0;
	}
	else
	{
		while (i<ROW)
		{
			if (j == 3)
			{
				j = 0;
			}
			while (j < COL)
			{
				if (k>arr[i][j])
				{
					j++;
				}
				if (k < arr[i][j])
				{
					j--;
					i++;
				}
				if (k == arr[i][j])
				{
					return 1;
				}
			}
			i++;
		}
		return 0;
	}
}

int main()
{
	int arr[ROW][COL] = { { 1, 10, 15 }, { 4, 16, 20 }, { 7, 17, 30 } };
	int k = 0;
	scanf("%d", &k);
	int ret = Find(arr, k);
	if (ret)
	{
		printf("矩阵中存在%d\n", k);
	}
	else
	{
		printf("矩阵中不存在%d\n", k);
	}
	return 0;
}