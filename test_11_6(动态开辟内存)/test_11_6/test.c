#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//动态开辟 malloc  向内存申请一块连续可用的空间
//void *malloc( size_t size );
//若开辟成功，则返回一个指向开辟好空间的指针
//若开辟失败，则返回一个NULL指针
//int main()
//{
//	int *p = (int*)malloc(sizeof(int)* 10);
//	if (p == NULL)
//	{
//		perror("打印int开辟错误信息");
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i + 1;
//		}
//		for (i = 0; i < 5; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//calloc
//void *calloc(size_t num, size_t size);
//num个大小为size的元素开辟一块空间，并且把空间的每个字节初始化为0
//int main()
//{
//	int *p = (int*)calloc(10,sizeof(int) );
//	if (p == NULL)
//	{
//		perror("打印calloc错误信息");
//	}
//	else
//	{
//		int i = 0;
//
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//realloc调整内存
//void *realloc( void *memblock, size_t size );
//memblock是要调整的内存地址
//int main()
//{
//	int *p = (int*)malloc(sizeof(int)* 5);
//
//	if (p == NULL)
//	{
//		perror("malloc");
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i + 1;
//		}
//	}
//
//	int *ptr = (int*)realloc(p, sizeof(int)* 10);
//
//	if (ptr == NULL)
//	{
//		perror("realloc");
//	}
//	else
//	{
//		p = ptr;
//		ptr = NULL;
//	}
//	int i = 0;
//	for (i = 5; i < 10; i++)
//	{
//		*(p + i) = 7;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	free(p);
//	p = NULL;
//	return 0;
//}



//常见的内存动态错误

//对NULL指针的解引用操作
//void test()
//{
//	int *p = (int *)malloc(sizeof(int));
//	*p = 20;//如果p为NULL，就对NULL指针的解引用操作，就会有问题，一定要判断p是否为NULL
//	free(p);
//  p = NULL;
//}


//对动态开辟空间的越界访问
//void test()
//{
//	int i = 0;
//	int *p = (int*)malloc(sizeof(int)* 10);
//	if (p == NULL)
//	{
//		perror("malloc");
//	}
//	else
//	{
//		for (i = 0; i <= 10; i++)
//		{
//			*(p + i) = i;//当i是10的时候越界访问
//		}
//	}
//	free(p);
//	p = NULL;
//}


//对非动态开辟内存使用free释放
//void test()
//{
//	int a = 10;
//	int *p = &a;
//	free(p);
//	p = NULL;
//}



//使用free释放一块动态开辟内存的一部分
//void test()
//{
//	int *p = (int *)malloc(sizeof(int)* 10);
//	if (p == NULL)
//	{
//		perror("malloc");
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*p = i;
//			p++;
//		}
//	}
//	free(p);
//	p = NULL;
//}


//对同一块动态内存多次释放
//void test()
//{
//	int *p = (int*)malloc(100);
//	if (p = NULL)
//	{
//		perror("malloc");
//	}
//	else
//	{
//		//....
//	}
//	free(p);
//	p = NULL;
//	free(p);
//	p = NULL;
//}


////动态开辟内存忘记释放(内存泄露)
//void test()
//{
//	int *p = (int*)malloc(sizeof(int));
//	if (NULL == p)
//	{
//		perror("malloc");
//	}
//	if (1)
//		return; 
//	free(p);
//	p = NULL;
//}
//
//int main()
//{
//	test();
//	return 0;
//}



//笔试题
//void GetMemory(char * p)
//{
//	p = (char *)malloc(100);
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	//1.内存泄漏，没有free
//	//2.str只是传进去值，在 GetMemory函数中，重新开辟一块p
//	//给p动态开辟空间，而str中还是NULL，把hello world拷贝到NULL中，显然是有问题的
//}


//修改
//void GetMemory(char ** p)
//{
//	*p = (char *)malloc(100);
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}



//char* GetMemory(char * p)
//{
//	p = (char *)malloc(100);
//	return p;
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//
//int main()
//{
//	Test();
//	return 0;
//}


//int* f1()
//{
//	int x = 10;
//	return &x;
//	//x是局部变量，函数结束后，将会释放x，返回x的地址就是非法访问内存
//	//因为x的那块内存已还给操作系统，不属于我们的操作范围
//}


//char *GetMemory(void)
//{
//	//返回栈空间地址的问题
//	char p[] = "hello world";
//	return p;
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory();
//	printf(str);
//	//p是个局部变量，函数结束后，p会被释放，p的那块内存还给操作系统
//	//再去操作p的地址，就会非法访问内存，因为这块内存已经不属于我们的操作范围
//}
//
//
//int main()
//{
//	Test();
//	return 0;
//}


//void GetMemory(char **p, int num)
//{
//	*p = (char *)malloc(num);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	//内存泄漏
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}


void Test(void)
{
	char *str = (char *)malloc(100);
	if (str == NULL)
	{
		perror("malloc");
	}
	strcpy(str, "hello");
	free(str);
	//此处没有将str置为NULL，free只能把str释放，并不能将它置为NULL
	//所以str中存放开辟的地址，后面再去使用它，就会非法访问内存，因为free已经释放
	str = NULL;
	if (str != NULL)
	{
		strcpy(str, "world");
		printf(str);
	}
}

int main()
{
	Test();
	return 0;
}