#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//��ӡ1-100������
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


//define�����
//�˷��ĺ�

//#define MUL(x,y) ((x)*(y))
//
//int main()
//{
//	int mul = 0;
//	mul = MUL(2, 4);
//	printf("mul = %d\n", mul);
//	return 0;
//}


//ָ��
//  %p-��ӡ��ַ-16����
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
//	////ָ�����������ŵ�ַ
//	////*˵��p��ָ�����
//	////int pָ��������
//	//*p = 20;//*p=a
//	//printf("%d\n", a); //20
//
//	char ch = 'u';
//	char* pc = &ch; 
//	*pc = 'l'; //*-��Ӧ�ò�����
//	printf("%c\n", ch);
//	return 0;
//}

//ָ�������С
//int main()
//{
//	//32λƽ̨-��ַ��СΪ4���ֽ�-ָ�������С��Ҫ4���ֽ�
//	//64λƽ̨-��ַ��СΪ8���ֽ�-ָ�������С��Ҫ8���ֽ�
//	printf("int:%d\n", sizeof(int *));
//	printf("char:%d\n", sizeof(char *));
//	printf("double:%d\n", sizeof(double *));
//	printf("float:%d\n", sizeof(float *));
//	printf("short:%d\n", sizeof(short *));
//	return 0;
//}


//�ṹ��

//struct stu
//{
//	char name[20];
//	short age;
//};//;�ش�
//
//int main()
//{
//	struct stu s1 = { "����", 18 }; 
//	//. �ṹ�����.�ṹ��ĳ�Ա s1.name
//	printf("%s %d\n", s1.name, s1.age);
//
//	//->  �ṹ��ָ��->�ṹ��ĳ�Ա
//	struct stu* p = &s1;
//	printf("%s %d\n", p->name, p->age);
//
//	//*p=s1   *p��һ�����壬Ҫ�����ţ�*p��
//	printf("%s %d\n", (*p).name, (*p).age);
//	return 0;
//}


//д���뷽ʽ


//int main()
//{
//	int a = 0;
//	int b = 2;
//	//���õ���д���
//	//if (a == 1)
//	//   if (b == 2)
//	//	  printf("hehe\n");
//	//else //else�������������ҿ�����Ե�if���
//	//	printf("haha\n");
//
//	//�õ���д���
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	}
//	return 0;	//ʲôҲ�������
//}


int main()
{
	int a = 3;

	//if (a = 4)//����Ӧ�����жϣ���������a=4�ͻ����bug
	//{
	//	printf("haha\n");
	//}

	//tip
	if (4 == a)//������4=a,�ͻ���ִ���
	{
		printf("haha\n");
	}
	return 0;
}