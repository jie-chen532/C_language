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


//(*( void(*)() )0)();   ��������
//    void(*)()-����ָ������
//double = 3.14;
//(int)3.14;
//(*(           )0)();
//( void(*)() )0   ǿ������ת��0-��ַ
// *( void(*)())0  �Ե�ַ�����ò����ҵ�����
//(*( void(*)() )0)() ��������

//��
//void test()
//{
//	printf("hehe");  
//}
//
//int main()
//{
//	printf("%p\n", test);//00BE11E5  ��00BE11E5Ϊ��
//	(*(void(*)())00BE11E5)();    
//	return 0;
//}


//void(* signal(int, void(*)(int) )  )(int);  ��������
//void(*                             )(int);  signal�����ķ�������
//signal��һ����������
//signal�����ĵ�һ��������int����
//signal�����ĵڶ������������Ǻ���ָ�룬�ú���ָ��ָ��һ������Ϊint����������Ϊvoid�ĺ���
//signal�����ķ��������Ǻ���ָ�룬�ú���ָ��ָ��һ������Ϊint����������Ϊvoid�ĺ���

//typedef������Ϊһ���������Ͷ���һ��������,�����������ͬ��Ϊ��������
//int main()
//{
//	typedef int int_t;
//	int_t a = 0;
//	printf("%d\n", a);
//	return 0;
//}


//��void(* signal(int, void(*)(int) ) )(int);

//typedef void(*)(int) pf;  //error  ������������void(*)(int)
//typedef void(*pf_t)(int);//pf_t��void(*)(int)��������
//pf_t signal(int, pf_t);
//typedef int(*arr_t)[10];
//typedef int int_t;


//typedef��#define
//#define p_t1 int*
//int main()
//{
//	typedef int* p_t;//p_t��int*����
//	p_t a, b;//a��b����int* ����
//	
//	p_t1 c, d;//define p_t1���int*,p_t1����int*����
//	//int* c,d;
//	//c��int*,d����int*
//	return 0;
//}



//����ָ������
//��ź���ָ������
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
//	//��������ͬ���͵����ݴ洢�ռ�
//	int(*pf1)(int, int) = add;
//	int(*pf2)(int, int) = sub;
//
//	//int(*pf[4])(int, int) = { pf1, pf2 };
//	int(*pf[4])(int, int) = { add, sub };
//	return 0;
//}


//������
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
//	//ת�Ʊ�
//	int(*pf[5])(int, int) = { 0, add, sub, mul, div };
//
//	do
//	{
//		menu();
//		printf("���������ѡ��:> ");
//		scanf("%d", &input);
//
//		if (input >=1 && input <= 4)
//		{
//			printf("����������������:>");
//			scanf("%d%d", &a, &b);
//			int ret = pf[input](a, b);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�������\n");
//		}
//		else
//		{
//			printf("�����������������\n");
//		}
//	} while (input);
//	return 0;
//}


//ָ����ָ�������ָ��
//void test(const char* str)
//{
//	printf("%s\n", str);
//}
//
//int main()
//{
//	//����ָ��
//	void(*pf)(const char*srt);
//	//����ָ������
//	void(*pfArr[5])(const char* str) = {test};
//	//ָ����ָ�������ָ��
//	void(*(*pf1)[5])(const char* str) = &pfArr;
//	return 0;
//}


//�ص�����
//�����Ѻ�����ָ��(��ַ)��Ϊ�������ݸ���һ������
//�����ָ�뱻������������ָ��ĺ���ʱ�����Ǿ�˵���ǻص�����
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
	printf("����������������:>");
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
		printf("���������ѡ��:>");
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
			printf("�˳�������\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}

	} while (input);
	return 0;
}