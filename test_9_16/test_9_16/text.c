#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
//指针进行解引用操作的时候，能一次访问几个字节
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;//访问4个字节
//	char* pb = &a;//访问一个字节
//
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//
//	printf("%p\n", pb);
//	printf("%p\n", pb+1);
//	return 0;
//}


//野指针
//int main()
//{
//	int* p;  //p就是野指针
//	//p是指针变量，局部变量，局部不主动初始化，默认是随机值
//
//	*p = 20; //error 不能运行
//	return 0;
//}


//指针指向的空间释放
//int* test()
//{
//	int a = 10;//a是一个局部变量，函数结束时，就把a的地址还回内存
//	//虽然返回了a的地址，但是a已经不存在了。可能其他变量占用此位置
//	return &a;
//}
//
//int main()
//{
//	int* p = test();//p是野指针
//
//	return 0;
//}


//int main()
//{
//	//int* p = NULL;//p为NULL指针，没有指向合法空间
//	////NULL就是0地址，0地址普通用户无法访问
//	//*p = 200;//error
//
//	//正确的写法
//	//避免NULL
//	int a = 10;
//	int* p = &a;
//	if (p != NULL)
//	{
//		*p = 200;
//	}
//	return 0;
//}


//指针-指针 得到的是指针和指针之间的元素个数
//前提是：两个指针指向同一空间
//int main()
//{
//	char ch[5] = { 0 };
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	printf("%d\n", &arr[3] - &arr[2]);
//	printf("%d\n", &arr[3] - &ch[2]);//error
//
//	return 0;
//}


//计算字符串的长度（指针-指针）
//#include<string.h>
//int my_strlen(char* arr)
//{
//	char* start = arr;
//	while (*arr != '\0')
//	{
//		arr++;
//	}
//	return arr - start;
//}
//
//int main()
//{
//	char arr[] = { "abc" };
//	int len = my_strlen(arr);
//
//	printf("%d\n", len);
//	return 0;
//}


//指针数组
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* arr[5] = { &a, &b, &c };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *(arr[i]));//10 20 30
	}
	return 0;
}