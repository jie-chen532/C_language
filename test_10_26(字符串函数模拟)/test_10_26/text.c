#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>
#include<string.h>
#include"my_strcat.h"

//ģ��stract
char *my_strcat(char *dest, const char *src)
{
	assert(dest != NULL);
	assert(src != NULL);
	char *start = dest;
	//��'\0'
	while (*dest != '\0')
	{
		dest++;
	}

	//��������
	while (*dest++ = *src++)
	{
		;
	}

	return start;
}

int main()
{
	char arr[20] = "abcdef";
	char arr1[] = "ghijk";
	printf("%s\n", my_strcat(arr, arr1));
	//printf("%s\n", strcat(arr, "hello"));
	return 0;
}

//��̬��
//���뾲̬��

//#pragma comment(lib,"my_stract.lib")
//
//int main()
//{ 
//	char arr[20] = "hello";
//	printf("%s\n", my_strcat(arr, "world"));
//	return 0;
//}



//ģ��strcmp����
//int my_strcmp(const char *s1, const char *s2)
//{
//	assert(s1 != NULL);
//	assert(s2 != NULL);
//
//	while (*s1 == *s2)
//	{
//		if ('\0' == *s1)
//		{
//			return 0;
//		}
//		s1++;
//		s2++;
//	}
//	return *s1 - *s2;
//}
//
//int main()
//{
//	char arr1[] = { "abcdef" };
//	char arr2[] = { "abcdhijk" };
//	//int ret = strcmp(arr1, arr2);
//	//int ret = strcmp("hello", "party");
//	int ret = my_strcmp(arr1, arr2);
//	if (ret > 0)
//	{
//		printf("����\n");
//	}
//	else if (ret < 0)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("����");
//	}
//	return 0;
//}


//strncpy����
//���Դ�ַ����ĳ���С��num,�򿽱����ַ�������Ŀ��ĺ��׷��0��ֱ��num��
//char *my_strncpy(char *dest, const char *src,size_t num)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char *start = dest;
//	size_t tmp = num;
//	if (num <= strlen(src))
//	{
//		while (num--)
//		{
//			*dest++ = *src++;
//		}
//		if (tmp == strlen(src))
//		{
//			*dest = '\0';
//		}
//		return start;
//	}
//	else
//	{
//		size_t n = num - (strlen(src) + 1);
//		while (*dest++ = *src++)
//		{
//			;
//		}
//
//		while (n--)
//		{
//			*dest++ = '\0';
//		}
//		return start;
//	}
//}

//char * my_strncpy(char *dest, const char *src,size_t num)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char *start = dest;
//	while (num&&(*dest++ = *src++))
//	{
//		num--;
//	}//����ѭ����num���ַ��Ѿ����������num>strlen(src),��src�ַ��Ѿ�ȫ������
//
//	if (num)//num�����ַ����ĸ���
//	{
//		while (--num)
//		{
//			*dest++ = '\0';
//		}
//	}
//	else
//	{
//		*dest = '\0';
//	}
//	return start;
//}



//strncat����
//char *my_strncat(char *dest, const char *src, size_t num)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char *start = dest;
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (num && (*dest++ = *src++))
//	{
//		num--;
//	}
//	if (num)
//	{
//		return start;
//	}
//	else
//	{
//		*dest='\0';
//	}
//	return start; 
//}
//
//int main()
//{
//	char arr[20] = "abcde";
//	//printf("%s\n", strncat(arr, "hello", 6));
//	//printf("%s\n", my_strncat(arr, "hello", 3));
//	printf("%s\n", my_strncat(arr, arr, 3));
//	return 0;
//}


//�ж��ǲ�����ת�ַ�
//����������ַ��������ͬ���ַ� ͨ��strncat() abcdeabcde
//Ȼ��ͨ��strstr()����,����û�����ַ����������ַ����Ͱѵ�ַ���أ����û�оͷ���NULL
//char *strstr(const char *string, const char *strCharSet)
//int main()
//{
//	char arr[20] = "abcde";
//	char arr1[] = "bcdea";
//	//�ַ������Ȳ���ȣ�һ��������ת������
//	if (strlen(arr) != strlen(arr1))
//	{
//		printf("������ת������\n");
//		return 0;
//	}
//
//	strncat(arr, arr, strlen(arr));
//	char *ret = strstr(arr, arr1);
//	if (NULL == ret)
//	{
//		printf("������ת������\n");
//	}
//	else
//	{
//		printf("����ת������\n");
//	}
//	return 0;
//}

//strncmp����
//int my_strncmp(const char *s1, const char *s2, size_t num)
//{
//	assert(s1 != NULL);
//	assert(s2 != NULL);
//	while (num)
//	{
//		if (*s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		else
//		{
//			break;
//		}
//
//		if ((*s1 == '\0') && (*s2=='\0'))
//		{
//			return 0;
//		}
//		num--;
//	}
//	if (num == 0)
//	{
//		return 0;
//	}
//	return *s1 - *s2;
//}
//
//int main()
//{
//	char arr[] = "abcd";
//	char arr1[] = "abcd";
//	//int ret = strncmp(arr, arr1,6);
//	int ret = my_strncmp(arr, arr1, 1);
//	if (ret == 0)
//	{
//		printf("����\n");
//	}
//	else if (ret > 0)
//	{
//		printf("����\n");
//	}
//	else
//	{
//		printf("С��\n");
//	}
//	return 0;
//}



//strtok����
//�ָ��ַ�
//int main()
//{
//	char arr[] = "3479676393@qq.tech";
//	char arr1[20] = { 0 };
//	char arr2[] = "@.";
//	strcpy(arr1, arr);
//	char *p = NULL;
//	for (p = strtok(arr1, arr2); p != NULL; p = strtok(NULL, arr2))
//	{
//		printf("%s\n", p);
//	}
//
//	//char *p = strtok(arr1, arr2);
//	//while (p != NULL)
//	//{
//	//	printf("%s\n", p);
//	//	p = strtok(NULL, arr2);
//	//}
//
//
//	//char* tmp=strtok(arr1, arr2);
//	//printf("%s\n", tmp);
//
// //   tmp = strtok(NULL, arr2);
//	//printf("%s\n", tmp);
//
//	//tmp = strtok(NULL, arr2);
//	//printf("%s\n", tmp);
//
//
//	return 0;
//}