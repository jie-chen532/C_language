#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//声明一个结构体类型
//struct Book
//{
//	char name[20];//书名
//	short price;//定价
//}b4,b5,b6;//全局变量

//typedef struct Book
//{
//	char name[20];//书名
//	short price;//定价
//}Book;//给结构体重命名为Book
//
//int main()
//{
//	struct Book b1;//创建一本书
//	struct Book b2;
//
//	struct Book b4;
//
//	Book a1;
//
//	strcpy(b1.name, "C语言");
//	b1.price = 20;
//
//	printf("%s\n", b1.name);
//	printf("%d\n", b1.price);
//	return 0;
//}


//struct B
//{
//	int a;
//	char c;
//};
//
//struct S
//{
//	int a;
//	char arr[20];
//	int* p;
//	struct B sb;
//};
//
//int main()
//{
//	struct B b = { 10, 'c' };
//	struct S s = { 10, "hehe", NULL, { 33, 'Q' } };
//
//	printf("%d %s %d %c\n", s.a, s.arr, s.sb.a, s.sb.c);
//	return 0;
//}

struct stu
{
	char name[20];
	int age;
};

void print1(struct stu a)
{
	printf("%s %d\n", a.name, a.age);
}

void print2(struct stu* p)
{
	printf("%s %d\n", p->name, p->age);
}

int main()
{
	struct stu a = { "张三", 20 };
	//传值调用
	print1(a);

	//传址调用
	print2(&a);
	return 0;
}


