#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<assert.h>
//char* my_strcpy(char* dest,const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* start = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return start;
//}
//
//int main()
//{
//	char arr1[20] = "hello party";
//	char arr2[20] = { 0 };
//	char* (*pf)(char*, const char*) = my_strcpy;
//	pf(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}


//(*( void(*)() )0)();   函数调用
//    void(*)()-函数指针类型
//double = 3.14;
//(int)3.14;
//(*(           )0)();
//( void(*)() )0   强制类型转化0-地址
// *( void(*)())0  对地址解引用操作找到函数
//(*( void(*)() )0)() 不传参数

//例
//void test()
//{
//	printf("hehe");  
//}
//
//int main()
//{
//	printf("%p\n", test);//00BE11E5  以00BE11E5为例
//	(*(void(*)())00BE11E5)();    
//	return 0;
//}


//void(* signal(int, void(*)(int) )  )(int);  函数声明
//void(*                             )(int);  signal函数的返回类型
//signal是一个函数声明
//signal函数的第一个参数是int类型
//signal函数的第二个参数类型是函数指针，该函数指针指向一个参数为int，返回类型为void的函数
//signal函数的返回类型是函数指针，该函数指针指向一个参数为int，返回类型为void的函数

//typedef作用是为一种数据类型定义一个新名字,定义的新名字同样为数据类型
//int main()
//{
//	typedef int int_t;
//	int_t a = 0;
//	printf("%d\n", a);
//	return 0;
//}


//简化void(* signal(int, void(*)(int) ) )(int);

//typedef void(*)(int) pf;  //error  不能这样定义void(*)(int)
//typedef void(*pf_t)(int);//pf_t是void(*)(int)的新名字
//pf_t signal(int, pf_t);
//typedef int(*arr_t)[10];
//typedef int int_t;


//typedef和#define
//#define p_t1 int*
//int main()
//{
//	typedef int* p_t;//p_t是int*类型
//	p_t a, b;//a和b都是int* 类型
//	
//	p_t1 c, d;//define p_t1替代int*,p_t1不是int*类型
//	//int* c,d;
//	//c是int*,d不是int*
//	return 0;
//}



//函数指针数组
//存放函数指针数组
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int sub(int x, int y)
//{
//	return x - y;
//}
//
//int main()
//{
//	//数组存放相同类型的数据存储空间
//	int(*pf1)(int, int) = add;
//	int(*pf2)(int, int) = sub;
//
//	//int(*pf[4])(int, int) = { pf1, pf2 };
//	int(*pf[4])(int, int) = { add, sub };
//	return 0;
//}


//计算器
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int sub(int x, int y)
//{
//	return x - y;
//}
//
//int mul(int x, int y)
//{
//	return x * y;
//}
//
//int div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("***************************\n");
//	printf("*******1.add   2.sub*******\n");
//	printf("*******3.mul   4.div*******\n");
//	printf("*******    0.exit   *******\n");
//	printf("***************************\n");
//}
//
//int main()
//{
//	int input = 0;
//	int a = 0;
//	int b = 0;
//	//转移表
//	int(*pf[5])(int, int) = { 0, add, sub, mul, div };
//
//	do
//	{
//		menu();
//		printf("请输入你的选择:> ");
//		scanf("%d", &input);
//
//		if (input >=1 && input <= 4)
//		{
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &a, &b);
//			int ret = pf[input](a, b);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出计算器\n");
//		}
//		else
//		{
//			printf("输入错误，请重新输入\n");
//		}
//	} while (input);
//	return 0;
//}


//指向函数指针数组的指针
//void test(const char* str)
//{
//	printf("%s\n", str);
//}
//
//int main()
//{
//	//函数指针
//	void(*pf)(const char*srt);
//	//函数指针数组
//	void(*pfArr[5])(const char* str) = {test};
//	//指向函数指针数组的指针
//	void(*(*pf1)[5])(const char* str) = &pfArr;
//	return 0;
//}


//回调函数
//如果你把函数的指针(地址)作为参数传递给另一个函数
//当这个指针被用来调用其所指向的函数时，我们就说这是回调函数
int add(int x, int y)
{
	return x + y;
}

int sub(int x, int y)
{
	return x - y;
}

int mul(int x, int y)
{
	return x * y;
}

int div(int x, int y)
{
	return x / y;
}

void menu()
{
	printf("***************************\n");
	printf("*******1.add   2.sub*******\n");
	printf("*******3.mul   4.div*******\n");
	printf("*******    0.exit   *******\n");
	printf("***************************\n");
}

void cal(int(*pf)(int, int))
{
	int a = 0;
	int b = 0;
	printf("请输入两个操作数:>");
	scanf("%d%d", &a, &b);
	int ret = pf(a,b);
	printf("%d\n", ret);
}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请输入你的选择:>");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			cal(add);
			break;
		case 2:
			cal(sub);
			break;
		case 3:
			cal(mul);
			break;
		case 4:
			cal(div);
			break;
		case 0:
			printf("退出计算器\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}

	} while (input);
	return 0;
}