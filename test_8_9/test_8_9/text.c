#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//����
//const���εĳ�����(�����Եı���)
//int main()
//{
//	const int num = 10;
//	//num = 20;    //���ܶԳ����������޸�
//	printf("%d", num);
//
//	//���������num�ǳ�����const��ʵ���Ǳ���
//	//int arr[num] = { 0 };
//
//	return 0;
//}


//define����ı�ʶ��

//#define NUM 100   //NUM��define����ĳ���
//
//int main()
//{
//	//NUM = 100;  //NUM�ǳ������ܸı�
//	printf("%d", NUM);
//	return 0;
//}


//ö�ٳ���

//enum color
//{
//	//ö��������ɫ����������ȡֵ
//	red,
//	green,
//	blue,
//};
// 
//int main()
//{
//	//red = 3;  //error  ö�ٳ���
//
//	printf("%d\n", red);  //����0
//	printf("%d\n", green);   //����1
//	printf("%d\n", blue);  //����2
//	return 0;
//}


// \0���ַ���
// \0���ַ��������ı�־�������ַ���������
#include<string.h>

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[]= { 'a', 'b', 'c', 'd', 'e', 'f'};
//	printf("%s\n", arr1);  //��������abcdef
//	printf("%s\n", arr2);  //��������abcdef����������abcdef  ����arr2�������'\0'
//
//	printf("%d\n", sizeof(arr1));  //7
//	printf("%d\n", sizeof(arr2));  //6
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abcde";
//	char arr2[] = { 'a', 'b', 'c', 'd', 'e','\0' };
//
//	printf("%d\n", strlen(arr1)); //�����5
//	printf("%d\n", strlen(arr2)); //�����5
//	return 0;
//}


//ת���ַ�
int main()
{
	//���'
	printf("%c\n", '\'');
	//���"
	printf("%c\n", '\"');
	printf("%s\n", "he said:\"hard work\"");
	/*���һ�� \*/
	printf("%c\n", '\\');
	printf("%s\n", "c:\\code\\test.c");
	//������
	printf("\a\a\a\a\a");

	// \tˮƽ�Ʊ��   �����൱��tab��
	printf("%s\n", "a\tb\tc");

	// \r�س���  �˻س����Ǳ˻س���
	printf("%s\n", "hello!\rxxx");  //���xxxlo!
	

	//\ddd
	printf("%c\n", '\23'); //19��Ϊascii���ַ��ǿ���̨���ɴ�ӡ�ַ��� 
	printf("%c\n", '\76');
	//\xdd
	printf("%c\n", '\x5F');
	return 0;
}


//����
//int main()
//{ 
//	//  \32��������һ��ת���ַ�
//	printf("%d\n", strlen("c:\test\328\test.c"));  //���Ϊ14
//	return 0;
//}
