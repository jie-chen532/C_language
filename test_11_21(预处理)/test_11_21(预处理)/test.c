#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//#define MALLOC(type,num)  (type*)malloc(num*sizeof(type))
//int main()
//{
//	int *p = MALLOC(int, 4);
//	if (p == NULL)
//	{
//		perror("MALLOC");
//	}
//	free(p);
//	p = NULL;
//}

//#define MAX 100
//int main()
//{
//	printf("%d\n", MAX);
//	 
//  #undef MAX
//
//	printf("%d\n", MAX);
//
//	return 0;
//}


//#define __PRINT__
//int main()
//{
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//#ifdef __PRINT__
//		printf("%d ", arr[i]);
//#endif
//	}
//	return 0;



//int main()
//{
////#if 1
////#if 1==2
//#if 3>2
//	printf("hehe\n");
//#endif
//	return 0;
//}


//#define __PRINT__  -1
//int main()
//{
//	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i + 1;
//#if __PRINT__ 
//		printf("%d ", arr[i]);
//#endif
//	}
//	return 0;
//}


//分支条件编译
//#define A 2
//#define B 3
//int main()
//{
//#if B==A
//	printf("%d\n", B);
//#elif B<A
//	printf("%d\n", A);
//#else
//	printf("%d\n", A+B);
//#endif
//	return 0;
//}


//判断是否被定义
//#define __PRINT__
//int main()
//{
//#if defined(__PRINT__)
//	printf("hehe\n");
//#endif
//	return 0;
//}

//int main()
//{
//#if !defined(__PRINT__)
//	printf("hehe\n");
//#endif
//	return 0;
//}

//int main()
//{
//#ifndef __PRINT__
//	printf("hehe\n");
//#endif
//	return 0;
//}

//嵌套指令
//#define __PRINT1__
//#define __HAHA__
//#define __HEHE__
//int main()
//{
//#if defined(__PRINT__)
//    #ifdef __HEHE__
//	    printf("hehe\n");
//    #endif
//    #ifdef __HAHA__
//	    printf("haha\n");
//    #endif
//
//#elif defined(__PRINT1__)
//    #ifdef __HEHE__
//	    printf("hehe\n");
//    #endif
//
//    #ifdef __HAHA__
//	    printf("haha\n");
//    #endif
//#endif
//	return 0;
//}

#include"test.h"



//offsetof   #include<stddef.h>
//用宏写offsetof
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//	double d;
//};
//
//#define OFFSETOF(name,member)   (size_t)&(((name*)0)->member)
//int main()
//{
//	struct S s = { 0 };
//	printf("%d\n", OFFSETOF(struct S, c1));
//	printf("%d\n", OFFSETOF(struct S, i)); 
//	printf("%d\n", OFFSETOF(struct S, c2));
//	printf("%d\n", OFFSETOF(struct S, d));
//	return 0;
//}


//找一个单身狗
//在一串数字中，只有一个数字是单着的，其他数字都有两个
//把全部的数字异或，最后的结果就是单着的数，因为相等的两个数异或结果为0，任意一个数与0异或，都还是那个数
//int main()
//{
//	int arr[] = { 1, 2, 1, 2, 3, 3, 4, 5, 5, 10, 10, 12, 12 };
//	int i = 0;
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret^arr[i];
//	}
//	printf("%d\n", ret);
//	return 0;
//}


//找两只单身狗
//int main()
//{
//	int arr[] = { 1, 2, 1, 2, 3, 3, 4, 4, 5, 10, 12, 12 };
//	int i = 0;
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//将两只单身狗异或 4和10异或
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret^arr[i];
//	}
//
//	//0100  4
//	//1010  10   相异或
//	//1110
//	//找到他们某2位不相等，然后将所有数字进行区分，第二位为0，为一组，第二位为1的为一组
//	//这样就把两个单身狗数字分别分组，组内进行异或，就能分别找出两个单身狗
//
//	//找到不相同的位
//	for (i = 0; i < 32; i++)
//	{
//		if (((ret >> i) & 1) == 1)
//		{
//			break;
//		}
//	}
//
//	int j = 0;
//	int tmp1 = 0;//不相同位为1
//	int tmp2 = 0;//不相同位位0
//	for (j = 0; j < sz; j++)
//	{
//		if (((arr[j] >> i) & 1) == 1)
//		{
//			tmp1 = tmp1^arr[j];
//		}
//		//else
//		//{
//		//	tmp2 = tmp2^arr[j];
//		//}
//	}
//	tmp2 = ret^tmp1;
//	printf("%d %d", tmp1, tmp2);
//
//	return 0;
//}



//去重
int main()
{
	int arr[5000] = { 0 };
	int n = 0;//多少个数字
	int i = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	//去重
	for (i = 0; i < n; i++)
	{
		int j = 0;
		for (j = i + 1; j < n; j++)
		{
			//将重复的数字覆盖
			if (arr[i] == arr[j])
			{
				int k = 0;
				for (k = j; k < n - 1; k++)
				{
					arr[k] = arr[k + 1];
				}
				n--;//数组长度减一
				j--;//将新的数组j位置进行判断
			}
		}
	}

	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}