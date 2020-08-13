#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//打印1-100的奇数
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d ", i);
//		}
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%d ", i);
//		i += 2;
//	}
//	return 0;
//}


//define定义宏
//乘法的宏

//#define MUL(x,y) ((x)*(y))
//
//int main()
//{
//	int mul = 0;
//	mul = MUL(2, 4);
//	printf("mul = %d\n", mul);
//	return 0;
//}


//指针
//  %p-打印地址-16进制
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//	return 0;
//}

//int main()
//{
//	//int a = 10;
//	//int* p = &a;
//	////指针变量用来存放地址
//	////*说明p是指针变量
//	////int p指的是整形
//	//*p = 20;//*p=a
//	//printf("%d\n", a); //20
//
//	char ch = 'u';
//	char* pc = &ch; 
//	*pc = 'l'; //*-解应用操作符
//	printf("%c\n", ch);
//	return 0;
//}

//指针变量大小
//int main()
//{
//	//32位平台-地址大小为4个字节-指针变量大小需要4个字节
//	//64位平台-地址大小为8个字节-指针变量大小需要8个字节
//	printf("int:%d\n", sizeof(int *));
//	printf("char:%d\n", sizeof(char *));
//	printf("double:%d\n", sizeof(double *));
//	printf("float:%d\n", sizeof(float *));
//	printf("short:%d\n", sizeof(short *));
//	return 0;
//}


//结构体

//struct stu
//{
//	char name[20];
//	short age;
//};//;必带
//
//int main()
//{
//	struct stu s1 = { "李四", 18 }; 
//	//. 结构体对象.结构体的成员 s1.name
//	printf("%s %d\n", s1.name, s1.age);
//
//	//->  结构体指针->结构体的成员
//	struct stu* p = &s1;
//	printf("%s %d\n", p->name, p->age);
//
//	//*p=s1   *p是一个整体，要带括号（*p）
//	printf("%s %d\n", (*p).name, (*p).age);
//	return 0;
//}


//写代码方式


//int main()
//{
//	int a = 0;
//	int b = 2;
//	//不好的书写风格
//	//if (a == 1)
//	//   if (b == 2)
//	//	  printf("hehe\n");
//	//else //else会和离它最近并且可以配对的if配对
//	//	printf("haha\n");
//
//	//好的书写风格
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	}
//	return 0;	//什么也不会输出
//}


int main()
{
	int a = 3;

	//if (a = 4)//这里应该是判断，但是手误a=4就会出现bug
	//{
	//	printf("haha\n");
	//}

	//tip
	if (4 == a)//若手误4=a,就会出现错误
	{
		printf("haha\n");
	}
	return 0;
}