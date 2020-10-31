#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//结构体声明
//struct student
//{
//	char name[20];
//	short age;
//	char sex[5];
//}s1,s2;//全局变量
//
//int main()
//{
//	struct student s1 = { "huahua", 20, "男" };
//
//	//局部变量
//	struct student s3 = { "xiaowang", 20, "女" };
//	return 0;
//}

////匿名结构体
//struct 
//{
//	char name[20];
//	short age;
//	char sex[5];
//}s1;//全局变量
//
//struct student
//{
//	char name[20];
//	short age;
//	char sex[5];
//}*p;


//结构体的自引用
//链表
//struct Node
//{
//	int data;
//	struct Node *next;
//};
//
//int main()
//{
//	//*p = &s1;//报错  编译器会把上面两个声明当成完全不同的类型
//	return 0;
//}


//typedef  struct
//{
//	int data;
//	Node *next;
//}Node;//error  因为Node *next时，还没有创建Node


//typedef  struct Node
//{
//	int data;
//	struct Node *next;
//}Node;
//
//int main()
//{
//	Node s2;
//	return 0;
//}


//结构体的变量和初始化
//struct Point
//{
//	int x;
//	int y;
//};
//
//struct Node
//{
//	struct Point p;
//	struct Node *next;
//};
//
//int main()
//{
//	struct Node s1 = { { 3, 5 }, NULL };
//	printf("%d %d\n", s1.p.x, s1.p.y);
//
//	struct Point a = { 2, 3 };
//	printf("%d %d\n", a.x, a.y);
//	return 0;
//}


//offsetof()计算结构体变量相对首地址的偏移量
//size_t offsetof(structName, memberName);
//#include<stddef.h>

#include<stddef.h>

//struct stu
//{
//	char name[20];
//	short age;
//	char sex[5];
//};
//
//int main()
//{
//	//int ret = offsetof(struct stu, name); //0
//	//int ret = offsetof(struct stu, age);//20
//	int ret = offsetof(struct stu, sex);//23
//	printf("%d\n", ret);
//	printf("%d\n", sizeof(struct stu));//28
//	return 0;
//}



//结构体内存对齐规则：
//第一个成员在与结构体变量偏移量为0的地址处
//其他成员变量要对齐到某个数字的（对齐数）的整数倍的地址处
//对齐数 = 编译器默认的对齐数与该成员变量大小的较小值  （vs中默认的值为8）
//结构体总大小为最大对齐数（每个成员变量都有一个对齐数）的整数倍

//struct s1
//{
//	char c1;  //成员大小1  默认对齐数8   对齐数1   地址0-1
//	int i;//4   8    4    4-7
//	char c2;//1  8   1    11
//};

//struct s2
//{
//	char c1;  //成员大小1  默认对齐数8   对齐数1   地址0-1
//	int i;//4   8    4    4-7
//	char c2;//1  8   1    8
//	char c3;//1 8  1    9
//};
//
//int main()
//{
//	//printf("%d\n", offsetof(struct s1, c1));//0
//	//printf("%d\n", offsetof(struct s1, i));//4
//	//printf("%d\n", offsetof(struct s1, c2));//8
//	//printf("%d\n", sizeof(struct s1));//12
//
//	printf("%d\n", offsetof(struct s2, c1));//0
//	printf("%d\n", offsetof(struct s2, i));//4
//	printf("%d\n", offsetof(struct s2, c2));//8
//	printf("%d\n", offsetof(struct s2, c3));//9
//	printf("%d\n", sizeof(struct s2));//12
//	return 0;
//}


//struct s3
//{
//	char c1; //1 8 0
//	char c2; //1 8 1
//	int i;//4 8   4-7
//};


//struct s4
//{
//	double d; //8  8  0-7
//	char c;//1 8  8
//	int i;// 4  8 12-15
//};
//
////如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处
////结构体的整体大小就是所有最大对齐数（含嵌套结构体的对齐数）的整数倍
//struct s5
//{
//	char c1;//1 8  0
//	struct s4 a;//结构体自己最大对齐数4  4-19
//	double d;//8 8   24-31
//};
//
//int main()
//{
//	//printf("%d", sizeof(struct s3));//8
//	//printf("%d", sizeof(struct s4));//16
//	printf("%d\n", sizeof(struct s5));//32
//	return 0;
//}

//
//struct s
//{
//	char c1;//1 8   0
//	double d;//8  8    8-15
//	char c2;//16  
//};
//
//int main()
//{
//	printf("%d\n", offsetof(struct s, c1));//0
//	printf("%d\n", offsetof(struct s, d));//8
//	printf("%d\n", offsetof(struct s, c2));//16
//	printf("%d\n", sizeof(struct s));//24
//	return 0;
//}

//修改默认对齐数-> 2的次方
//#pragma pack(1)  //设置默认对齐数为1
////struct s2
////{
////	char c1;//1 1  0
////	int i;//4 1   1-4
////	char c2;//1 1  5
////};
//
//struct s
//{
//	char c1;//1  1  0
//	double d;//8 1   1-8
//	char c2;//1  1   9
//};
//
//#pragma pack()//取消设置的默认对齐数，还原为默认
//
//int main()
//{
//	//printf("%d\n", sizeof(struct s2));//6
//	printf("%d\n", sizeof(struct s));//10
//	return 0;
//}


//结构体传参
//struct s
//{
//	char arr[122];
//	int i;
//};
//
//void print1(struct s a)
//{
//	printf("%s %d\n", a.arr, a.i);
//}
//
//void print2(const struct s *p)
//{
//	printf("%s %d\n", p->arr, p->i);
//}
//
//int main()
//{
//	struct s a = { "hello", 5 };
//	print1(a);//结构体传参
//	print2(&a);//结构体地址传参
//}


//位段-冒号后面的数字，指的是这个变量需要两位来存储
//struct A
//{
//	int _a : 2;//4字节   32位  用2位   剩30位
//	int _b : 5;//用5位   剩25位
//	int _c : 10;//用10位    剩15位
//	int _d : 30;//不够用，重新开4字节   
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct A));//8字节
//	return 0;
//}


//位段会有跨平台的问题
//struct S
//{
//	char a : 3;//1
//	char b : 4;//
//	char c : 5;//1
//	char d : 4;//1
//};
//
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//
//	printf("%d\n", sizeof(struct S));//3字节
//
// 	return 0;
//}



//enum
//enum Color
//{
//	RED,
//	GREEN,
//	BLUE
//};
//
//int main()
//{
//	enum Color c = RED;
//	return 0;
//}


//联合(共用体)
//特点：共用同一块内存空间
//union Un
//{
//	char c[5];//最少为5字节  要对齐到最大对齐数的整数倍
//	int i;//
//};
//
//union U
//{
//	short s[7];//最少为14字节
//	int i;//
//};
//
//int main()
//{
//	union Un u = {0};
//
//	printf("%d\n", sizeof(u));//8
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	printf("%d\n", sizeof(union U));//16
//	return 0;
//}


union Un
{
	int i;
	char c;
};

int main()
{
	union Un un;
	un.i = 0x11223344;
	un.c = 0x55;
	printf("%x\n", un.i);//11223355
	return 0;
}