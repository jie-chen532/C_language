#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>

//���Զ�ջ
//void test2()
//{
//	printf("�Ǻ�\n");
//}
//
//void test1()
//{
//	test2();
//}
//
//void test()
//{
//	test1();
//}
//
//int main()
//{
//	test();
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	
//
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	//�������ѭ��
//	//�����ٵ��Ե�ʱ����a[12]�ĵ�ַ��i�ĵ�ַһ����arr[12]=0,ͬ��i=0;�ͻ������ѭ��
//	return 0;
//}


//strcpy-�ַ�������
//void my_strcpy(char* arr2, char*arr1)
//{
//	while ((*arr1) != '\0')
//	{
//		*arr2 = *arr1;
//		arr2++;
//		arr1++;
//	}
//	*arr2 = *arr1;//����'\0'
//}

//void my_strcpy(char* arr2, char*arr1)
//{
//	while ((*arr1) != '\0')
//	{
//		*arr2++ = *arr1++;
//	}
//	*arr2 = *arr1;
//}

//void my_strcpy(char* arr2, char*arr1)
//{
//	if (arr2 == NULL||arr1 == NULL)
//	{
//		return;
//	}
//	while (*arr2++ = *arr1++)
//	{
//		;
//	}
//}

//assert-����   ������жϣ��������Ϊ�٣�����ͻ���ִ���  #include<assert.h>
//char* my_strcpy(char* arr2, const char* arr1)
//{
//	char* start = arr2;
//	assert(arr2 != NULL);
//	assert(arr1 != NULL);
//	while (*arr2++ = *arr1++)
//	{
//		;
//	}
//	return start;
//}
//
//
//int main()
//{
//	char arr1[] = "hello world";
//	char arr2[20] = "XXXXXXXXX";
//
//	printf("%s\n", my_strcpy(arr2, arr1));
//
//	return 0;
//}


//const ����ָ���ʱ��
//const����*����ߣ���ʾָ��ָ������ݣ�*p������ͨ��ָ�루p�����ı䣬����ָ�������p�������ǿ����޸ĵ�
//const����*���ұߣ���ʾָ��ָ������ݣ�*p������ͨ��ָ�루p�����ı䣬����ָ�������p�������ǲ������޸ĵ�
//int main()
//{
//	int a = 0;
//	int b = 0;
//    const int  *p = &a;
//	//*p = 20;  error  *p���ܸı�
//	p = &b;
//
//	int * const p1 = &a;
//	//p1 = &b;  error  p1���ܸı�
//	*p1 = 20;
//
//	return 0;
//}


int my_strlen(const char* arr)
{
	int count = 0;
	assert(arr != NULL);
	while (*arr++ != '\0')
	{
		count++;
	}
	return count;
}

int main()
{
	char arr[] = "abcd";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}