#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//��̬���� malloc  ���ڴ�����һ���������õĿռ�
//void *malloc( size_t size );
//�����ٳɹ����򷵻�һ��ָ�򿪱ٺÿռ��ָ��
//������ʧ�ܣ��򷵻�һ��NULLָ��
//int main()
//{
//	int *p = (int*)malloc(sizeof(int)* 10);
//	if (p == NULL)
//	{
//		perror("��ӡint���ٴ�����Ϣ");
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
//num����СΪsize��Ԫ�ؿ���һ��ռ䣬���Ұѿռ��ÿ���ֽڳ�ʼ��Ϊ0
//int main()
//{
//	int *p = (int*)calloc(10,sizeof(int) );
//	if (p == NULL)
//	{
//		perror("��ӡcalloc������Ϣ");
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


//realloc�����ڴ�
//void *realloc( void *memblock, size_t size );
//memblock��Ҫ�������ڴ��ַ
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



//�������ڴ涯̬����

//��NULLָ��Ľ����ò���
//void test()
//{
//	int *p = (int *)malloc(sizeof(int));
//	*p = 20;//���pΪNULL���Ͷ�NULLָ��Ľ����ò������ͻ������⣬һ��Ҫ�ж�p�Ƿ�ΪNULL
//	free(p);
//  p = NULL;
//}


//�Զ�̬���ٿռ��Խ�����
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
//			*(p + i) = i;//��i��10��ʱ��Խ�����
//		}
//	}
//	free(p);
//	p = NULL;
//}


//�ԷǶ�̬�����ڴ�ʹ��free�ͷ�
//void test()
//{
//	int a = 10;
//	int *p = &a;
//	free(p);
//	p = NULL;
//}



//ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����
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


//��ͬһ�鶯̬�ڴ����ͷ�
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


////��̬�����ڴ������ͷ�(�ڴ�й¶)
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



//������
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
//	//1.�ڴ�й©��û��free
//	//2.strֻ�Ǵ���ȥֵ���� GetMemory�����У����¿���һ��p
//	//��p��̬���ٿռ䣬��str�л���NULL����hello world������NULL�У���Ȼ���������
//}


//�޸�
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
//	//x�Ǿֲ����������������󣬽����ͷ�x������x�ĵ�ַ���ǷǷ������ڴ�
//	//��Ϊx���ǿ��ڴ��ѻ�������ϵͳ�����������ǵĲ�����Χ
//}


//char *GetMemory(void)
//{
//	//����ջ�ռ��ַ������
//	char p[] = "hello world";
//	return p;
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory();
//	printf(str);
//	//p�Ǹ��ֲ�����������������p�ᱻ�ͷţ�p���ǿ��ڴ滹������ϵͳ
//	//��ȥ����p�ĵ�ַ���ͻ�Ƿ������ڴ棬��Ϊ����ڴ��Ѿ����������ǵĲ�����Χ
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
//	//�ڴ�й©
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
	//�˴�û�н�str��ΪNULL��freeֻ�ܰ�str�ͷţ������ܽ�����ΪNULL
	//����str�д�ſ��ٵĵ�ַ��������ȥʹ�������ͻ�Ƿ������ڴ棬��Ϊfree�Ѿ��ͷ�
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