#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//�ṹ������
//struct student
//{
//	char name[20];
//	short age;
//	char sex[5];
//}s1,s2;//ȫ�ֱ���
//
//int main()
//{
//	struct student s1 = { "huahua", 20, "��" };
//
//	//�ֲ�����
//	struct student s3 = { "xiaowang", 20, "Ů" };
//	return 0;
//}

////�����ṹ��
//struct 
//{
//	char name[20];
//	short age;
//	char sex[5];
//}s1;//ȫ�ֱ���
//
//struct student
//{
//	char name[20];
//	short age;
//	char sex[5];
//}*p;


//�ṹ���������
//����
//struct Node
//{
//	int data;
//	struct Node *next;
//};
//
//int main()
//{
//	//*p = &s1;//����  ���������������������������ȫ��ͬ������
//	return 0;
//}


//typedef  struct
//{
//	int data;
//	Node *next;
//}Node;//error  ��ΪNode *nextʱ����û�д���Node


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


//�ṹ��ı����ͳ�ʼ��
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


//offsetof()����ṹ���������׵�ַ��ƫ����
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



//�ṹ���ڴ�������
//��һ����Ա����ṹ�����ƫ����Ϊ0�ĵ�ַ��
//������Ա����Ҫ���뵽ĳ�����ֵģ������������������ĵ�ַ��
//������ = ������Ĭ�ϵĶ�������ó�Ա������С�Ľ�Сֵ  ��vs��Ĭ�ϵ�ֵΪ8��
//�ṹ���ܴ�СΪ����������ÿ����Ա��������һ������������������

//struct s1
//{
//	char c1;  //��Ա��С1  Ĭ�϶�����8   ������1   ��ַ0-1
//	int i;//4   8    4    4-7
//	char c2;//1  8   1    11
//};

//struct s2
//{
//	char c1;  //��Ա��С1  Ĭ�϶�����8   ������1   ��ַ0-1
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
////���Ƕ���˽ṹ��������Ƕ�׵Ľṹ����뵽�Լ���������������������
////�ṹ��������С��������������������Ƕ�׽ṹ��Ķ���������������
//struct s5
//{
//	char c1;//1 8  0
//	struct s4 a;//�ṹ���Լ���������4  4-19
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

//�޸�Ĭ�϶�����-> 2�Ĵη�
//#pragma pack(1)  //����Ĭ�϶�����Ϊ1
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
//#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��
//
//int main()
//{
//	//printf("%d\n", sizeof(struct s2));//6
//	printf("%d\n", sizeof(struct s));//10
//	return 0;
//}


//�ṹ�崫��
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
//	print1(a);//�ṹ�崫��
//	print2(&a);//�ṹ���ַ����
//}


//λ��-ð�ź�������֣�ָ�������������Ҫ��λ���洢
//struct A
//{
//	int _a : 2;//4�ֽ�   32λ  ��2λ   ʣ30λ
//	int _b : 5;//��5λ   ʣ25λ
//	int _c : 10;//��10λ    ʣ15λ
//	int _d : 30;//�����ã����¿�4�ֽ�   
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct A));//8�ֽ�
//	return 0;
//}


//λ�λ��п�ƽ̨������
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
//	printf("%d\n", sizeof(struct S));//3�ֽ�
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


//����(������)
//�ص㣺����ͬһ���ڴ�ռ�
//union Un
//{
//	char c[5];//����Ϊ5�ֽ�  Ҫ���뵽����������������
//	int i;//
//};
//
//union U
//{
//	short s[7];//����Ϊ14�ֽ�
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