#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
//ָ����н����ò�����ʱ����һ�η��ʼ����ֽ�
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;//����4���ֽ�
//	char* pb = &a;//����һ���ֽ�
//
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//
//	printf("%p\n", pb);
//	printf("%p\n", pb+1);
//	return 0;
//}


//Ұָ��
//int main()
//{
//	int* p;  //p����Ұָ��
//	//p��ָ��������ֲ��������ֲ���������ʼ����Ĭ�������ֵ
//
//	*p = 20; //error ��������
//	return 0;
//}


//ָ��ָ��Ŀռ��ͷ�
//int* test()
//{
//	int a = 10;//a��һ���ֲ���������������ʱ���Ͱ�a�ĵ�ַ�����ڴ�
//	//��Ȼ������a�ĵ�ַ������a�Ѿ��������ˡ�������������ռ�ô�λ��
//	return &a;
//}
//
//int main()
//{
//	int* p = test();//p��Ұָ��
//
//	return 0;
//}


//int main()
//{
//	//int* p = NULL;//pΪNULLָ�룬û��ָ��Ϸ��ռ�
//	////NULL����0��ַ��0��ַ��ͨ�û��޷�����
//	//*p = 200;//error
//
//	//��ȷ��д��
//	//����NULL
//	int a = 10;
//	int* p = &a;
//	if (p != NULL)
//	{
//		*p = 200;
//	}
//	return 0;
//}


//ָ��-ָ�� �õ�����ָ���ָ��֮���Ԫ�ظ���
//ǰ���ǣ�����ָ��ָ��ͬһ�ռ�
//int main()
//{
//	char ch[5] = { 0 };
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	printf("%d\n", &arr[3] - &arr[2]);
//	printf("%d\n", &arr[3] - &ch[2]);//error
//
//	return 0;
//}


//�����ַ����ĳ��ȣ�ָ��-ָ�룩
//#include<string.h>
//int my_strlen(char* arr)
//{
//	char* start = arr;
//	while (*arr != '\0')
//	{
//		arr++;
//	}
//	return arr - start;
//}
//
//int main()
//{
//	char arr[] = { "abc" };
//	int len = my_strlen(arr);
//
//	printf("%d\n", len);
//	return 0;
//}


//ָ������
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* arr[5] = { &a, &b, &c };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *(arr[i]));//10 20 30
	}
	return 0;
}